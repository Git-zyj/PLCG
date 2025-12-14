/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119670
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
    var_12 &= ((unsigned short) (-(((/* implicit */int) ((unsigned short) var_1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) (unsigned short)65535);
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_1);
    }
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (var_4)));
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) max(((unsigned short)13093), (((/* implicit */unsigned short) var_3)))))) != ((+(((/* implicit */int) (unsigned short)65527))))));
}
