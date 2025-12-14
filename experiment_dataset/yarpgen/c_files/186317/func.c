/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186317
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
    var_16 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) >> (((var_10) - (2045396749)))))) ? (((/* implicit */long long int) (+(arr_4 [i_2])))) : (max((var_7), (((/* implicit */long long int) arr_1 [i_2]))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) max((var_2), (((/* implicit */signed char) var_6))))), (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_2]) : (((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_2]))))))) : ((-(max((((/* implicit */unsigned int) arr_0 [i_2] [i_1])), (1023U)))))));
                    var_18 = ((/* implicit */long long int) var_11);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_13), (((/* implicit */int) (unsigned short)29302))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3 + 1])) && (((/* implicit */_Bool) min((min((((/* implicit */long long int) -195488654)), (var_0))), (min((var_0), (arr_7 [i_1] [i_0]))))))));
                                arr_12 [6] [i_1] [i_1] [(unsigned short)14] [i_0] = min((((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_9 [i_3 + 1] [i_4 - 1] [i_4] [i_4 + 2] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_3 - 1] [i_3] [i_3] [i_4 + 2])))), (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0])) / (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
