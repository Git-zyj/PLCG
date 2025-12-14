/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104804
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [(signed char)6] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_3]);
                        var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned short) arr_10 [i_3] [i_1] [i_3] [i_3]))) : (((/* implicit */int) var_8))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_15 [i_4] = ((/* implicit */short) var_7);
                        arr_16 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((int) (_Bool)1));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((unsigned short) max((((((/* implicit */_Bool) arr_7 [i_4])) || (arr_19 [i_0] [i_2] [(_Bool)1] [i_5]))), (((arr_19 [i_1] [i_2] [i_4] [i_5]) || (((/* implicit */_Bool) var_7)))))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] [(unsigned short)7])) <= ((~(7239380572649546000ULL)))));
                            arr_20 [(short)4] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_13 [i_5] [i_1] [i_2] [i_4]) : (arr_13 [i_0] [i_1] [i_1] [(unsigned char)11])))));
                            var_17 = ((/* implicit */_Bool) min((var_17), ((!((!(((/* implicit */_Bool) arr_0 [i_1]))))))));
                            var_18 ^= ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28004)) ? (((/* implicit */int) (short)28009)) : (((/* implicit */int) (signed char)-12))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_25 [i_6] [i_0] [i_2] [(_Bool)1] [i_6] [i_0] = ((/* implicit */int) (~((~(((arr_0 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1])))))))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((_Bool) arr_22 [i_2] [i_1] [i_1] [i_1] [i_2] [i_6])))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_0] [i_7]))))) || (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [2U] [2U] [i_0])))))));
                        arr_28 [i_2] [i_2] [i_2] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7]))) * (var_1))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */short) ((unsigned short) arr_26 [i_0] [i_0] [i_2] [i_7]));
                            arr_33 [i_2] [i_8] [i_2] [i_8] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_2] [i_7] [(signed char)13] [i_2])) ? (((/* implicit */int) arr_21 [i_2])) : (((/* implicit */int) arr_21 [i_2]))))));
                        }
                        arr_34 [(signed char)7] |= ((/* implicit */_Bool) var_13);
                        arr_35 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_0 [0LL])))));
                    }
                    for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_22 -= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_9] [13ULL] [i_1] [i_0])) ? (((/* implicit */int) arr_22 [i_2] [i_1] [i_2] [i_2] [i_9] [i_2])) : (((/* implicit */int) arr_22 [i_2] [i_2] [(_Bool)1] [i_0] [i_0] [i_2]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_9] [i_9])))) : (((arr_21 [i_1]) ? (((/* implicit */int) arr_26 [i_0] [i_9] [i_0] [i_0])) : (arr_18 [i_0] [i_0] [8] [i_0] [(short)6] [i_0] [i_2]))))));
                        arr_40 [i_0] [i_1] [i_1] [i_1] [14] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_32 [i_0] [i_1] [i_0] [i_0] [i_0] [i_9])) : (arr_5 [i_1] [i_2])))))) ? (((/* implicit */int) arr_26 [i_9] [i_2] [i_1] [i_0])) : (max((arr_30 [i_0] [i_1] [i_2] [i_1] [i_9]), (arr_30 [i_0] [i_0] [i_1] [i_2] [12U])))));
                        arr_41 [i_9] [i_2] [i_1] [(short)4] [i_0] = ((((/* implicit */_Bool) ((-1629630517) | (((/* implicit */int) (unsigned short)3657))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)28004))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_38 [i_9] [i_2] [(short)11] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [i_9]))))))))) : (((((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) arr_1 [(unsigned short)8] [i_1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1]))))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_2] [i_2] [i_2] [6LL] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0]))) : (arr_36 [i_2] [i_9]))))));
                        arr_42 [i_9] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((unsigned long long int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1])))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)28010)) / (((/* implicit */int) (signed char)-46))))) ? (((/* implicit */unsigned long long int) (-(var_13)))) : (var_5))) : (((/* implicit */unsigned long long int) var_2))));
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    var_25 += ((/* implicit */long long int) var_3);
    var_26 = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned short) var_0))));
}
