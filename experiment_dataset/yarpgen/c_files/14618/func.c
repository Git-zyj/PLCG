/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14618
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]))));
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) + (arr_3 [i_1] [i_1] [i_0])))))) ? ((-(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (arr_3 [i_1] [i_0] [i_0]))) : ((~(arr_3 [i_1] [(unsigned short)22] [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_3] [(unsigned short)3] [i_1] [i_1] [18] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))))) / (arr_9 [i_1] [i_2] [i_1] [i_0])));
                            arr_13 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_2 [i_1]) : (arr_2 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) ((var_5) < (((/* implicit */int) (unsigned char)191))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3])) ? (((/* implicit */int) var_3)) : (var_4))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                            {
                                var_12 |= ((/* implicit */unsigned short) arr_9 [i_3] [i_0] [(signed char)19] [i_0]);
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) 2147483639))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (2147483639) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_0] [i_2] [i_2] [i_4])), (-2147483640)))) ? (max((var_8), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) (~(var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                                var_14 &= ((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_10 [i_1] [i_2] [i_3] [i_4])))) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_4])))))));
                                var_15 += ((/* implicit */long long int) arr_3 [i_2] [i_1] [i_0]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) < (((/* implicit */int) var_9)))) ? (((var_4) | (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_0)) ? (2147483634) : (((/* implicit */int) var_3)))))))));
}
