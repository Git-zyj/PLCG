/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164295
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_19)) ? (var_18) : (((/* implicit */unsigned long long int) var_6)))))) - (((/* implicit */int) var_10))));
    var_21 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_22 |= max((((/* implicit */long long int) (short)-32654)), (((arr_2 [i_0] [i_0]) + (((/* implicit */long long int) 2612623960U)))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [20U] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_2 [i_0] [i_0]))) + (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) + (arr_2 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_13);
        var_24 = ((/* implicit */short) ((unsigned long long int) -1LL));
    }
    for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        arr_8 [i_1 - 3] = ((/* implicit */short) ((unsigned long long int) min((var_0), (((/* implicit */unsigned long long int) arr_7 [i_1 - 1])))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1] [i_1 - 3])) / (((/* implicit */int) arr_6 [i_1 + 1]))))) / (((((/* implicit */_Bool) var_13)) ? (var_0) : (var_7)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 1) 
    {
        arr_11 [i_2 + 2] [i_2 + 2] = ((/* implicit */short) ((unsigned long long int) arr_10 [i_2 + 2]));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_11)) < ((~(11735395710051972347ULL))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */short) arr_9 [i_2]);
    }
}
