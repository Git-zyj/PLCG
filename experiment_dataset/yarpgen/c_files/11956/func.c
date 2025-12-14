/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11956
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 2) /* same iter space */
    {
        var_10 += ((/* implicit */long long int) (((-(((((/* implicit */_Bool) 1774329118707875084ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        arr_2 [i_0] [(unsigned short)2] = ((/* implicit */unsigned char) var_3);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))));
        var_12 = ((/* implicit */signed char) ((1774329118707875078ULL) >= (1774329118707875088ULL)));
        arr_7 [(signed char)6] [i_1] |= ((/* implicit */int) (_Bool)1);
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 2) /* same iter space */
        {
            arr_11 [1ULL] = ((/* implicit */int) var_6);
            var_13 -= ((/* implicit */signed char) (_Bool)1);
            arr_12 [i_1] [i_2 - 3] = ((/* implicit */short) -1LL);
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1774329118707875094ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-16982))))) : (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        }
        for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 2) /* same iter space */
        {
            arr_17 [i_3] = ((/* implicit */signed char) ((var_3) / (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
            /* LoopSeq 4 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                arr_21 [i_3] = ((/* implicit */signed char) var_7);
                arr_22 [9U] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))))));
                var_15 = ((/* implicit */signed char) var_4);
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        arr_29 [i_1] [i_3] [i_1] [i_5] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_5])) && (((/* implicit */_Bool) var_2)))))));
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_3 - 2] [i_3 - 3] [i_3 - 1] [i_3 - 2]))));
                    }
                    arr_30 [(unsigned short)4] [i_3] [i_3] [i_1 - 2] = ((/* implicit */unsigned char) (+(arr_19 [i_1 - 2] [i_1 - 2] [i_3])));
                    var_17 = ((/* implicit */_Bool) var_4);
                    arr_31 [i_1] [i_1] [i_3 + 1] [i_4] [i_3] = arr_3 [4] [i_5];
                }
            }
            for (signed char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (int i_9 = 1; i_9 < 8; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) / (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16960))) : (var_0))))))));
                            var_20 = ((/* implicit */unsigned char) arr_20 [i_3] [i_3] [i_3]);
                            var_21 = ((/* implicit */int) 4809692965541251577LL);
                            arr_40 [i_1 - 1] [i_3 - 3] [i_7] [i_8] [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)-16))))));
                        }
                    } 
                } 
                arr_41 [i_1] [i_3] [i_3] [(signed char)1] = ((/* implicit */unsigned long long int) arr_35 [i_7] [i_3 + 1] [i_1 + 1] [i_1]);
                /* LoopSeq 3 */
                for (unsigned int i_10 = 2; i_10 < 8; i_10 += 2) 
                {
                    arr_44 [i_1] [i_3] [i_7] [i_10 + 2] = ((/* implicit */unsigned char) arr_26 [i_1] [i_3] [i_7] [i_10 - 2]);
                    var_22 = ((/* implicit */signed char) var_5);
                    var_23 = ((/* implicit */unsigned short) var_4);
                }
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_12] [i_11] [i_3] [i_3 - 1] [i_1])) ? (((/* implicit */int) arr_23 [i_3 - 2] [i_3 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_35 [i_1 - 1] [i_11] [i_3] [i_11]))));
                        var_26 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 535822336U)) / (((var_7) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
                    }
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        arr_54 [i_1 - 1] [i_1] [i_1] [i_1 + 2] &= ((/* implicit */unsigned int) ((unsigned short) (signed char)-126));
                        arr_55 [i_3] [(_Bool)1] [i_3] [(_Bool)1] [i_13] = ((/* implicit */unsigned char) (((!(var_7))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_46 [i_13] [i_3] [(signed char)2])) : (((/* implicit */int) (signed char)-67)))) : (((/* implicit */int) (short)0))));
                        var_28 &= ((((/* implicit */int) (short)-1)) != (-1182200356));
                        var_29 = ((/* implicit */signed char) ((unsigned char) arr_51 [i_1 + 3] [i_3 - 3] [i_11] [i_13]));
                    }
                    var_30 = ((/* implicit */_Bool) min((var_30), (((_Bool) ((((/* implicit */_Bool) arr_14 [0U] [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_47 [i_3] [(short)2])))))));
                }
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                {
                    arr_58 [i_14] [i_3] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % ((+(5550422352670499161ULL)))));
                    var_31 *= ((/* implicit */short) arr_5 [i_3] [i_3]);
                }
                arr_59 [4U] [i_3] [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) var_7));
            }
            for (signed char i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [i_1] [i_3 - 3]))));
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_68 [i_3] = ((unsigned long long int) (unsigned char)138);
                            var_33 &= var_7;
                        }
                    } 
                } 
                var_34 = ((/* implicit */_Bool) (+(65535U)));
            }
            for (signed char i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
            {
                arr_71 [i_3] [i_3] = ((/* implicit */unsigned short) arr_70 [i_3] [i_3]);
                /* LoopSeq 1 */
                for (short i_19 = 3; i_19 < 8; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned int) 32767LL);
                        arr_78 [i_1] [i_1] [(unsigned short)3] [i_1] [i_3] = arr_62 [i_19 + 2] [i_19] [i_19] [i_19];
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_3 - 2] [i_19 + 2] [i_18] [i_18])) ? (arr_45 [i_3 + 1] [i_19 - 1] [i_3 + 1] [2ULL]) : (arr_45 [i_3 - 3] [i_19 - 2] [i_3] [i_3 - 3])));
                    }
                    arr_79 [i_1 - 1] [i_3] [i_18] [i_19] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 + 2]))));
                    /* LoopSeq 4 */
                    for (unsigned short i_21 = 0; i_21 < 10; i_21 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)6]))) : (262143LL))) + (22419LL)))));
                        var_38 = ((/* implicit */short) var_1);
                        var_39 -= ((/* implicit */unsigned short) var_4);
                    }
                    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_9)));
                        arr_87 [(signed char)0] [i_3 - 1] [i_18] [i_3] [i_22] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                        var_41 ^= ((/* implicit */unsigned int) var_2);
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(682930699U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((~(16672414955001676538ULL))))))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 1) /* same iter space */
                    {
                        arr_90 [i_3] [i_3] = ((/* implicit */unsigned int) arr_36 [i_19] [(signed char)1] [i_19] [i_19]);
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */int) arr_64 [i_1] [i_1] [i_19] [i_19])) == (((/* implicit */int) var_5)))))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15556)) ? (((/* implicit */int) (short)29185)) : (((/* implicit */int) arr_60 [i_1 - 1] [i_3 + 1])))))));
                        var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1)))))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) var_5))));
                        var_47 = ((/* implicit */short) arr_43 [i_1] [i_3] [i_18] [i_19 - 2] [(signed char)1] [i_24]);
                    }
                    arr_94 [i_3] [i_3 - 2] = ((/* implicit */unsigned long long int) arr_34 [i_3]);
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        var_48 = (i_3 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) var_6)) << (((((((/* implicit */unsigned long long int) arr_34 [i_3])) - (arr_86 [i_1] [i_19]))) - (9747389157557886725ULL)))))) : (((/* implicit */short) ((((/* implicit */int) var_6)) << (((((((((/* implicit */unsigned long long int) arr_34 [i_3])) - (arr_86 [i_1] [i_19]))) - (9747389157557886725ULL))) - (18160048160132154885ULL))))));
                        var_49 = ((/* implicit */unsigned int) var_1);
                        arr_99 [i_1 + 2] [i_3] [i_18] [i_19] [i_25] = ((/* implicit */unsigned long long int) (short)-1);
                    }
                }
                var_50 = ((/* implicit */unsigned long long int) max((var_50), (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                arr_100 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_1 - 1] [i_18] [i_1 + 2] [i_3])) ? (((/* implicit */long long int) 1089959464U)) : (((arr_24 [(signed char)4] [i_3] [i_3] [i_1 - 2] [i_18]) ? (6445071518956159697LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))))));
            }
            var_51 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_1] [i_1 + 3] [i_3 - 3] [i_1 + 3] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
            arr_101 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)1)) ? (7415345421924431286ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
        }
        for (unsigned long long int i_26 = 3; i_26 < 9; i_26 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_27 = 0; i_27 < 10; i_27 += 4) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    {
                        var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_52 [i_1] [(signed char)3] [i_1 + 2] [i_1] [5])) > (((((/* implicit */_Bool) arr_74 [i_26] [i_26] [7U] [i_26])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                        var_53 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8))) <= (3513057013U)));
                        arr_109 [i_27] [i_28] [i_28] [i_28] [i_26] [i_1] = ((/* implicit */long long int) arr_56 [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 1]);
                    }
                } 
            } 
            var_54 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_4)));
            var_55 = ((/* implicit */unsigned long long int) var_6);
        }
        for (unsigned short i_29 = 2; i_29 < 9; i_29 += 4) 
        {
            var_56 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
            arr_112 [0] [i_29] = ((/* implicit */short) (!(var_7)));
            var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) var_5))));
            arr_113 [i_1] = ((/* implicit */unsigned short) (+(var_4)));
            var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_86 [i_1] [i_29 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_1] [i_1] [i_1] [i_29]))) : (((((/* implicit */_Bool) arr_26 [i_1 - 1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_36 [i_1 - 2] [i_29] [i_1 - 2] [(_Bool)0])) : (var_4))))))));
        }
        var_59 = ((/* implicit */unsigned char) max((var_59), (var_6)));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_30 = 2; i_30 < 9; i_30 += 3) /* same iter space */
    {
        var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9)) && (((/* implicit */_Bool) (unsigned short)41185)))))));
        arr_116 [(unsigned short)6] [2U] |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_115 [(unsigned short)8]) : (arr_115 [(signed char)10])))));
        var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_115 [i_30])));
    }
    for (unsigned short i_31 = 2; i_31 < 9; i_31 += 3) /* same iter space */
    {
        var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_117 [i_31]))) ^ (arr_115 [i_31])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)112), ((signed char)-35))))) : (arr_118 [i_31])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_114 [i_31] [i_31]))))))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))), (max((var_9), (((/* implicit */unsigned long long int) arr_118 [i_31]))))))));
        var_63 |= ((/* implicit */unsigned char) arr_115 [(unsigned short)2]);
        /* LoopSeq 2 */
        for (unsigned long long int i_32 = 0; i_32 < 11; i_32 += 4) 
        {
            var_64 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_117 [i_31])))) * (max((arr_115 [i_31]), (((/* implicit */unsigned int) (short)3217))))))), (15790728773890519725ULL)));
            var_65 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1774329118707875112ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-29169)))))))))));
            var_66 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)104)) << (((1143914305352105984ULL) - (1143914305352105962ULL))))) * (((/* implicit */int) (_Bool)1)))) | ((+(((/* implicit */int) arr_119 [i_31] [i_32]))))));
            var_67 = ((/* implicit */short) (unsigned short)0);
        }
        /* vectorizable */
        for (signed char i_33 = 1; i_33 < 9; i_33 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_34 = 1; i_34 < 8; i_34 += 4) 
            {
                for (signed char i_35 = 3; i_35 < 10; i_35 += 3) 
                {
                    {
                        var_68 = ((/* implicit */unsigned long long int) max((var_68), ((+(((((/* implicit */_Bool) var_0)) ? (arr_123 [0LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_130 [i_31] [i_33 + 1] [i_34] [i_35] [6ULL])))))))));
                        var_69 = ((/* implicit */long long int) max((var_69), (var_3)));
                    }
                } 
            } 
            arr_131 [i_31] [i_31] [i_33] = ((/* implicit */unsigned char) ((long long int) arr_120 [i_31 + 2] [i_33 + 1] [i_33 + 2]));
            var_70 = ((/* implicit */unsigned short) 18014398509481983ULL);
        }
    }
    for (unsigned short i_36 = 2; i_36 < 9; i_36 += 3) /* same iter space */
    {
        var_71 = ((/* implicit */signed char) max((var_71), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_132 [i_36 + 2]))) + (7819393507565716354LL)))))))));
        var_72 = ((/* implicit */_Bool) (-(17330081988173442481ULL)));
    }
}
