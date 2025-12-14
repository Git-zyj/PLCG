/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17469
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
    var_20 = ((/* implicit */_Bool) ((int) var_11));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */int) ((unsigned long long int) arr_1 [i_0 + 2] [i_0 + 2]));
                    var_21 |= ((/* implicit */short) ((arr_3 [i_0 - 1] [(unsigned short)13] [2]) + (arr_2 [i_0 - 1])));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] [(signed char)17] = ((/* implicit */signed char) arr_4 [i_0] [i_0 - 1]);
                        var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)-15800)) >= (((/* implicit */int) (unsigned char)95)))));
                    }
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_23 |= ((/* implicit */int) ((_Bool) (unsigned char)40));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_0] [i_0 - 2])))))));
                        var_25 = ((unsigned long long int) ((unsigned int) (unsigned char)40));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_2] [i_2] [(signed char)10] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)40);
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            arr_20 [12] [i_1] [i_1] = ((unsigned char) arr_3 [i_0 - 4] [i_0 + 1] [i_0 + 2]);
                            var_26 ^= ((/* implicit */signed char) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_1])))) : (arr_2 [i_0 - 3])));
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_27 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)213)))));
                            var_28 = ((_Bool) ((int) arr_3 [i_2] [i_1] [i_2]));
                            var_29 = ((/* implicit */int) ((unsigned char) arr_7 [i_0 - 4] [i_0 + 2] [i_0 + 2] [i_0 + 1]));
                        }
                        arr_24 [i_0] [i_0] [i_0 - 3] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 1]))));
                        var_30 = ((/* implicit */signed char) arr_4 [i_1] [i_5]);
                    }
                    arr_25 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_21 [i_1] [i_2] [i_2] [i_2] [i_2] [i_0 - 3]);
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (unsigned char)40))))))));
                    var_32 ^= ((/* implicit */signed char) var_9);
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_22 [i_0 - 3] [5] [5]))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    arr_34 [i_0] [i_9] |= min((((/* implicit */int) ((_Bool) arr_13 [(_Bool)1] [i_0 - 1] [20LL]))), (((((/* implicit */int) arr_33 [4LL] [i_0 + 1] [i_0 - 1])) << (((1064474335U) - (1064474326U))))));
                    /* LoopSeq 4 */
                    for (long long int i_10 = 4; i_10 < 21; i_10 += 2) /* same iter space */
                    {
                        var_34 = arr_13 [i_0] [i_0] [i_0];
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 4) 
                        {
                            var_35 |= ((/* implicit */unsigned int) ((int) arr_37 [i_0 - 3] [i_0 - 3] [i_9] [i_10] [21]));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(var_12)))))) + (((((/* implicit */_Bool) ((short) var_17))) ? (min((var_8), (((/* implicit */unsigned long long int) arr_32 [(signed char)13] [(unsigned short)0] [i_10] [i_11])))) : (((/* implicit */unsigned long long int) ((var_17) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) arr_26 [i_0] [i_10])))))))));
                        }
                        var_37 = ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) arr_37 [i_0] [i_0 + 2] [i_10 - 1] [i_0] [i_0]))), (((unsigned char) (~((-9223372036854775807LL - 1LL)))))));
                    }
                    for (long long int i_12 = 4; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        var_38 ^= ((/* implicit */short) min((((long long int) arr_26 [i_0 + 2] [i_1])), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) & ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [9U] [i_0] [i_0 + 1] [i_0])), (var_7)))) : (((/* implicit */int) ((signed char) var_0))))))));
                        arr_44 [(_Bool)1] = ((/* implicit */signed char) min((min((arr_2 [i_0 + 1]), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((signed char) max((var_14), (((/* implicit */int) arr_22 [17] [i_1] [i_9]))))))));
                    }
                    for (long long int i_13 = 4; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        arr_49 [i_0] [i_1] [i_1] [i_9] [i_13] = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) 101547316U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (var_18))) + (((/* implicit */unsigned long long int) (~(949390839))))))));
                        var_39 *= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((unsigned long long int) 4193419980U))) ? (((/* implicit */int) max((((/* implicit */signed char) var_17)), (arr_29 [i_0] [(unsigned char)2] [i_0])))) : (((/* implicit */int) (unsigned char)172)))));
                    }
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) min((((((/* implicit */_Bool) arr_29 [(unsigned short)11] [(signed char)10] [(signed char)10])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)40))))) : (((((/* implicit */_Bool) var_10)) ? (-1008567615465342740LL) : (((/* implicit */long long int) arr_42 [i_0] [i_1] [i_9] [i_14])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)216)) && (((/* implicit */_Bool) (unsigned char)40))))))))));
                        arr_53 [i_0 - 4] [i_0] [i_0 - 2] [i_0] [i_0 - 3] = min((((((((/* implicit */_Bool) (unsigned char)216)) ? (var_16) : (((/* implicit */int) (short)0)))) >> (((((((/* implicit */_Bool) (unsigned short)54997)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_7)))) + (123))))), (((/* implicit */int) arr_43 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 + 1])));
                        arr_54 [i_0 - 1] [i_0 - 4] = (~(((/* implicit */int) arr_51 [i_14] [10] [i_0 + 2])));
                    }
                }
                var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((signed char) ((long long int) ((((/* implicit */int) (unsigned char)0)) << (((arr_3 [(_Bool)1] [i_0] [i_1]) - (976504060U))))))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) min((var_12), (67076096)))) - (min((101547307U), (4193419972U)))))));
}
