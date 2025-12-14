/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178305
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
    var_19 = ((((/* implicit */_Bool) ((2703258414U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6115)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) var_10)))))) : (((var_7) ? (var_17) : (min((((/* implicit */unsigned int) (unsigned short)8534)), (var_6))))));
    var_20 = ((/* implicit */long long int) (-((+(((int) var_7))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */int) ((((((var_11) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) * (((/* implicit */long long int) min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) var_5))))))) & (((/* implicit */long long int) var_17))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((var_18), (((/* implicit */long long int) min((min((var_17), (arr_4 [i_0] [(unsigned char)10]))), (min((arr_4 [(short)0] [(short)0]), (arr_0 [i_1])))))))))));
                var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_4 [i_0] [i_1]) >> (((var_17) - (2672249023U)))))), (((var_18) - (((/* implicit */long long int) arr_4 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] [i_1] [(_Bool)1] [i_3] [i_1] = ((/* implicit */short) ((max((min((arr_2 [i_3] [i_3] [i_1]), (var_6))), (((/* implicit */unsigned int) var_14)))) * (min((var_13), (var_13)))));
                            var_24 -= ((/* implicit */signed char) (!(var_5)));
                            arr_12 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (min((arr_0 [i_1]), (((var_15) ^ (((/* implicit */unsigned int) arr_6 [i_3] [i_3] [i_3] [i_3])))))) : ((~(arr_0 [i_0])))));
                            arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) (short)32759))))) ? (((var_15) * (arr_2 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (arr_6 [i_3] [i_2] [3U] [(_Bool)1])))))) != (((/* implicit */unsigned int) (((+(arr_6 [i_0] [i_0] [i_0] [0U]))) | (((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */int) (short)-1746)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
