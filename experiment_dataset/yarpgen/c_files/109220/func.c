/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109220
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
    var_11 = (~(((-2147483635) ^ ((~(((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) var_7))))))))) != (((unsigned long long int) arr_1 [i_0] [i_0 + 2]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    arr_10 [i_0] = ((/* implicit */signed char) (short)26281);
                    var_12 ^= ((/* implicit */unsigned short) min(((~(((/* implicit */int) (signed char)28)))), (((/* implicit */int) (signed char)-15))));
                    arr_11 [i_1] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_7)))), (arr_3 [i_1] [i_2 + 1])))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0 - 1])) : ((~((~(arr_2 [i_0]))))));
                }
                for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    arr_15 [i_0] [i_3] [i_3] [i_1] = ((/* implicit */short) arr_8 [i_1] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 17; i_5 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), ((unsigned char)149)))) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2])) : (min((var_3), (((/* implicit */int) (_Bool)1))))))), (803829745U)));
                                arr_22 [i_5] [i_4] [i_3] [(short)1] [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)22))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)35)) && (((/* implicit */_Bool) (signed char)-15))));
                            }
                        } 
                    } 
                }
                var_14 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_6 [i_1] [i_0 + 1])))), (((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
}
