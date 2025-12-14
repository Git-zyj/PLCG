/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119278
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))), (((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)50902)))))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), ((-(3329867423581640272ULL)))));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_17 += ((/* implicit */_Bool) max(((+(8595043085905581372ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) : (((arr_2 [i_0] [i_0] [i_0]) ? (arr_4 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_11 [i_3] [i_2] |= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                var_18 = ((/* implicit */unsigned long long int) arr_2 [i_0] [(signed char)12] [i_0]);
                var_19 = ((/* implicit */unsigned short) arr_9 [i_0] [(_Bool)1] [i_3]);
            }
            for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 3) 
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_2))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)2309)) ? (((/* implicit */int) (short)2309)) : (((/* implicit */int) (short)2309)))))) ? (max((((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) arr_6 [i_0] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17486699581028455787ULL)) ? (((/* implicit */unsigned long long int) 2860708480U)) : (17486699581028455787ULL))))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */short) var_11);
                        var_23 += ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) >= ((~(((/* implicit */int) arr_18 [i_2] [i_4 - 1] [i_4 - 4] [i_4 + 1] [i_4 - 4] [i_4 - 2]))))));
                        var_24 = ((/* implicit */_Bool) var_10);
                        arr_20 [i_0] = ((/* implicit */_Bool) var_14);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_13))));
                        arr_24 [i_7] [i_0] [i_4 - 2] [i_5] [i_7] = max((((unsigned long long int) max((((/* implicit */short) arr_6 [i_0] [i_2])), (arr_18 [i_0] [i_2] [i_4] [i_5] [i_5] [i_7])))), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_4 - 2] [i_4 - 4] [(_Bool)1] [(signed char)2])));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_2] [i_4] [i_5] [(_Bool)1])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_5] [i_8])) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_4 - 2] [i_4 - 3] [i_8] [i_8]))));
                        var_27 &= ((/* implicit */unsigned long long int) arr_23 [i_8] [i_2] [i_4] [i_5] [i_2]);
                        arr_28 [i_5] [i_2] [i_0] [(unsigned short)3] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 1] [i_4 - 1]))));
                        arr_29 [i_0] [i_2] [i_4] [i_4 + 1] [i_4] = ((/* implicit */short) arr_1 [i_0]);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_28 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((((/* implicit */int) min((min((arr_16 [14U] [i_0] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1)))), (arr_14 [i_0])))) + (145))) - (15)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((((((/* implicit */int) min((min((arr_16 [14U] [i_0] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1)))), (arr_14 [i_0])))) + (145))) - (15))) - (63))))));
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)27359))));
                        arr_33 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 2])) - (((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 2]))))));
                        var_30 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [(signed char)4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_2] [(_Bool)1] [i_5] [i_9] [i_5] [i_5])))) : ((~(arr_32 [i_5]))))), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_2] [i_4 - 4] [i_5] [i_9]))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_2] [22U] [i_5] [14ULL])) : (((/* implicit */int) var_13)))))));
                        var_32 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_2] [i_4 + 1] [i_4 - 1]))));
                        arr_37 [i_4] [(short)6] [0ULL] [i_4] [i_0] [i_4] = ((/* implicit */signed char) arr_10 [i_0]);
                        arr_38 [(signed char)20] [i_4 - 4] [i_4 + 1] [i_5] [13ULL] [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_6 [(unsigned short)3] [i_2]))));
                        var_33 &= ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_4 - 1] [21U])) << (((((/* implicit */int) arr_26 [i_4] [i_2] [i_2] [i_4])) + (9728)))));
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                    {
                        arr_41 [i_11] [i_5] [i_0] [i_0] [i_4] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_12 [9ULL] [i_4 - 2] [(short)18] [(signed char)17]);
                        var_34 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4] [i_5]))))) | (((((/* implicit */_Bool) arr_34 [i_4 - 2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_14 [i_0])))))));
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_30 [i_11] [i_5] [i_4] [i_0] [i_11])), (arr_39 [i_4 - 3] [i_4 - 4] [i_4 - 3] [i_4 - 4] [i_4] [i_0])));
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) arr_19 [i_12] [i_5] [i_4] [i_2] [i_0] [i_0]);
                        var_36 = ((/* implicit */signed char) var_8);
                        arr_46 [i_0] [i_0] [i_0] [i_5] [i_12] [14ULL] [i_12] = (!(((/* implicit */_Bool) arr_31 [i_0] [(short)12])));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        var_37 ^= ((/* implicit */_Bool) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) ((signed char) arr_22 [i_2] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 3] [(short)14])))));
                        var_38 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((arr_2 [i_4] [i_5] [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [(_Bool)1]))) : (var_1)))));
                        var_39 = ((_Bool) ((short) max((((/* implicit */unsigned long long int) arr_47 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4])), (var_12))));
                        arr_50 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_4 - 4]), (((/* implicit */long long int) min((arr_27 [(short)8] [i_2] [(_Bool)1] [i_5] [(signed char)12]), (((/* implicit */unsigned int) var_11)))))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_18 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
                    {
                        arr_53 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_4 - 3] [i_4 - 1])) ? (((/* implicit */int) arr_26 [(unsigned short)20] [i_4 - 4] [i_0] [(short)17])) : (((/* implicit */int) arr_26 [i_2] [i_4 - 3] [i_0] [i_4]))))) % (arr_10 [i_5])));
                        arr_54 [i_0] [i_2] [i_5] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                        arr_55 [i_0] [i_2] [(short)8] [i_0] [i_5] [i_5] [i_14] = ((/* implicit */signed char) arr_22 [i_0] [i_2] [0LL] [0LL] [(short)21] [i_0] [0LL]);
                        arr_56 [i_0] [(unsigned short)5] [i_4] [i_0] [i_5] [i_14] [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_43 [14ULL] [i_2] [i_4] [i_5] [i_14] [i_5] [i_2]))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
                    {
                        var_40 *= ((/* implicit */unsigned short) max((max((((/* implicit */signed char) ((arr_2 [(unsigned short)15] [i_5] [i_15]) && (((/* implicit */_Bool) 18229786897871600724ULL))))), (var_2))), (((/* implicit */signed char) var_6))));
                        var_41 = ((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [18LL] [(short)6]);
                        arr_59 [i_0] [i_0] [i_2] [(signed char)17] [i_5] [i_15] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_0] [(short)17] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_5]))) : (var_12))), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) arr_49 [i_0] [18ULL] [i_0] [16U] [i_0] [i_0]))) : (((/* implicit */int) arr_15 [i_0] [i_2] [i_4 - 4] [(short)2] [(_Bool)1]))));
                        arr_60 [i_0] [i_2] [i_4] [i_5] [(short)7] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned long long int) 9837687474297617767ULL)) >> (((/* implicit */int) arr_30 [i_15] [i_15] [i_4 - 3] [i_0] [i_15]))))) ? (((/* implicit */int) ((short) (~(((/* implicit */int) arr_40 [i_0] [i_0])))))) : (((/* implicit */int) arr_47 [i_15] [i_15] [i_15] [i_5] [i_4] [i_2] [i_0]))));
                        arr_61 [i_0] [i_5] [i_4] [i_2] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_35 [i_4])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (arr_9 [i_0] [i_0] [i_0])))) ? ((~(((/* implicit */int) (short)-2310)))) : ((+(((/* implicit */int) var_11)))))))));
                    }
                }
                arr_62 [i_0] [i_2] [i_2] = ((/* implicit */short) arr_12 [i_0] [i_0] [i_2] [(short)22]);
                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_4 - 1] [i_4 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)29541))))) : (((/* implicit */int) ((_Bool) var_6)))));
                var_43 = ((/* implicit */_Bool) min((var_43), (((_Bool) ((arr_22 [i_4 - 3] [i_4 - 3] [i_4 - 1] [i_4 + 1] [i_4] [i_4] [i_4]) ? (((/* implicit */int) arr_22 [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 4] [i_4 - 2] [i_4 + 1] [(_Bool)1])) : (((/* implicit */int) arr_22 [i_4 - 2] [(short)22] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4])))))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            arr_67 [i_0] [i_0] [i_0] = ((/* implicit */short) min((arr_64 [i_0] [5U] [i_0]), (max((arr_64 [i_16] [i_16] [i_0]), (arr_64 [i_0] [i_16] [i_0])))));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_19 = 0; i_19 < 23; i_19 += 1) /* same iter space */
                        {
                            arr_75 [i_0] [i_0] [i_17] [(_Bool)1] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_16] [i_18] [i_17] [i_18] [(unsigned short)11] [i_0] [i_16])) << (((arr_58 [i_0] [i_16] [i_0] [i_18] [i_0] [i_17] [i_17]) - (12869920449372637944ULL)))))), (min((17486699581028455785ULL), (((/* implicit */unsigned long long int) arr_6 [i_16] [i_16]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (signed char)118)) > (((/* implicit */int) arr_3 [i_0] [i_16] [i_0])))))))) : (var_9)));
                            arr_76 [i_0] [i_0] [i_17] [i_0] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) arr_69 [i_18])) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_69 [i_0])) : (((/* implicit */int) arr_69 [i_0]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) /* same iter space */
                        {
                            arr_80 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 15950319084693593960ULL);
                            var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                            var_45 = ((/* implicit */short) arr_51 [i_0] [i_0]);
                        }
                        for (unsigned int i_21 = 1; i_21 < 22; i_21 += 4) 
                        {
                            arr_85 [i_0] [(signed char)12] = ((/* implicit */short) arr_74 [i_0] [i_16] [i_17] [(signed char)0] [20LL]);
                            var_46 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-289))));
                            var_47 = ((/* implicit */short) (-(((/* implicit */int) max((arr_82 [i_21 + 1] [(unsigned short)11] [i_21 - 1] [(short)13] [i_21 + 1] [i_0]), (arr_82 [i_21 + 1] [i_21 + 1] [i_21 - 1] [i_21 + 1] [i_21 + 1] [i_0]))))));
                            var_48 = ((/* implicit */short) var_12);
                        }
                        for (unsigned short i_22 = 0; i_22 < 23; i_22 += 2) 
                        {
                            arr_89 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((var_1) << (((var_9) - (3899909890U))))) % (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_14 [i_0]))))));
                            arr_90 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]);
                            var_49 -= (short)29548;
                            var_50 = ((/* implicit */signed char) arr_66 [3LL] [i_16]);
                        }
                        arr_91 [(unsigned short)10] [i_17] [i_17] [i_0] = ((/* implicit */short) min((((long long int) var_2)), (((/* implicit */long long int) arr_71 [i_0]))));
                    }
                } 
            } 
        }
        var_51 = ((/* implicit */unsigned short) min((((/* implicit */short) var_11)), (arr_7 [i_0] [i_0])));
        var_52 = arr_23 [7U] [i_0] [i_0] [i_0] [i_0];
    }
    var_53 = ((/* implicit */short) var_6);
    var_54 = ((/* implicit */_Bool) var_1);
}
