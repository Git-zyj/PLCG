/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174807
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
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6))))), (var_7)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((var_8) | (arr_9 [i_1 + 3] [i_3] [i_3] [i_3]))) > ((+(arr_7 [1] [i_2 + 1] [i_1])))));
                                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (6899526503141806827ULL)))) ? (((/* implicit */unsigned long long int) arr_2 [i_1 + 2])) : ((~(var_11))))) >= (min((min((var_5), (((/* implicit */unsigned long long int) (signed char)53)))), (((/* implicit */unsigned long long int) (-(var_0))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_7 [i_1] [i_2] [i_0]))));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_1 + 3] [i_2 + 1] [i_1] [i_2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) -7322876042877858307LL)) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (-7322876042877858310LL) : (7322876042877858328LL))) <= (((/* implicit */long long int) arr_7 [i_0] [i_1 + 3] [i_0])))))) : (((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_2 - 1] [i_2] [i_0] [i_2] [i_2])) ? (3211063457U) : (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8191))))))))));
                }
            } 
        } 
    } 
}
