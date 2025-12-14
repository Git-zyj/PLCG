/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131637
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
    var_13 ^= ((/* implicit */unsigned int) ((max(((+(var_12))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))) * (((/* implicit */unsigned long long int) ((int) var_5)))));
    var_14 = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) == (-1LL))) ? (var_5) : (min(((-9223372036854775807LL - 1LL)), (1LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_4 [i_0 + 3] [i_0 + 3]), (var_2)))), (max((var_12), (((/* implicit */unsigned long long int) arr_4 [i_0 - 3] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_13 [(short)11] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_10)) : (var_9))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_3 + 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)48)) + (((/* implicit */int) (unsigned char)123))))) ? (((var_9) + (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (-(var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_4 [1U] [i_1]))))) ? (((((/* implicit */_Bool) (signed char)-70)) ? (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))) : (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (var_12)));
                        }
                    } 
                } 
            }
        } 
    } 
}
