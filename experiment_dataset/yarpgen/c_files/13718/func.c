/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13718
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
    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 1770234268)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) : (18446744073709551593ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((((arr_5 [i_2 + 2] [i_1] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2 + 2] [i_2 + 2]))))), (((unsigned int) 4569114209972797879ULL))));
                    var_21 -= ((/* implicit */unsigned long long int) ((max((max((((/* implicit */long long int) var_15)), (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_5 [(_Bool)1] [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2 + 2])))))))) | (((/* implicit */long long int) min(((-(var_16))), (min((var_16), (((/* implicit */unsigned int) (short)-10973)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_7))));
                                arr_13 [i_0] [i_1] [i_2] [i_3 - 3] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60441)) || (((/* implicit */_Bool) 2463878467290878579ULL))))) << (((((((/* implicit */_Bool) -2040925306)) ? (-5840995645617714231LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)87))))) + (5840995645617714261LL))))), (((((/* implicit */int) arr_9 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_3 + 4] [i_3] [i_3])) & (((/* implicit */int) var_15))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-92))))) - (((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
                }
            } 
        } 
    } 
}
