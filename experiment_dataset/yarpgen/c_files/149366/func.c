/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149366
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_7 [i_0]))))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_4] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((((/* implicit */int) arr_8 [i_2 + 2] [i_1] [i_0])) - (((/* implicit */int) arr_8 [i_2 + 2] [i_1] [i_0]))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_1] [i_1] [i_1] [i_1]) > (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_4])))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_3 [i_1]) : (arr_3 [i_4]))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 1]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) arr_7 [i_0]);
                                var_22 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */int) max((arr_8 [i_0] [(short)8] [i_1]), (((/* implicit */unsigned short) arr_6 [i_2 + 1] [i_2 + 1]))))) >> (((((arr_20 [i_0] [2LL] [i_2] [i_5] [i_6]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6] [i_6]))))) - (9209515081847062233ULL))))), (((((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_1])) : (((/* implicit */int) arr_17 [i_0] [i_2 + 1] [i_5] [i_5])))) * (((arr_1 [(short)0] [i_1]) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))))));
                                var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_21 [i_0] [i_0] [i_1] [i_2 + 2] [i_5] [i_0]), (arr_8 [i_0] [(unsigned short)16] [i_0]))))))), (((((/* implicit */_Bool) max((arr_18 [i_0] [i_0]), (((/* implicit */unsigned int) arr_17 [i_6] [i_1] [i_1] [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_14 [1U] [1U] [1U] [i_0] [1U])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_5] [i_5])) : (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((arr_2 [i_1]) ? (max((((/* implicit */unsigned long long int) ((-650053783739502052LL) | (((/* implicit */long long int) 1376963111))))), (arr_20 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56740)) ? (1376963111) : (-1376963140)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_16))))) ? (((((/* implicit */int) var_14)) + (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) var_2))))));
}
