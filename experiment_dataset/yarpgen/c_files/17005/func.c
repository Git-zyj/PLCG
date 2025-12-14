/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17005
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
    var_19 = ((/* implicit */signed char) ((unsigned int) ((var_16) ? (((5799835257077587172ULL) - (4532033422751538731ULL))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (4532033422751538731ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 6; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_0)), (arr_4 [i_0])))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    arr_11 [6LL] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) min((arr_5 [i_1 - 3] [i_0]), (arr_5 [i_1 + 4] [i_0])))), (((long long int) var_13))));
                    arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_2] [i_2] [i_2 - 2]) + (arr_7 [i_2] [8LL] [i_2 + 2])))) ? (((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */int) arr_0 [7] [i_1])) | (arr_5 [i_2] [i_1])))))) : (min((((/* implicit */unsigned long long int) 1290129539)), (4532033422751538731ULL)))));
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                {
                    arr_16 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */int) (((-(arr_13 [i_0] [i_1] [i_3] [i_1]))) >= (min((arr_2 [i_3] [i_1] [i_0]), (((/* implicit */long long int) max((arr_14 [(short)8] [i_1] [i_1]), (1567824074U))))))));
                    arr_17 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((signed char) ((4532033422751538731ULL) / (((/* implicit */unsigned long long int) 1290129561)))));
                    arr_18 [i_1] [i_0] [i_1] [i_3] = (+(var_2));
                    arr_19 [i_3] [i_1] [i_3] = min((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_3] [i_3])) ? (var_6) : (arr_2 [i_1 + 2] [i_3] [i_3]))), (((/* implicit */long long int) ((int) arr_2 [i_1 + 1] [i_3] [i_3]))));
                }
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                {
                    arr_23 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1290129533)) ? ((~(arr_20 [i_1] [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_1] [i_4]))))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 3] [i_1] [i_4])) ? (arr_13 [i_0] [(short)9] [i_0] [i_1]) : (arr_13 [i_0] [i_1 + 3] [i_1 - 2] [i_4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_8 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_0] [i_4] [i_0] [i_1]) >= (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])))))) : (max((arr_8 [i_1]), (((/* implicit */unsigned int) var_14)))))))));
                    arr_24 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((unsigned int) var_8))))) ? (((((/* implicit */_Bool) 4532033422751538731ULL)) ? (arr_7 [i_0] [i_1] [i_4]) : (((/* implicit */long long int) 1290129539)))) : (((/* implicit */long long int) min((arr_14 [i_1 - 4] [i_4] [i_4]), (arr_14 [i_1 + 2] [7LL] [i_1]))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        arr_27 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_25 [i_5] [i_5 + 1] [i_5 - 1] [i_5])), (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4]))) + (arr_21 [i_4] [i_1 - 4])))));
                        arr_28 [i_1] [i_4] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1]);
                    }
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        arr_31 [i_6] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */long long int) 1290129532);
                        arr_32 [5ULL] [i_1] [i_1] [i_4] [i_1] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) (+(arr_3 [i_4] [i_6])))));
                        arr_33 [i_6] [i_1] [i_4] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_34 [i_0] [i_0] [i_6] [i_0] [6LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_4] [i_6])) ? (((/* implicit */unsigned long long int) arr_5 [i_1 + 2] [i_0])) : (6824888004428418715ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 11621856069281132892ULL)) ? (arr_8 [i_4]) : (((/* implicit */unsigned int) 2079629553))))), (arr_20 [i_0] [i_1 - 1] [i_1] [i_1]))))));
                        arr_35 [i_1] [i_4] [i_0] [i_1] = ((/* implicit */signed char) (short)6029);
                    }
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_38 [i_0] [i_1] [i_0] [i_1] [i_4] [i_7] = ((/* implicit */int) ((long long int) ((short) ((arr_3 [i_0] [i_1 + 4]) / (6824888004428418723ULL)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            arr_42 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (((((_Bool)1) ? (11621856069281132892ULL) : (11621856069281132900ULL))) - (((/* implicit */unsigned long long int) ((arr_4 [i_1 - 3]) + (((/* implicit */int) (_Bool)1)))))));
                            arr_43 [i_7] [i_4] [(_Bool)0] = ((/* implicit */short) arr_41 [i_0] [i_0] [i_1 - 4] [i_4] [i_7] [i_7] [i_8]);
                        }
                        for (short i_9 = 2; i_9 < 8; i_9 += 2) 
                        {
                            arr_47 [i_0] [i_1] [i_4] [i_7] [i_9] = ((/* implicit */long long int) (~(11621856069281132891ULL)));
                            arr_48 [i_9 - 1] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) arr_22 [i_1] [i_1 + 1]);
                        }
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_52 [i_0] [i_1 - 1] [0] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_4] [i_0] [i_0] [i_1] [i_1])) ? (-1235882514) : (((/* implicit */int) var_15)))))))) & (((/* implicit */int) ((short) ((long long int) arr_25 [i_0] [i_1] [i_4] [i_7]))))));
                            arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_7])) / (arr_4 [i_10])))) ? (((((/* implicit */unsigned long long int) arr_37 [i_1 + 3])) + (11621856069281132919ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4])))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_11 = 3; i_11 < 9; i_11 += 2) 
                        {
                            arr_56 [i_0] [i_1] [i_4] [i_1] [i_11] = ((((/* implicit */_Bool) arr_29 [i_1 + 4] [i_1 + 4] [i_1] [i_1 + 2] [i_1 + 1] [i_1])) ? (arr_29 [i_1 + 4] [i_1] [i_1] [i_1 - 1] [i_1] [i_1]) : (arr_29 [i_1 + 1] [i_1] [i_1 - 4] [i_1 + 4] [i_1] [i_1]));
                            arr_57 [i_1] [i_1] [i_4] [i_1] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 1] [i_11 - 3])) ? (arr_9 [i_1 + 3] [i_1] [i_11 - 3]) : (arr_9 [i_1 + 1] [i_1] [i_11 + 1])));
                        }
                        arr_58 [i_7] [i_1] [i_1 + 1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                    }
                    arr_59 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [1LL] [i_1] [i_1 + 2] [i_1] [i_1 - 4] [i_1] [i_0])) ? (35184372088831LL) : (((/* implicit */long long int) arr_44 [i_4] [i_4] [i_1 - 1] [i_1] [i_1 + 4] [i_0] [5ULL])))))));
                }
                arr_60 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)48668);
            }
        } 
    } 
}
