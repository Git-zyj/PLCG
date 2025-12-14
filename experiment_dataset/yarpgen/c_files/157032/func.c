/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157032
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 += var_6;
        var_17 = ((/* implicit */int) arr_3 [(unsigned short)11] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_1 [11U] [i_0])) % (var_2)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1])) > (((/* implicit */int) var_5))));
        arr_9 [i_1] [(unsigned short)0] = arr_0 [0U];
        arr_10 [i_1] = arr_7 [9U];
        var_19 = ((/* implicit */unsigned short) max((var_19), (var_5)));
    }
}
