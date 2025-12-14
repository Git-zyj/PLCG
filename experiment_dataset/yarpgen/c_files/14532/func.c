/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14532
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
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)14)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned short) min((arr_6 [i_2 - 2] [i_2 - 2] [i_2 + 1]), (((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (arr_6 [(unsigned short)16] [i_2 + 2] [i_2]) : (1638775816U)))));
                    arr_10 [(unsigned short)11] [i_1] [i_1] = max(((+(arr_6 [i_2] [i_2 + 2] [i_1]))), (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2] [i_1])) >> (((((/* implicit */int) var_1)) - (63)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_7 [0ULL] [i_1]) : (((/* implicit */unsigned int) arr_0 [i_1])))))));
                    arr_11 [18U] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (max((((unsigned int) -1)), (((/* implicit */unsigned int) ((unsigned short) var_0)))))));
                }
            } 
        } 
    } 
    var_15 = var_2;
    var_16 = ((/* implicit */_Bool) var_13);
}
