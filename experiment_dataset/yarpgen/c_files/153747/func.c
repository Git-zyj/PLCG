/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153747
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((_Bool) (_Bool)1))));
    var_11 -= ((/* implicit */int) ((unsigned char) (short)28672));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_4 [7ULL] = ((/* implicit */signed char) var_6);
        var_12 = ((/* implicit */int) ((unsigned char) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))))) ? (((/* implicit */int) var_7)) : ((-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)146)) : (((/* implicit */int) arr_3 [i_0])))))))))));
    }
    var_14 = ((/* implicit */short) var_3);
}
