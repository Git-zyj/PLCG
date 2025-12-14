/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157886
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
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_3]);
                            arr_13 [(short)8] [i_1] [i_1 + 3] [i_1 + 1] [i_1] [i_1 + 4] = ((/* implicit */_Bool) var_13);
                            var_16 = ((/* implicit */signed char) arr_8 [i_0] [(unsigned short)9] [i_2] [i_3] [i_4]);
                            arr_14 [i_0] [i_0] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_2] [i_3] [i_3]);
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((var_5), (var_12))))))))))));
                            var_18 |= ((/* implicit */unsigned short) var_2);
                            arr_18 [i_5] [i_5] [i_3] [i_2] [i_0] [i_5] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_8))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (((((/* implicit */_Bool) arr_20 [(signed char)8] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)7446)) >= (((/* implicit */int) (signed char)89)))))))) == (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1 + 1] [i_0] [i_3] [i_6])))))));
                            arr_22 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_1 - 1] [i_2])), (arr_6 [i_0] [8ULL] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (arr_5 [i_0] [5LL] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_0 [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (arr_17 [i_0] [i_0] [i_6] [i_0] [i_0])))))));
                            arr_23 [i_0] [i_6] [i_2] [i_6] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]);
                            var_20 = ((/* implicit */signed char) arr_0 [i_3]);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_10)) : (var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_0] [(signed char)4] [(unsigned short)10] [i_0] [i_0])) - (((/* implicit */int) arr_20 [i_6] [(signed char)0] [i_6]))))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) var_8)))))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            arr_27 [i_7] [i_1 + 3] [i_2] [i_1 + 3] [i_1 + 3] [i_1 + 3] = ((/* implicit */signed char) var_8);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_7 - 1] [i_7 + 2] [i_7 - 1])) ? (((/* implicit */int) arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 2])) : (((/* implicit */int) arr_6 [i_7 + 1] [i_7 + 1] [i_7 - 1]))));
                            arr_28 [i_7] [i_1] [i_1 + 3] [i_1 + 1] [5ULL] = max((((((/* implicit */_Bool) arr_11 [i_1] [i_1 + 2] [i_1 + 2] [i_2] [i_3] [i_7] [i_7])) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) arr_11 [(_Bool)1] [i_1 + 1] [i_3] [i_1 + 1] [i_7] [i_7] [i_1 + 1])))), (((/* implicit */int) max((arr_11 [i_1] [i_1 + 4] [i_2] [i_2] [i_1] [i_3] [i_7]), (arr_11 [i_0] [i_1 + 2] [i_3] [i_3] [i_3] [i_1 + 2] [i_7])))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_10 [i_1 + 3] [i_1 + 2] [i_1 + 3]), (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 3])) ? (arr_10 [i_1 + 3] [i_1 + 3] [i_1 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_1 + 4] [i_1 - 1] [i_1 + 4])))));
                            arr_32 [i_0] [i_1] [i_1 + 3] [i_2] [i_3] [i_8] = ((/* implicit */int) ((((_Bool) (unsigned short)7446)) ? (arr_25 [i_0] [(signed char)9] [i_0] [i_0] [i_0] [(signed char)3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_30 [i_0] [i_0] [i_2] [0] [i_8]))) ? (((/* implicit */int) max(((unsigned short)58090), ((unsigned short)7428)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)7446)) : (((/* implicit */int) (unsigned short)58090)))))))));
                            arr_33 [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (signed char)4)))));
                            arr_34 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)7446)), (864198577)));
                        }
                    }
                } 
            } 
        } 
        arr_35 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [5ULL] [i_0] [i_0])))))) == (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [2] [2] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        arr_38 [i_9] = ((/* implicit */signed char) var_8);
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            arr_41 [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) var_0)) : (((((var_0) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((unsigned short) var_0))) : ((-(((/* implicit */int) (unsigned short)48366))))))));
            arr_42 [i_9] [1] = ((/* implicit */unsigned short) ((int) (-(((((/* implicit */_Bool) arr_37 [i_9])) ? (arr_40 [i_9] [i_9] [i_10]) : (arr_39 [14ULL] [i_10]))))));
        }
        for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            var_24 += ((/* implicit */unsigned long long int) ((signed char) arr_40 [i_9] [i_11] [i_11]));
            var_25 += ((/* implicit */unsigned long long int) ((((arr_44 [i_9] [i_9] [i_9]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_36 [i_11])) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_36 [(signed char)20])) ? (((/* implicit */int) arr_36 [i_9])) : (((/* implicit */int) arr_37 [i_11])))))) != (((/* implicit */int) arr_43 [i_9] [i_9]))));
            arr_45 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_9))));
            var_26 += ((/* implicit */_Bool) ((int) arr_36 [i_9]));
        }
    }
    for (signed char i_12 = 1; i_12 < 19; i_12 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            for (signed char i_14 = 3; i_14 < 19; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 1; i_15 < 19; i_15 += 3) 
                    {
                        for (signed char i_16 = 2; i_16 < 18; i_16 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) var_11)))) ? (var_10) : (((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_16 - 2])) || (((/* implicit */_Bool) arr_36 [i_12]))))))), (((/* implicit */int) var_5))));
                                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_58 [i_12] [(unsigned short)6] [(unsigned short)6] [i_12])), (arr_55 [(short)14])))))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */signed char) var_6);
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        var_30 |= ((/* implicit */unsigned short) var_2);
                        arr_65 [i_12] [i_12] [i_13] [i_14] [(signed char)10] [i_17] = ((/* implicit */short) max(((-(((/* implicit */int) max((arr_57 [i_12] [i_12 - 1] [i_12] [i_12 - 1]), (var_8)))))), (max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (signed char)-5)) : (arr_51 [i_12] [i_12] [(unsigned short)18])))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-56)) : (-1380085982)));
                        arr_66 [i_12] [i_13] [i_13] [i_14 + 1] [i_17] [i_17] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_7)) ? ((~(arr_62 [i_17] [i_14] [(unsigned short)13] [i_12 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                        arr_67 [i_12] [i_13] [i_14] [i_12] [i_12] = var_3;
                    }
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        arr_71 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) arr_40 [i_18] [i_14] [i_12]);
                        var_32 = ((/* implicit */long long int) var_8);
                        arr_72 [i_12] [i_12] [i_12] [i_12] [i_12 - 1] = ((/* implicit */unsigned short) var_4);
                        var_33 -= (+((~((~(((/* implicit */int) arr_53 [i_12])))))));
                    }
                    var_34 |= ((/* implicit */unsigned short) arr_49 [i_12 + 1] [i_12 + 1] [i_14 - 3]);
                }
            } 
        } 
        var_35 = (((!(((/* implicit */_Bool) 1380085982)))) && (((/* implicit */_Bool) (-(arr_39 [i_12 - 1] [i_12 - 1])))));
    }
    for (signed char i_19 = 1; i_19 < 19; i_19 += 3) /* same iter space */
    {
        arr_76 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_70 [i_19] [i_19 - 1])) ? (((/* implicit */int) ((unsigned short) (~(6142400506759698263LL))))) : (((((/* implicit */int) arr_44 [23] [i_19] [i_19])) * (((/* implicit */int) arr_44 [(unsigned char)1] [i_19] [i_19 + 1]))))));
        var_36 = ((/* implicit */int) var_6);
        arr_77 [i_19] [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
        var_37 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_64 [i_19] [i_19] [i_19] [i_19] [(signed char)0] [i_19 + 1]) ? (((((/* implicit */_Bool) (unsigned short)29093)) ? (6142400506759698263LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))))) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_19] [i_19 + 1] [i_19] [i_19 - 1]))))))));
    }
}
