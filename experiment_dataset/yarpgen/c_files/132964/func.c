/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132964
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) 3288346484U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)181), ((unsigned char)202))))) : (1006620826U)));
    var_13 &= ((/* implicit */signed char) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-19)))) ? (((/* implicit */int) max(((signed char)22), (((/* implicit */signed char) var_10))))) : (((/* implicit */int) var_4))))) + (((((/* implicit */_Bool) 536991712U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-5281815690100828739LL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) 1006620790U))));
                    arr_8 [i_0] [i_0 + 1] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [8U] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [(short)11]))) : (arr_1 [i_1])))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 3])) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2])) : (((/* implicit */int) arr_2 [i_2 - 1] [(short)15] [i_0])))) : (1165220813));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)0)))) - (((/* implicit */int) arr_4 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0 - 1] [i_1 + 1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((arr_13 [i_0]) >= (min((var_6), (((/* implicit */long long int) ((unsigned int) arr_4 [i_0] [i_2])))))));
                                var_15 = (i_0 % 2 == zero) ? (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)15507)) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2 - 3]))) : (arr_5 [i_1] [i_2] [i_3]))) + (27147LL)))))), (((((17894204280481604480ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3])))))))) : (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)15507)) << (((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2 - 3]))) : (arr_5 [i_1] [i_2] [i_3]))) + (27147LL))) - (12183LL)))))), (((((17894204280481604480ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3]))))))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */short) max((var_3), (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_10))))))));
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (short)26772))));
}
