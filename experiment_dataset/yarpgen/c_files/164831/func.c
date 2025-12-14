/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164831
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108863U)) ? (((((((/* implicit */int) var_4)) + (2147483647))) << (((arr_3 [i_0] [i_0] [i_0 - 2]) - (251432915193039632LL))))) : (((/* implicit */int) ((short) arr_6 [i_0] [i_1] [i_0] [i_0])))))) ? (((((((/* implicit */_Bool) (short)-16195)) ? (-1LL) : (arr_1 [i_0] [i_2]))) % (((/* implicit */long long int) ((/* implicit */int) (short)-11622))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (arr_8 [i_1])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) arr_5 [i_0] [i_2]))))))));
                    var_17 |= ((/* implicit */unsigned char) arr_2 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) max(((-(arr_21 [i_7] [i_3] [i_3] [i_3]))), (((/* implicit */long long int) ((short) ((3034472680162287896ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))))))));
                                arr_24 [i_3] [i_3] [i_5] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 10368071056542401651ULL)) ? (((int) ((int) arr_17 [i_3] [i_3] [i_3] [i_3]))) : (0)));
                                arr_25 [i_3] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_5] [i_3] [i_5] [i_5] [i_5]))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) arr_13 [i_3] [i_3]);
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 67108863U)) ? (((/* implicit */int) ((4227858433U) > (4227858432U)))) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 20)) && (((/* implicit */_Bool) 3250709604U))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 4) 
    {
        var_22 = ((/* implicit */_Bool) (-(((unsigned int) (unsigned short)9519))));
        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_28 [(unsigned short)8])))) ? (((((/* implicit */_Bool) arr_28 [(unsigned short)10])) ? (arr_28 [(short)6]) : (arr_28 [(short)16]))) : (((((/* implicit */_Bool) arr_28 [2U])) ? (arr_28 [(unsigned char)12]) : (arr_28 [12])))));
        arr_29 [i_8] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_27 [i_8] [i_8])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)0))))));
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_24 = ((/* implicit */long long int) arr_28 [i_8]);
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1557109917647723614LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_8 + 3])) || (((/* implicit */_Bool) arr_30 [i_8 - 1]))));
            }
            for (signed char i_11 = 2; i_11 < 20; i_11 += 1) 
            {
                var_27 = ((/* implicit */long long int) ((((arr_26 [i_8]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9]))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                arr_38 [i_8] [i_8] [i_9] [0U] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) / (min((3034472680162287896ULL), (((/* implicit */unsigned long long int) -1))))));
            }
            for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)-17381)) ? (((/* implicit */unsigned int) (+(arr_28 [i_8])))) : (((((/* implicit */_Bool) (short)-17373)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))) : (4227858432U))))));
                            var_29 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((arr_39 [i_8] [i_12 + 1] [i_8] [i_14]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))))))))));
                        }
                    } 
                } 
                var_30 -= ((/* implicit */int) arr_35 [(signed char)8] [(signed char)8]);
            }
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                arr_50 [i_8] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_35 [i_8] [i_8])) ? (((/* implicit */int) arr_35 [i_8] [i_8])) : (((/* implicit */int) arr_35 [i_8] [i_9]))))));
                arr_51 [i_8] [i_9] [i_8] = ((/* implicit */short) -740465136231807723LL);
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_8] [i_8 + 3] [i_8] [i_8] [i_8 + 2])) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (unsigned short)56007)) << ((((~(((/* implicit */int) (unsigned short)23710)))) + (23713)))))));
                var_32 = ((/* implicit */int) var_4);
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 1) 
            {
                var_33 = ((((/* implicit */_Bool) (short)-31980)) ? (((/* implicit */long long int) -968030001)) : (-6924320279546627124LL));
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) arr_34 [i_8])) : (((/* implicit */int) arr_47 [i_16] [i_16 - 1] [i_16] [i_16 - 3]))));
                var_35 = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) var_4)))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */int) arr_46 [i_8] [i_8] [i_9] [i_16] [i_17] [i_18] [i_18]);
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (2497334705045578053ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_38 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_8 + 2] [i_8])) ? (((/* implicit */int) arr_47 [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_16 + 1])) : (((/* implicit */int) arr_47 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_16 - 1]))));
                            var_39 *= ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
            }
            for (unsigned short i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                arr_62 [i_8] [i_9] [i_8] = ((/* implicit */short) arr_61 [i_19] [i_9] [i_8]);
                arr_63 [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1736356579938625968LL)))))));
                arr_64 [i_9] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (_Bool)1))));
                arr_65 [i_8 + 2] [i_8] [i_8 + 2] = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned int) arr_37 [i_8 + 2] [i_8 + 3] [i_8] [i_8])), (arr_42 [i_8 + 3] [i_8] [i_8 + 3] [i_8 + 2] [i_8] [i_8 + 2]))));
            }
        }
        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) /* same iter space */
            {
                var_40 -= ((/* implicit */_Bool) ((unsigned char) arr_33 [i_8] [i_8] [i_8] [i_20]));
                arr_70 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (min((5285202677921354847ULL), (((/* implicit */unsigned long long int) arr_26 [i_8]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_47 [i_8] [i_20] [i_8] [i_8]))) ? ((-(arr_49 [i_8] [i_20] [i_21] [i_20]))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)56007)), (18))))))) : (((((/* implicit */_Bool) 0)) ? (arr_57 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 + 1]) : (((/* implicit */unsigned long long int) arr_60 [i_8 + 3] [i_8 - 1] [i_8 + 1] [i_8]))))));
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 4) 
                    {
                        {
                            var_41 *= ((/* implicit */signed char) max(((+(arr_26 [i_20]))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (4294967295U)))))));
                            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) arr_57 [i_23] [i_20] [i_8 + 3] [i_22] [i_23]))));
                            var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) 1))));
                            arr_76 [i_8] [i_8] [i_22] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_52 [i_8 - 1] [i_8 - 1] [i_8 - 1]) || (arr_52 [i_8 - 1] [i_8] [i_8 - 1]))))));
                        }
                    } 
                } 
                var_44 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_8] [i_8] [i_8] [i_20])) ? (((/* implicit */long long int) arr_67 [i_8] [i_20] [i_21])) : ((-(max((arr_49 [i_20] [i_20] [i_20] [i_21]), (((/* implicit */long long int) (signed char)0))))))));
            }
            for (unsigned short i_24 = 0; i_24 < 22; i_24 += 3) /* same iter space */
            {
                var_45 = arr_68 [i_8] [i_8 + 2];
                arr_80 [i_8] [i_20] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                var_46 = ((/* implicit */unsigned short) ((unsigned int) arr_57 [i_8] [i_20] [i_8] [i_24] [i_24]));
                var_47 = ((/* implicit */unsigned long long int) var_15);
                /* LoopNest 2 */
                for (signed char i_25 = 2; i_25 < 20; i_25 += 3) 
                {
                    for (unsigned short i_26 = 0; i_26 < 22; i_26 += 1) 
                    {
                        {
                            var_48 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_83 [i_20])))))) <= ((~(arr_45 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_8 + 1] [i_8 + 3])))));
                            var_49 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_46 [i_8 + 3] [i_8 + 3] [i_8] [i_8 - 1] [i_8 + 3] [i_25 - 1] [i_25 - 2])), (arr_39 [i_8 + 2] [i_8] [i_20] [i_8 - 1]))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_27 = 0; i_27 < 22; i_27 += 3) /* same iter space */
            {
                var_50 *= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_79 [i_20] [i_8 + 3] [i_8] [i_20]))))));
                var_51 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((11612641492174708403ULL), (((/* implicit */unsigned long long int) arr_79 [i_20] [i_20] [i_20] [i_27])))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)39656))))))))));
                arr_92 [i_8] [i_8] = ((/* implicit */short) arr_68 [i_8 + 2] [i_8 + 2]);
            }
            var_52 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) max((arr_32 [i_8]), (((/* implicit */int) arr_71 [i_8] [i_20]))))), (max((6511401883274883931ULL), (((/* implicit */unsigned long long int) -1))))))));
            /* LoopSeq 1 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                var_53 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) ((short) 13161541395788196769ULL))) : ((-(((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_2)))) : ((~(((/* implicit */int) (signed char)-103))))))));
                var_54 = ((/* implicit */unsigned short) max((arr_67 [i_8] [i_20] [i_28]), (((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)4)) == (((/* implicit */int) (signed char)-7)))), (((1479922673U) > (8U))))))));
                arr_95 [i_28] [i_8] [i_8] = ((/* implicit */unsigned char) var_8);
                arr_96 [i_8] = (!(((/* implicit */_Bool) -4818081011453344376LL)));
            }
            var_55 = ((/* implicit */short) ((unsigned char) ((unsigned int) var_7)));
        }
    }
    for (unsigned char i_29 = 0; i_29 < 22; i_29 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_30 = 2; i_30 < 21; i_30 += 3) 
        {
            for (int i_31 = 0; i_31 < 22; i_31 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_32 = 2; i_32 < 21; i_32 += 2) /* same iter space */
                    {
                        var_56 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((max(((unsigned short)37102), (((/* implicit */unsigned short) var_11)))), ((unsigned short)65535)))), (((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_102 [i_30 + 1] [i_30 + 1])))) : (596131619U)))));
                        var_57 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)1536)) / (((/* implicit */int) arr_52 [i_30 + 1] [i_32 - 2] [i_31]))))));
                        var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) ((((/* implicit */_Bool) min((67108864U), (((/* implicit */unsigned int) (unsigned char)162))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))) : (67108863U))))));
                        arr_110 [i_29] [i_30] [i_29] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_88 [i_30 - 2] [i_30 + 1] [i_30 + 1])) : (((/* implicit */int) arr_88 [i_30 - 1] [i_30 + 1] [i_30 - 1])))) & (((/* implicit */int) arr_77 [i_32 - 1] [i_29] [i_29] [i_30 + 1]))));
                    }
                    for (signed char i_33 = 2; i_33 < 21; i_33 += 2) /* same iter space */
                    {
                        var_59 = ((/* implicit */unsigned char) (_Bool)0);
                        arr_113 [i_29] [i_30] [i_29] [i_33 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((4290772992LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)99))))) : (arr_60 [i_29] [i_33 - 2] [i_33 - 1] [i_29])))) ? (((/* implicit */int) ((((/* implicit */int) arr_27 [i_29] [i_30])) > (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-116)), ((unsigned char)35))))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) -16)) && (((/* implicit */_Bool) arr_56 [i_29] [i_29] [i_31] [i_33])))))))));
                    }
                    var_60 = ((/* implicit */unsigned long long int) min((var_60), (((/* implicit */unsigned long long int) (~(((((((/* implicit */int) arr_79 [i_31] [i_29] [i_30] [i_31])) | (-9))) ^ (((/* implicit */int) arr_99 [i_31])))))))));
                }
            } 
        } 
        arr_114 [i_29] [i_29] = (i_29 % 2 == zero) ? (((/* implicit */short) ((var_6) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-22446)))) >> (((((/* implicit */int) arr_98 [i_29])) - (12058))))))))) : (((/* implicit */short) ((var_6) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-22446)))) >> (((((((/* implicit */int) arr_98 [i_29])) - (12058))) - (13558)))))))));
        arr_115 [i_29] = ((/* implicit */long long int) max((arr_93 [i_29]), (((/* implicit */unsigned int) (unsigned short)65535))));
    }
    for (short i_34 = 2; i_34 < 12; i_34 += 4) 
    {
        var_61 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_20 [i_34 + 1] [i_34 + 1] [i_34] [i_34 - 2] [i_34] [i_34 + 2])))));
        var_62 = ((/* implicit */unsigned long long int) arr_52 [i_34 + 2] [i_34] [i_34 + 2]);
        arr_118 [i_34 - 2] [i_34 - 2] = ((/* implicit */int) var_9);
    }
    var_63 = ((/* implicit */unsigned int) ((long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1073709056U))), (((/* implicit */unsigned int) ((signed char) var_8))))));
}
