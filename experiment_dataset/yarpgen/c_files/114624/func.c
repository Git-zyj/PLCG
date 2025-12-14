/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114624
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~(max((14504424050812723317ULL), (((/* implicit */unsigned long long int) (~(2135443534U)))))))))));
    var_14 = (~(((/* implicit */int) var_11)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [16U] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) & (((/* implicit */int) arr_0 [i_0] [i_1])))) * (((/* implicit */int) (short)14240))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((arr_12 [i_0] [i_1] [i_3] [(signed char)16]), (((/* implicit */int) var_11)))) | (((/* implicit */int) arr_11 [i_2] [i_1] [(_Bool)1] [0U] [i_1] [i_2]))))) ? ((-(arr_12 [15U] [i_2] [i_2] [i_4]))) : ((-(((/* implicit */int) (short)-1))))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_2] [i_0]) ? (850111264U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_3] [i_0] [i_0])))))) ? ((-(max((var_7), (((/* implicit */unsigned long long int) arr_0 [i_2] [i_1])))))) : (((/* implicit */unsigned long long int) ((262143) + (((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((var_10) * (((/* implicit */unsigned int) 262143)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))) > (((var_8) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))));
    var_18 += ((/* implicit */int) (unsigned short)2976);
}
