/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104678
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
    var_20 = ((/* implicit */unsigned short) (-((-(((-8499006764600419718LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            var_21 += ((/* implicit */unsigned short) (!(var_6)));
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                for (long long int i_3 = 4; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (unsigned short)4691);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_3 + 1] [i_3] [i_3 + 1]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (((long long int) 0LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            arr_13 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0 - 4] [i_4 - 1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_18))));
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((arr_9 [(_Bool)1] [i_5 + 1] [(_Bool)1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            var_24 |= (~(((/* implicit */int) (_Bool)1)));
                        }
                        for (signed char i_8 = 3; i_8 < 18; i_8 += 4) 
                        {
                            arr_25 [i_0] [i_4 + 1] [i_8] [i_6 + 1] [i_8] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (_Bool)1)) : (87883592)))));
                            var_25 ^= arr_9 [(unsigned short)14] [i_4] [i_4];
                            var_26 = ((short) ((long long int) (_Bool)1));
                        }
                        var_27 -= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 4; i_9 < 19; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_9] [i_9 + 3] [i_9] [i_6 + 1] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_9 - 1] [i_9 - 1] [i_6] [i_6 + 1] [(unsigned short)12] [i_6] [i_6])) : (((/* implicit */int) arr_21 [i_9] [i_9 - 4] [i_5] [i_6 + 1] [i_5] [i_0] [(signed char)5])))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (short)32763))) ? (9386883168007300220ULL) : (((/* implicit */unsigned long long int) (+(3020912223U))))));
                        }
                        for (long long int i_10 = 3; i_10 < 21; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) arr_27 [i_0] [i_0] [i_0]))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_6] [i_6 + 1])) ? ((+(arr_11 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10 + 1] [i_10 - 2])))));
                        }
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)12287))));
        }
        /* LoopSeq 3 */
        for (long long int i_11 = 2; i_11 < 20; i_11 += 3) 
        {
            arr_33 [i_11] [i_11 - 2] = ((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 4) 
            {
                for (long long int i_13 = 4; i_13 < 21; i_13 += 2) 
                {
                    {
                        var_33 += min((((((/* implicit */_Bool) 3675979433U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (-347003903)))));
                        arr_41 [i_13] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((17563189059632884970ULL), (((/* implicit */unsigned long long int) (signed char)-42))))) && ((!((_Bool)1)))))) : (((/* implicit */int) arr_6 [i_0] [i_11 + 1] [i_11 + 1]))));
                    }
                } 
            } 
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_15 = 3; i_15 < 21; i_15 += 2) 
            {
                for (short i_16 = 3; i_16 < 20; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_55 [i_0] [i_0] [i_14] [i_15] [i_16] [i_16] [i_17] = ((/* implicit */_Bool) var_13);
                            arr_56 [i_0] [i_14] [i_16] [i_16] [i_0] = ((/* implicit */long long int) ((unsigned int) arr_54 [i_16] [i_14]));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */long long int) -347003906)) : (9223372036854775795LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)24576)) || (((/* implicit */_Bool) -2147483645)))))) : ((~((~(-6257006766376254972LL)))))));
                        }
                    } 
                } 
            } 
            arr_57 [i_14] [i_0] = ((/* implicit */_Bool) var_8);
            arr_58 [i_14] = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */unsigned long long int) (short)12285)), (7449102770097773242ULL))));
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (short i_19 = 2; i_19 < 19; i_19 += 4) 
                {
                    {
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_0 - 3] [i_0] [i_0 - 1])))))));
                        arr_64 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (!(((/* implicit */_Bool) 5891087457544419841ULL))))) << (((-433917442) + (433917442)))))));
                    }
                } 
            } 
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_21 = 2; i_21 < 21; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_22 = 3; i_22 < 21; i_22 += 1) 
                {
                    for (unsigned int i_23 = 1; i_23 < 20; i_23 += 4) 
                    {
                        {
                            arr_75 [i_0] [i_20] [i_0] [i_0 - 2] [(short)10] = ((/* implicit */unsigned char) arr_2 [i_22] [i_23 + 1]);
                            var_36 = ((/* implicit */long long int) max((var_36), (((((/* implicit */_Bool) 10997641303611778373ULL)) ? (arr_63 [i_22 - 2] [i_22 + 1] [i_22 - 1] [i_22 - 1]) : (arr_63 [i_22] [5U] [i_22 - 1] [i_22 - 3])))));
                        }
                    } 
                } 
                arr_76 [i_20] [i_20] [i_20] = ((/* implicit */short) (-(((/* implicit */int) arr_43 [i_21] [i_21 + 1] [15ULL]))));
                arr_77 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) ((long long int) (unsigned short)65524));
            }
            arr_78 [i_20] [i_20] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)26)))), (((/* implicit */int) var_14))));
            /* LoopNest 2 */
            for (unsigned short i_24 = 1; i_24 < 19; i_24 += 3) 
            {
                for (unsigned char i_25 = 2; i_25 < 19; i_25 += 4) 
                {
                    {
                        var_37 = ((/* implicit */int) ((7449102770097773251ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4873569382708160572ULL)) ? (((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (short)12272)) ? (((/* implicit */int) (short)12313)) : (((/* implicit */int) (short)-32756)))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_26 = 4; i_26 < 18; i_26 += 1) 
                        {
                            var_38 |= ((/* implicit */short) ((((((/* implicit */int) arr_35 [i_0] [i_0 - 2])) < (((/* implicit */int) min(((unsigned char)239), (((/* implicit */unsigned char) (_Bool)1))))))) ? (((/* implicit */int) min((((/* implicit */short) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_71 [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))));
                            var_39 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-12272))));
                        }
                        for (signed char i_27 = 2; i_27 < 18; i_27 += 4) 
                        {
                            arr_88 [i_0] [i_0] [i_0 + 2] [i_20] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-5))))) && ((!(((/* implicit */_Bool) arr_20 [i_24] [i_27]))))));
                            var_40 |= ((/* implicit */_Bool) ((unsigned long long int) ((arr_67 [i_25 - 1] [i_25] [i_25 - 2]) & (arr_67 [i_25 - 2] [i_25 - 1] [i_25 + 3]))));
                        }
                        for (unsigned int i_28 = 2; i_28 < 19; i_28 += 1) 
                        {
                            arr_91 [i_0] [i_0] [i_24] [i_25] [6LL] |= ((/* implicit */unsigned char) max((arr_86 [i_25 + 2] [i_25 + 2] [i_28] [(_Bool)1] [i_28] [i_28] [i_25 + 2]), (arr_86 [i_25 + 2] [i_28] [i_28] [i_28 + 3] [i_28] [i_28] [i_28])));
                            var_41 ^= ((/* implicit */unsigned short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)105))));
                            var_42 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)9624)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55533))) : (1570655020756136399ULL)))));
                        }
                        arr_92 [i_20] = ((/* implicit */unsigned long long int) ((10U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_29 = 1; i_29 < 15; i_29 += 3) /* same iter space */
    {
        var_43 &= ((/* implicit */unsigned int) ((arr_31 [i_29 - 1] [i_29 + 1] [i_29 + 1]) ? (arr_0 [i_29 + 1]) : (((/* implicit */unsigned long long int) (+(var_15))))));
        arr_95 [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_29])) ? (arr_1 [i_29]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_29] [i_29 - 1] [i_29])))));
    }
    /* vectorizable */
    for (long long int i_30 = 1; i_30 < 15; i_30 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_31 = 1; i_31 < 15; i_31 += 4) 
        {
            var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) != (arr_9 [(signed char)20] [i_30] [i_30 - 1])));
            /* LoopNest 2 */
            for (signed char i_32 = 3; i_32 < 14; i_32 += 1) 
            {
                for (unsigned int i_33 = 1; i_33 < 12; i_33 += 3) 
                {
                    {
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned short)63536)))))));
                        arr_105 [0LL] [0LL] [i_30] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)50055)) ? (((/* implicit */int) (signed char)-68)) : (-1783280560)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_34 = 3; i_34 < 12; i_34 += 1) 
            {
                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (+(((long long int) arr_32 [i_30] [i_30])))))));
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_73 [0LL] [i_30] [i_30] [i_30] [i_30] [0LL])) ? (((((/* implicit */_Bool) arr_53 [i_31 - 1])) ? (((/* implicit */int) (short)-23226)) : (((/* implicit */int) arr_47 [i_31])))) : ((~(((/* implicit */int) var_18)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_35 = 1; i_35 < 12; i_35 += 2) 
                {
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((arr_31 [i_31 + 1] [i_34] [i_31 + 1]) ? (((/* implicit */int) arr_106 [i_30] [(unsigned short)9] [i_30])) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_12)) & (((/* implicit */int) (_Bool)1))))));
                    arr_112 [i_30 - 1] [i_30] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)12313)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (short)31744))));
                    var_49 = ((/* implicit */long long int) max((var_49), (((((/* implicit */_Bool) (unsigned short)63535)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) : (5648584501074994558LL)))));
                }
                for (unsigned int i_36 = 3; i_36 < 15; i_36 += 1) 
                {
                    arr_116 [i_36] [i_31] [i_31] [i_30] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_19)) ? (arr_67 [i_31] [i_34 + 1] [i_36]) : (((/* implicit */int) arr_14 [i_30] [i_31] [1ULL])))));
                    var_50 = ((/* implicit */unsigned short) ((((753703344) > (((/* implicit */int) (unsigned short)59616)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_99 [i_30] [i_30]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_30] [i_34] [i_36]))) | (4006053641U)))));
                    arr_117 [(short)4] [i_30] [i_34] [i_36 - 1] = (i_30 % 2 == zero) ? (((3304648895U) << (((((/* implicit */int) arr_73 [i_30] [i_34 + 4] [i_34 + 3] [i_34 + 2] [i_34 - 1] [i_34 + 2])) - (16867))))) : (((3304648895U) << (((((((/* implicit */int) arr_73 [i_30] [i_34 + 4] [i_34 + 3] [i_34 + 2] [i_34 - 1] [i_34 + 2])) - (16867))) - (33453)))));
                }
                arr_118 [i_30] [i_31] [i_31] = ((/* implicit */unsigned char) ((signed char) arr_38 [i_30] [i_30] [i_31 - 1] [i_34 + 4] [i_34]));
                /* LoopSeq 2 */
                for (long long int i_37 = 1; i_37 < 13; i_37 += 1) 
                {
                    var_51 += ((((/* implicit */_Bool) ((unsigned char) 288913654U))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) (short)30789)) << (((((arr_5 [i_34] [(unsigned char)16] [(signed char)13] [i_34]) + (2334187003065618317LL))) - (17LL))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_38 = 1; i_38 < 13; i_38 += 4) 
                    {
                        arr_123 [i_30] [i_30] [i_30] [(unsigned char)13] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */_Bool) 4006053641U)) ? (((/* implicit */int) arr_69 [i_30] [i_31 + 1] [i_34 + 4] [(unsigned short)15])) : (76721248)))));
                        var_52 = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) (short)12313)))));
                        var_53 = ((/* implicit */_Bool) ((arr_99 [i_30 + 1] [i_30]) ? (((/* implicit */int) arr_49 [i_30 - 1] [i_30 + 1] [i_31 - 1] [i_34 - 2])) : (((/* implicit */int) var_14))));
                    }
                    for (unsigned short i_39 = 1; i_39 < 15; i_39 += 3) 
                    {
                        arr_126 [i_30] [i_30] [i_30] [i_30] [i_30] = ((/* implicit */long long int) arr_20 [i_30 + 1] [i_31 - 1]);
                        arr_127 [i_31] [i_30] [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_115 [i_34 + 1] [i_34] [i_37 - 1] [i_39])) ^ (((/* implicit */int) arr_115 [i_34 - 2] [i_34] [i_37 - 1] [i_37]))));
                    }
                }
                for (unsigned long long int i_40 = 1; i_40 < 14; i_40 += 1) 
                {
                    var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) (~(1576627900))))));
                    var_55 = ((/* implicit */int) max((var_55), (((((/* implicit */int) arr_119 [i_30 - 1] [i_31] [i_34 - 3] [i_40])) | (((/* implicit */int) var_12))))));
                }
            }
            for (short i_41 = 2; i_41 < 15; i_41 += 4) 
            {
                arr_133 [i_30] [i_31] [i_41] [i_30] = ((/* implicit */_Bool) arr_23 [i_30]);
                arr_134 [i_30 - 1] [i_30] [i_30] = ((/* implicit */long long int) ((arr_132 [i_30] [i_30 + 1] [i_30]) != (-349802069)));
            }
            /* LoopNest 2 */
            for (unsigned char i_42 = 1; i_42 < 14; i_42 += 4) 
            {
                for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                {
                    {
                        var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_30] [i_30 + 1] [20U] [i_30] [i_30 - 1] [i_30])) ? (((arr_122 [i_30] [i_30] [i_30] [i_30 + 1] [i_30 + 1] [i_30 + 1] [i_30 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [(signed char)6] [(_Bool)1] [4U] [i_42] [i_42] [i_42]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14579))))))));
                        var_57 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_45 [i_31 + 1] [i_30 - 1] [i_42 + 1]))));
                        arr_141 [i_30] [i_42 - 1] [i_30] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_30 + 1] [i_30] [i_30])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_59 [i_43])))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_44 = 1; i_44 < 1; i_44 += 1) 
            {
                arr_144 [i_30] = ((/* implicit */long long int) ((arr_1 [i_31 - 1]) < (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_31 - 1] [i_30])))));
                var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) (!(((/* implicit */_Bool) var_14)))))));
            }
            for (int i_45 = 1; i_45 < 14; i_45 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_46 = 1; i_46 < 1; i_46 += 1) 
                {
                    arr_151 [i_30] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)31737))));
                    var_59 ^= ((/* implicit */short) arr_68 [i_46 - 1] [i_46 - 1] [(short)2] [i_46 - 1]);
                }
                arr_152 [i_30] [i_30] [5U] [i_30] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)2000))));
            }
        }
        var_60 = ((/* implicit */_Bool) 4006053642U);
    }
    var_61 = 17287421706165033352ULL;
}
