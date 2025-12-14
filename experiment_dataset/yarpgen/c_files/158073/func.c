/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158073
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [(unsigned char)19] [(unsigned char)19] = ((/* implicit */signed char) (+(((long long int) max((((/* implicit */unsigned short) var_1)), (arr_7 [i_0 + 1] [i_1] [20] [i_3]))))));
                            var_17 = ((/* implicit */long long int) (((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)204))))) : (((/* implicit */int) max((arr_8 [i_0 + 3] [i_0 + 3] [(unsigned char)17]), (arr_8 [i_0 + 2] [i_0 + 2] [i_0]))))));
                            /* LoopSeq 4 */
                            for (signed char i_4 = 2; i_4 < 23; i_4 += 3) 
                            {
                                var_18 += ((/* implicit */unsigned int) (signed char)90);
                                var_19 = var_16;
                                var_20 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (unsigned short)14747)), (0U)))));
                                var_21 = ((/* implicit */unsigned int) ((arr_5 [i_4 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92)))));
                            }
                            for (long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) : ((-(arr_5 [i_0 - 1])))));
                                var_23 += ((/* implicit */long long int) arr_5 [i_0]);
                            }
                            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_7 [i_6] [i_3] [i_2] [i_1])))));
                                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3528343332U))));
                                arr_18 [i_3] [i_3] [i_2] [(signed char)23] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)28809)), (var_7)));
                            }
                            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0 + 1] [(unsigned short)9])) ? (((/* implicit */int) ((short) arr_5 [i_0 - 1]))) : ((~(((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_2] [17]))))));
                                arr_21 [i_7] [i_3] [i_1] [i_2] [i_1] [i_0] = max(((signed char)-90), (((/* implicit */signed char) (_Bool)1)));
                            }
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) -1045228480970239969LL)) > (9197599272517978679ULL)))))))));
                        }
                    } 
                } 
                arr_22 [i_1] = ((/* implicit */unsigned int) var_9);
                arr_23 [i_1] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 2] [(unsigned short)10])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1]))))), (var_16)))) ? (((/* implicit */int) ((signed char) ((int) arr_3 [i_0] [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(var_2))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        var_29 = ((/* implicit */_Bool) arr_13 [i_8]);
        arr_27 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned short)63327)) : (((/* implicit */int) (unsigned char)173))));
    }
    for (signed char i_9 = 1; i_9 < 14; i_9 += 3) 
    {
        arr_30 [i_9] = ((/* implicit */long long int) var_13);
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    {
                        arr_39 [i_9] [i_9] [i_9 - 1] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_7 [i_9 - 1] [i_9] [i_9] [(signed char)9])) - (((/* implicit */int) (unsigned short)41499))))))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            var_30 *= ((max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) * (var_4))), (((/* implicit */unsigned int) var_13)))) % (max((((/* implicit */unsigned int) arr_28 [i_9 + 1])), (0U))));
                            var_31 = ((/* implicit */long long int) (~((+(((var_2) << (((/* implicit */int) (signed char)16))))))));
                            var_32 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)13))) | (-3602999709996235429LL))), (arr_20 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])));
                            var_33 = ((/* implicit */unsigned int) (unsigned char)162);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (short i_15 = 4; i_15 < 13; i_15 += 4) 
            {
                {
                    var_34 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) arr_5 [i_9 + 1])), (min((4LL), (((/* implicit */long long int) (unsigned short)24026))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 0; i_16 < 15; i_16 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 15; i_17 += 3) 
                        {
                            arr_52 [(signed char)11] [i_14] [i_9] [(unsigned char)1] [(_Bool)1] [i_17] [(signed char)2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((signed char)(-127 - 1)), (arr_43 [i_9] [i_16] [i_17]))))));
                            var_35 = var_16;
                            arr_53 [i_9] [i_14] [(signed char)2] [i_9] [i_17] [i_9] = ((/* implicit */signed char) min(((unsigned short)14), (((/* implicit */unsigned short) (signed char)-58))));
                            arr_54 [i_9] = ((/* implicit */signed char) min((4294967282U), (((/* implicit */unsigned int) (unsigned char)244))));
                        }
                        var_36 = ((long long int) ((long long int) arr_49 [i_9 + 1] [i_14] [i_15 - 1] [i_9]));
                    }
                    for (unsigned short i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_9]))) : (((((/* implicit */_Bool) 9223372036854775800LL)) ? (9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-61)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((~(((/* implicit */int) arr_32 [4U] [i_9]))))));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (unsigned short)0))));
                    }
                    for (signed char i_19 = 2; i_19 < 13; i_19 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_20 = 0; i_20 < 15; i_20 += 2) 
                        {
                            var_39 = ((/* implicit */signed char) var_15);
                            var_40 ^= ((/* implicit */unsigned char) ((((arr_44 [i_20]) ? (4591456736793769334LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (arr_37 [i_9] [i_9] [i_9] [i_9] [i_9] [i_15]))))));
                        }
                        for (long long int i_21 = 2; i_21 < 13; i_21 += 2) 
                        {
                            arr_66 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_59 [i_9] [i_9 - 1] [i_9 - 1] [i_19 + 2] [i_9])), (arr_0 [i_9])))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_59 [i_9] [i_9 + 1] [i_9 - 1] [i_19 + 2] [i_9]))))) : (((/* implicit */int) arr_0 [i_9]))));
                            var_41 = ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (unsigned short)23643)));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4591456736793769340LL)) ? (var_7) : (min((max((-9223372036854775805LL), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                            arr_67 [i_9] [i_21] [i_19] [(unsigned short)7] [i_14] [i_14] [i_9] = max((9223372036854775807LL), (4591456736793769334LL));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) & (arr_19 [(unsigned char)0] [(signed char)5] [(unsigned char)0] [i_19 + 1] [i_21 + 2])))) ? (max((arr_50 [i_14] [i_9] [7LL]), (var_9))) : (((((/* implicit */_Bool) var_11)) ? (var_12) : (var_12)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ ((~(((/* implicit */int) arr_34 [i_9] [i_15] [i_19] [i_9]))))))) : ((~(var_16)))));
                        }
                        for (signed char i_22 = 0; i_22 < 15; i_22 += 4) 
                        {
                            arr_72 [(_Bool)1] [i_14] [i_9] [(_Bool)1] [(unsigned char)7] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))));
                            var_44 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)23643)))) ? ((-((-(var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_9] [i_9] [i_14] [i_15] [i_19] [i_22])))));
                            var_45 = ((/* implicit */unsigned short) var_1);
                            var_46 = ((/* implicit */signed char) var_6);
                            var_47 = ((/* implicit */int) max((var_47), ((-(((/* implicit */int) min((arr_29 [i_15]), (arr_29 [i_15]))))))));
                        }
                        /* vectorizable */
                        for (signed char i_23 = 0; i_23 < 15; i_23 += 3) 
                        {
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_9 + 1] [i_15 + 2] [i_19 + 2] [i_9])) ? (((/* implicit */int) (!(arr_71 [i_23] [i_9] [i_15] [i_9] [i_9])))) : (((/* implicit */int) arr_43 [i_9] [i_15 + 1] [i_9 - 1]))));
                            var_49 -= ((/* implicit */unsigned long long int) arr_28 [i_9]);
                            var_50 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_51 [i_14])) + (((/* implicit */int) var_15))))) + (((((/* implicit */_Bool) (unsigned short)47334)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-9223372036854775796LL)))));
                        }
                        var_51 = ((/* implicit */signed char) var_12);
                    }
                    for (signed char i_24 = 2; i_24 < 13; i_24 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */long long int) var_5);
                        var_53 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)37))))) != (((/* implicit */int) ((unsigned char) arr_55 [i_9] [i_9] [(signed char)11] [(signed char)11] [i_24 - 2] [i_24 - 2]))));
                        var_54 = ((/* implicit */unsigned int) var_14);
                    }
                    var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) ((int) max((((((/* implicit */_Bool) 4591456736793769334LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (3268705538490552428LL))), (((/* implicit */long long int) var_6))))))));
                    /* LoopSeq 1 */
                    for (long long int i_25 = 0; i_25 < 15; i_25 += 2) 
                    {
                        var_56 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 400551217)) ^ ((-(var_16)))));
                        var_57 = ((/* implicit */signed char) ((long long int) -6190843767606990852LL));
                        /* LoopSeq 1 */
                        for (int i_26 = 2; i_26 < 12; i_26 += 1) 
                        {
                            var_58 ^= ((/* implicit */int) arr_41 [(signed char)14] [4U] [i_15] [(signed char)14]);
                            var_59 = ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-33)))) - (((/* implicit */int) (unsigned short)52165))));
                        }
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_27 = 2; i_27 < 19; i_27 += 3) 
    {
        arr_83 [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3268705538490552424LL)) || (((/* implicit */_Bool) (signed char)-37))));
        arr_84 [i_27 - 2] = ((/* implicit */_Bool) (unsigned short)24036);
        var_60 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_27 + 2])) ? (3890390698U) : ((-(4294967295U))))), (((/* implicit */unsigned int) max((arr_6 [i_27 - 2] [i_27 + 1]), (arr_6 [i_27 + 1] [i_27 - 1]))))));
        var_61 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -675428271)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-3807850347663129188LL)));
        arr_85 [i_27] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_27] [i_27] [i_27] [i_27])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_13 [i_27])))), (((/* implicit */int) (signed char)-44))));
    }
    var_62 = ((/* implicit */unsigned short) var_1);
}
