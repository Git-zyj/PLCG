/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181220
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
    var_15 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 - 2]))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1 + 3]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2])) << (((4282151832U) - (4282151813U))))), (((/* implicit */int) arr_8 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 2] [i_1 - 1]))) ^ (var_3))))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) | (((/* implicit */int) arr_1 [i_0]))))) ? ((~(9543166074597949634ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (450029333472921491LL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) : (var_0)))))))))));
                    var_18 = ((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (max((arr_6 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]))))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((((/* implicit */int) var_14)) - (2147483626)))))) - ((+(var_0)))));
}
