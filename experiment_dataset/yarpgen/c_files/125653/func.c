/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125653
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
    var_20 += ((/* implicit */_Bool) (~(var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 ^= ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 2])) & (var_9)))) >= (max((var_12), (((/* implicit */long long int) var_1)))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1 + 2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) ((unsigned short) (_Bool)1))))), ((-(max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1 - 1] [i_2])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) arr_9 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_8 [i_4] [i_2] [i_0])) ? (arr_6 [i_0] [i_1 + 1] [i_2] [i_3]) : (((/* implicit */int) var_4))))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1927487090171752420LL)))))));
                                var_23 -= ((/* implicit */unsigned short) 1023);
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1 - 1] [i_2] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1721804423)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -1712519940)))), (((/* implicit */long long int) ((unsigned short) arr_1 [i_2] [i_0])))));
                    arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((min((var_15), (((((/* implicit */unsigned long long int) 4294967295U)) + (16540698711550100653ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_6 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */int) arr_5 [i_2] [i_1 - 1] [i_0] [i_0]))))), (arr_0 [i_2]))))));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_18 [i_5] [i_1 + 2] [i_1 + 1] = ((/* implicit */unsigned short) ((int) max((var_13), (((/* implicit */int) (_Bool)1)))));
                    arr_19 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1588211693)) ^ (arr_8 [i_0] [i_1 - 1] [i_5 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) > (-1)))) : (arr_4 [i_0] [i_1 - 1] [i_5 + 1]));
                    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_5 + 1])) : (((/* implicit */int) arr_1 [i_1 + 2] [i_5 + 1]))))) ? (((var_9) % (((/* implicit */int) arr_1 [i_1 + 2] [i_5 + 1])))) : (((/* implicit */int) min((arr_1 [i_1 - 1] [i_5 + 1]), (arr_1 [i_1 + 1] [i_5 + 1])))));
                }
            }
        } 
    } 
}
