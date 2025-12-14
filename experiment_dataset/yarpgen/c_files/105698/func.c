/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105698
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */long long int) ((unsigned short) (+((-(arr_3 [i_0] [i_1] [i_0]))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (arr_3 [i_0 + 1] [i_0 + 1] [i_0])));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((_Bool) arr_11 [i_1] [i_3] [i_1] [i_1] [i_1]));
                                var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_4 - 1] [i_2 - 1] [i_2] [(short)0] [i_4 - 1] [i_0 - 1]))))), ((-(var_5)))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((+((-(var_6))))) < (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2]))))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_1])) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)108))))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_13)))))));
            }
        } 
    } 
}
