/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172492
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) ((arr_3 [i_2] [i_1] [i_0]) - (arr_3 [i_0] [i_1] [i_2])))) ? ((-(arr_3 [i_0] [i_1] [(short)6]))) : (((var_8) ? (arr_3 [i_0] [i_1] [i_2]) : (-1210906834)))))));
                    arr_7 [i_2] [i_2] = ((/* implicit */_Bool) max((((min((((/* implicit */unsigned long long int) 1185636819U)), (0ULL))) + (max((((/* implicit */unsigned long long int) var_0)), (arr_1 [i_1]))))), (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_2]) + (((/* implicit */int) (signed char)-120))))) ? (((/* implicit */unsigned long long int) var_2)) : (((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [(unsigned char)9] = ((((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (268435456)))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [(unsigned char)0])) : (arr_1 [i_4 - 2]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) var_14))))));
                                var_16 = ((/* implicit */unsigned long long int) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) var_14))));
    var_18 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_1)) != (var_2)))), (var_10))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 8ULL))))), (((((/* implicit */_Bool) 4294967266U)) ? (var_1) : (((/* implicit */int) (short)17782)))))))));
}
