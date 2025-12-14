/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123242
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
    var_19 = var_1;
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [(unsigned char)4] [i_1] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_1] [i_2])) ? (3227587851U) : (1067379444U))) - ((-(1067379444U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45573)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) (unsigned char)3))))) : (max((arr_3 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_1 [10ULL] [i_2])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [4LL] [i_1 + 1])) - (arr_0 [i_0 + 2] [i_0]))))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 + 4] [i_1] [i_0])) ^ (((/* implicit */int) arr_7 [i_0] [i_1 + 4] [i_0]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0])) == (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4] [i_1] [i_1])) & (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [11]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))) : (max((3227587868U), (1067379444U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_0) / (arr_11 [i_0] [i_0] [i_0 + 2] [i_3])))) <= (max((((/* implicit */unsigned long long int) 3099684262U)), (arr_3 [i_3] [i_1]))))))))))));
                                var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3227587858U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))) : (3099684231U)))) - (((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_3 [i_0] [1U]) : (((/* implicit */unsigned long long int) 1067379437U)))))) > (max((max((((/* implicit */unsigned long long int) var_18)), (3815151315226789539ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
