/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187714
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned int) (unsigned char)11))));
                arr_5 [i_0] = ((/* implicit */unsigned short) max((min((arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (((/* implicit */unsigned char) arr_0 [i_1 + 1] [i_1 - 2])))), (((/* implicit */unsigned char) min((arr_0 [i_1 + 1] [i_1 - 2]), (arr_0 [i_1 + 1] [i_1 - 2]))))));
                var_12 += ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)51712))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1]);
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_7 [i_4] [i_3] [(unsigned short)16] [i_0]))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) var_0);
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_6 [i_1]))));
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_19 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13823)) * (((/* implicit */int) arr_4 [i_1] [i_1 - 2] [i_1 + 1]))));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_15 [(unsigned short)18] [(unsigned short)18]))));
                        arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(arr_6 [i_1 - 1])));
                        arr_21 [2] [i_1] [i_1 - 2] [i_2] [i_5] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5])) & (((((/* implicit */_Bool) 1073741760)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51712))) : (4294967295U)))));
                        var_17 = ((/* implicit */unsigned short) ((_Bool) arr_3 [i_1 - 2]));
                    }
                    for (int i_6 = 3; i_6 < 18; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */int) ((var_4) >= (var_2)));
                        arr_24 [i_0] [i_0] [i_2] [i_0] = ((int) arr_18 [i_0] [i_6 - 1] [i_1 - 2] [i_6]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_28 [i_7] [i_0] [i_0] [(unsigned char)0] = ((/* implicit */signed char) (~(arr_23 [i_1 - 2])));
                        var_19 += ((/* implicit */unsigned char) (-(var_6)));
                    }
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_12 [i_8])) : (((/* implicit */int) arr_12 [i_8]))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_4 [(short)2] [i_1] [i_0]))));
                        arr_32 [i_0] [12U] [12U] [i_8] = ((/* implicit */signed char) var_5);
                    }
                }
                for (unsigned long long int i_9 = 4; i_9 < 17; i_9 += 1) 
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min((arr_29 [i_0] [i_0] [i_0] [i_0] [17] [i_0]), (((/* implicit */signed char) var_0))))), (((((/* implicit */_Bool) (short)2566)) ? (((/* implicit */int) arr_9 [(unsigned short)6] [i_1])) : (((/* implicit */int) var_9))))))) ? (min((((/* implicit */long long int) (unsigned char)14)), (((var_1) >> (((((/* implicit */int) arr_33 [i_0] [i_1] [6LL])) - (44))))))) : (max((min((arr_10 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_33 [i_9] [i_1] [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (short)2555))))))))))));
                    var_23 *= ((/* implicit */signed char) ((((/* implicit */int) max((arr_7 [i_9 - 4] [i_9 - 4] [i_1 - 3] [i_1 + 1]), (arr_7 [i_9 - 4] [i_9 + 1] [i_1 - 3] [i_1 - 1])))) | ((~(((/* implicit */int) (unsigned char)28))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (min((0), (((/* implicit */int) (short)511))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (-1)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2)))));
}
