/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130390
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 6352625280456241560ULL)) ? (((var_18) ? (((var_6) << (((var_10) - (1461326878U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (+((-(var_2))))))));
    var_21 = ((/* implicit */short) var_3);
    var_22 *= ((((/* implicit */_Bool) min((472286983U), (((/* implicit */unsigned int) -1111126313))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (min((((/* implicit */long long int) (+(-1111126326)))), (min((((/* implicit */long long int) var_7)), (-7150763518637989642LL))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((var_3), (((/* implicit */int) arr_0 [i_0] [i_4]))))))) ? (var_10) : (arr_1 [i_4])));
                                arr_12 [i_0] [i_4] [i_4] [7U] [10U] = ((/* implicit */short) ((((/* implicit */_Bool) ((2147483647) | (var_2)))) ? (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1] [i_1])) : (var_7)));
                                var_24 = ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]);
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] &= ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_0] [7ULL] [0ULL])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))))));
                var_25 = ((/* implicit */int) ((var_13) % (max(((+(var_15))), (((/* implicit */unsigned int) ((var_4) / (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
            }
        } 
    } 
}
