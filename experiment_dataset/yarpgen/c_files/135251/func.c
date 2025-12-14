/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135251
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
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            var_20 |= arr_0 [i_1];
            arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_19))))) : (arr_2 [i_1 - 1] [(unsigned char)8]));
            var_21 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 4294967284U)), ((-(arr_2 [i_0 + 2] [i_1 - 1])))));
            var_22 = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_0 [i_0 + 2]))), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_6) : (((/* implicit */int) var_19))))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(1U)))) ? (((/* implicit */long long int) 4U)) : (((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */long long int) 3762148588U)) : (12LL))))), ((-9223372036854775807LL - 1LL)))))));
        }
        arr_5 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (20U)));
        var_24 ^= ((/* implicit */unsigned int) (-(min((9223372036854775807LL), (((((/* implicit */_Bool) 2921318449U)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 6; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0])))));
                    arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) 0ULL);
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_5 = 3; i_5 < 15; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 14; i_8 += 2) 
                    {
                        {
                            arr_22 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((arr_19 [i_4]) ? (((/* implicit */unsigned int) var_10)) : (arr_11 [i_4])))))), ((((_Bool)1) ? (((((/* implicit */_Bool) var_5)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18862)))))));
                            var_26 = ((/* implicit */int) var_12);
                            arr_23 [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) -524289720);
                            var_27 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1918736034))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                arr_26 [i_4] [i_4] [i_9] [i_9] |= ((/* implicit */unsigned long long int) var_10);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        var_28 = (!(arr_19 [i_5 + 1]));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_4] [i_5 - 1] [i_4] [i_9] [i_10] [i_11])) | (((/* implicit */int) arr_31 [i_4] [i_5 + 1] [i_5 + 1] [i_11] [i_11] [i_5 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_15 [i_5] [i_10]))));
                        arr_34 [i_4] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) ((var_17) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5 - 1] [i_5 - 1])))));
                    }
                }
                for (short i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    var_31 = min(((-(18446744073709551607ULL))), (((/* implicit */unsigned long long int) ((arr_19 [i_5 - 1]) && (((/* implicit */_Bool) 25U))))));
                    var_32 = 333728844;
                    arr_38 [i_4] [i_5 - 1] [i_9] [i_4] = ((/* implicit */long long int) ((unsigned int) ((unsigned int) ((unsigned char) arr_37 [i_4] [i_4] [i_9]))));
                }
                var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_4] [i_4])) << (((arr_24 [i_4]) + (290207771)))));
                var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_10))));
            }
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) 18446744073709551607ULL))));
        }
        for (int i_14 = 1; i_14 < 15; i_14 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                arr_43 [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_33 [i_4] [i_14] [i_14 - 1] [i_14 - 1] [i_4] [i_4] [i_4])) ? ((~(9223372036854775807LL))) : (min((((/* implicit */long long int) (short)12318)), (-16LL))))), (((/* implicit */long long int) ((_Bool) arr_28 [i_15] [i_15] [i_14 - 1] [i_15])))));
                arr_44 [i_4] [i_14] [i_14] [i_14 - 1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned long long int) (((+(12LL))) | (7377172144808107449LL)))) : (var_9)));
                /* LoopNest 2 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 2; i_17 < 14; i_17 += 3) 
                    {
                        {
                            var_36 = (~(-31LL));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((-8289728725628296556LL) | (((/* implicit */long long int) ((/* implicit */int) var_8))))))) ? (min((-9223372036854775794LL), (((((/* implicit */_Bool) arr_35 [i_4] [i_14])) ? (((/* implicit */long long int) arr_24 [i_4])) : (-4544109818170524444LL))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (1373648840U)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)0))))) : (((arr_14 [i_14] [i_14 - 1]) ? (-9223372036854775807LL) : (var_17)))))));
                            var_38 &= ((/* implicit */unsigned int) (-(var_10)));
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) 1301199004101709098LL)) ? (((long long int) max((arr_12 [i_4]), (((/* implicit */long long int) (signed char)104))))) : (((((/* implicit */_Bool) arr_30 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1])) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16] [i_16 - 1] [i_16])))))));
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) max((min((1270963267U), (((((/* implicit */unsigned int) -1084381342)) - (3024004020U))))), (((/* implicit */unsigned int) max((min((var_10), (1050776105))), (((/* implicit */int) min(((_Bool)1), (arr_16 [i_4] [i_4] [i_4]))))))))))));
                        }
                    } 
                } 
            }
            arr_50 [i_4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_48 [i_4] [i_14 + 1])) : (((/* implicit */int) arr_48 [i_4] [i_14 - 1])))));
        }
        for (long long int i_18 = 3; i_18 < 15; i_18 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 2) 
                {
                    {
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) -1050776126)), (18446744073709551596ULL))), (((/* implicit */unsigned long long int) ((-9223372036854775778LL) | (((/* implicit */long long int) 1918736049))))))), (((/* implicit */unsigned long long int) (unsigned short)6655)))))));
                        arr_61 [i_4] [i_18 - 1] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4]))) | (((((/* implicit */unsigned long long int) -9223372036854775807LL)) & (6309736287481113870ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13534))) : ((-(var_5)))));
                        var_42 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_18])) ? (1373648841U) : (((/* implicit */unsigned int) max((var_6), (var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_4] [i_18] [i_4] [i_20]))) : ((((!(arr_16 [i_4] [i_19] [i_20]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50))) : (((((/* implicit */_Bool) var_3)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_35 [i_18 - 1] [i_18 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)768))) : (24LL)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                var_44 -= ((/* implicit */unsigned long long int) ((unsigned int) ((1918736037) < (((/* implicit */int) (unsigned short)58863)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 2) 
                {
                    var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (536870911U))), (((/* implicit */unsigned int) arr_21 [i_4] [i_4] [7ULL] [i_18 - 2] [i_18])))))));
                    /* LoopSeq 1 */
                    for (signed char i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        var_46 = ((/* implicit */short) max((((((/* implicit */long long int) (-(((/* implicit */int) (signed char)121))))) & (((((/* implicit */_Bool) -4941571923619147066LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_42 [i_4] [(_Bool)1]))))), (((/* implicit */long long int) (~(((unsigned int) arr_65 [i_4] [i_4] [i_21] [i_22] [i_23])))))));
                        var_47 = ((/* implicit */long long int) ((1918736037) >= (((/* implicit */int) (unsigned short)58882))));
                    }
                    arr_71 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_48 [(_Bool)1] [i_22]))));
                }
            }
            var_48 = (!(((/* implicit */_Bool) ((long long int) var_13))));
            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) min(((-(min((((/* implicit */long long int) 2098385934)), (4296293607996643453LL))))), (min((((((/* implicit */_Bool) -13LL)) ? (var_17) : (((/* implicit */long long int) var_14)))), (arr_12 [i_18]))))))));
        }
        for (long long int i_24 = 3; i_24 < 15; i_24 += 3) /* same iter space */
        {
            var_50 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (7913063425501003667LL))) ? (min((((((/* implicit */_Bool) (short)-5203)) ? (-25LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9503)) / (2147483647)))))) : (((/* implicit */long long int) max((((/* implicit */int) (short)-103)), (-1918736037))))));
            var_51 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-23092)) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)758))))), ((((_Bool)0) ? (var_0) : (var_11))))) : (var_0)));
            arr_75 [i_24] = ((/* implicit */unsigned int) (+(min((((/* implicit */int) (short)23092)), ((-2147483647 - 1))))));
            var_52 = ((/* implicit */signed char) -4296293607996643453LL);
            arr_76 [i_24] = ((/* implicit */signed char) (short)-23108);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 2) 
        {
            for (long long int i_26 = 0; i_26 < 16; i_26 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_27 = 1; i_27 < 12; i_27 += 2) /* same iter space */
                    {
                        var_53 *= ((/* implicit */signed char) -4529232414749069454LL);
                        var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1706041202U)) ? (1918736033) : (1918736037))))));
                        arr_84 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_19))));
                    }
                    for (unsigned long long int i_28 = 1; i_28 < 12; i_28 += 2) /* same iter space */
                    {
                        var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) arr_25 [i_28] [i_25] [i_26])) + (9523))) - (20)))))), (max((var_14), (((/* implicit */unsigned int) arr_41 [i_4] [i_4] [i_26] [i_28]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */long long int) max((arr_40 [i_4]), (var_11)))) != (max((4296293607996643465LL), (((/* implicit */long long int) -1918736035)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_29 = 0; i_29 < 16; i_29 += 3) 
                        {
                            var_56 = ((/* implicit */int) ((((/* implicit */_Bool) 2882055349U)) ? (18446744073709551602ULL) : (18446744073709551596ULL)));
                            arr_91 [i_29] = ((/* implicit */unsigned int) arr_73 [i_28] [i_28]);
                            var_57 &= ((/* implicit */_Bool) (+(arr_82 [i_4] [i_4] [i_26] [i_28 + 2])));
                        }
                        var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) max((((/* implicit */long long int) (unsigned short)64784)), (1LL))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_30 = 1; i_30 < 12; i_30 += 2) /* same iter space */
                    {
                        var_59 = ((/* implicit */long long int) min((var_59), (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_4] [i_25] [i_26] [i_30 + 3] [i_26] [i_26])))))));
                        var_60 = ((/* implicit */short) -152515303259181728LL);
                        arr_96 [i_26] = (~(((((/* implicit */_Bool) arr_55 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) -1089306319)) : (-10LL))));
                    }
                    var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4296293607996643454LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23082))) : (1688637561U)))) ? (((/* implicit */int) (((~(-4296293607996643459LL))) == (((/* implicit */long long int) arr_40 [13]))))) : (((/* implicit */int) var_13))));
                }
            } 
        } 
    }
    var_62 = ((/* implicit */unsigned short) var_5);
}
