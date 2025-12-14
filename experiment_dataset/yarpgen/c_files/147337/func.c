/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147337
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (((unsigned int) var_9))))) == (max((max((0ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))))));
    var_17 -= ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) 13ULL)))) || ((!(var_14))))) && (((/* implicit */_Bool) var_0))));
        var_18 = ((/* implicit */_Bool) (~(max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+((-(var_8)))))) : (arr_1 [i_0] [i_0])));
        var_19 ^= ((/* implicit */int) (-(min((arr_0 [i_0]), (arr_0 [i_0])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))) : (18446744073709551605ULL)));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (2ULL) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (101772500255990705ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            arr_8 [i_1] = ((/* implicit */long long int) ((short) arr_5 [i_1]));
            arr_9 [i_1] [i_0] = ((/* implicit */unsigned int) (~(18446744073709551596ULL)));
            var_21 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (0ULL)))));
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 6; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_24 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_4 + 1]))));
                            var_22 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_7)) ? (101772500255990705ULL) : (18152253357830398119ULL))));
                        }
                    } 
                } 
                var_23 = ((294490715879153502ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                var_24 *= ((/* implicit */_Bool) ((short) arr_1 [i_2 - 2] [i_2 - 1]));
                var_25 += ((/* implicit */signed char) (+(((/* implicit */int) arr_10 [i_2 + 4] [i_6 - 1]))));
            }
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]))));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((int) var_2)))));
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 6; i_9 += 2) 
                    {
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((arr_6 [i_2 + 1] [i_2 + 1]) / (((/* implicit */long long int) var_3))));
                            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
                            var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)71))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) 13808397363299365220ULL))));
                    var_31 = ((/* implicit */unsigned int) (-(arr_18 [i_2 + 2] [i_7 + 1] [i_7 + 1] [i_10])));
                    var_32 = ((/* implicit */long long int) arr_16 [i_0]);
                    arr_38 [i_0] [i_2 - 2] [i_7] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_2))));
                }
            }
            var_34 = ((/* implicit */unsigned long long int) var_6);
        }
        for (short i_11 = 2; i_11 < 6; i_11 += 4) /* same iter space */
        {
            var_35 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_29 [i_0])) : (((/* implicit */int) (unsigned char)56))))) : (1ULL))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */int) (unsigned short)51211)) : (var_12)))) ? (((/* implicit */long long int) arr_28 [i_0] [i_11 + 2])) : ((-(-4701481302388485273LL))))) - (14777896LL)))));
            arr_42 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (-1055361813))) == ((~((~(((/* implicit */int) arr_33 [i_11 + 2] [i_0] [i_0] [i_0]))))))));
            arr_43 [i_11 + 3] = ((/* implicit */unsigned char) ((unsigned int) var_15));
        }
        for (short i_12 = 2; i_12 < 6; i_12 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((30ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_12 - 2] [i_12 - 2])) : (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) : (-7913378949836048667LL)))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 4) 
            {
                for (int i_14 = 1; i_14 < 9; i_14 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))))), (((((/* implicit */int) max((((/* implicit */short) arr_13 [i_12] [i_13 - 2] [i_12])), (arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) == ((-(var_15)))))));
                            var_38 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_36 [i_12] [i_12] [i_12 - 2] [i_12 + 3])))) < (max(((-(4638346710410186396ULL))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) (unsigned short)51195)))))))));
                            var_39 = ((/* implicit */short) max(((~((-(((/* implicit */int) (unsigned char)68)))))), (((((/* implicit */_Bool) arr_34 [i_0] [i_12 + 2] [i_15] [i_14 + 1] [i_14 + 1])) ? (var_12) : (var_15)))));
                        }
                        for (signed char i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
                        {
                            var_40 = arr_34 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_0] [i_0];
                            arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 34ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) var_11)))), (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_12 + 3] [i_14 + 1] [i_12] [i_13 - 2] [i_12 + 3]))) < (max((var_1), (((/* implicit */long long int) (_Bool)1))))))));
                        }
                        var_41 = ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_29 [i_14])) : (((/* implicit */int) arr_51 [i_12 - 1] [i_12 - 1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (18446744073709551605ULL)))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                arr_59 [i_17] [i_12 + 2] [i_0] = max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_49 [i_0] [i_12 - 2] [i_17] [i_17])))), (((/* implicit */int) (unsigned short)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) / (18446744073709551602ULL))));
                var_42 = -4307470041276205167LL;
                var_43 -= ((/* implicit */long long int) arr_1 [i_12 - 2] [i_12 + 1]);
                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? ((~(13808397363299365236ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (13808397363299365220ULL))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_14)))), (((/* implicit */int) (_Bool)1))))))))));
            }
            /* vectorizable */
            for (unsigned short i_18 = 1; i_18 < 8; i_18 += 4) 
            {
                arr_63 [i_18] [i_18] = ((/* implicit */unsigned int) (+(var_15)));
                var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))));
                /* LoopSeq 2 */
                for (unsigned short i_19 = 1; i_19 < 6; i_19 += 4) 
                {
                    var_46 = ((/* implicit */unsigned int) var_7);
                    var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_18 + 1])) ? (arr_45 [i_0] [i_0]) : ((~(((/* implicit */int) var_14))))));
                }
                for (long long int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) ((long long int) 4ULL)))));
                    arr_71 [i_0] [i_18] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_1 [i_0] [i_0])));
                    /* LoopSeq 2 */
                    for (signed char i_21 = 4; i_21 < 7; i_21 += 2) 
                    {
                        var_50 = ((/* implicit */long long int) (unsigned short)65530);
                        var_51 = ((/* implicit */unsigned char) (+(4638346710410186395ULL)));
                        var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_47 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)77)))) : (var_3)));
                        arr_75 [i_12] [i_12] [i_18] [i_18] = ((/* implicit */long long int) ((arr_72 [i_12 + 2] [i_18 + 1] [i_12 + 2] [i_18 + 2] [i_18 + 2] [i_21 + 1] [i_21 - 1]) > (((/* implicit */int) var_14))));
                    }
                    for (long long int i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        arr_78 [i_18] [i_18] = ((/* implicit */unsigned int) ((unsigned short) ((660149427U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0]))))));
                        var_53 = ((/* implicit */long long int) (+(var_3)));
                    }
                    var_54 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-2605)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_18] [i_0] [i_0])))));
                }
            }
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 10; i_23 += 2) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        arr_84 [i_24] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((arr_80 [i_12 - 2] [i_12 + 4] [i_12 + 4] [i_12 - 1]), (var_12)))), (min((min((var_0), (((/* implicit */unsigned int) -1616763306)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))))));
                        arr_85 [i_0] [i_12 + 2] [i_23] [i_24] [i_23] [i_24] = ((/* implicit */unsigned int) var_10);
                    }
                } 
            } 
            arr_86 [i_12 + 3] = ((/* implicit */short) max((max((((/* implicit */long long int) (~(((/* implicit */int) (short)-7201))))), (var_10))), (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) < (((((/* implicit */_Bool) var_7)) ? (3548019397U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
        }
    }
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
    {
        arr_89 [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7754110887764740257ULL)) ? ((+((-(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_87 [i_25]))))));
        var_55 = ((/* implicit */long long int) (short)-31372);
    }
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
    {
        var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_0)) & (7913378949836048661LL)))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)480)))))))) ? (((/* implicit */int) (short)-25226)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_92 [i_26] [(unsigned char)10]))))))))));
        arr_93 [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_87 [i_26])))) ? (((((/* implicit */_Bool) 131071LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7175)) ? (var_12) : (-418224926)))) : (((var_0) - (((/* implicit */unsigned int) var_12)))))) : (max((((/* implicit */unsigned int) (signed char)-66)), (1118097495U)))));
        /* LoopNest 2 */
        for (long long int i_27 = 3; i_27 < 11; i_27 += 4) 
        {
            for (unsigned long long int i_28 = 3; i_28 < 11; i_28 += 3) 
            {
                {
                    arr_100 [i_28 + 1] [i_26] [i_26] = ((/* implicit */long long int) -418224925);
                    arr_101 [i_26] [i_27 - 1] [i_27 - 2] [i_28 - 3] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_99 [i_28 - 1] [i_26] [i_26] [i_26])) <= (-418224933))))));
                    var_57 ^= ((/* implicit */unsigned long long int) (short)821);
                    var_58 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_88 [i_26])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_99 [i_26] [i_26] [i_26] [i_26]))))) / ((~(1010294742U)))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_29 = 0; i_29 < 22; i_29 += 4) 
    {
        for (unsigned int i_30 = 0; i_30 < 22; i_30 += 4) 
        {
            for (unsigned char i_31 = 4; i_31 < 21; i_31 += 4) 
            {
                {
                    arr_111 [i_30] [i_30] = ((/* implicit */unsigned int) min((((long long int) max((var_2), (((/* implicit */unsigned int) 418224925))))), (((/* implicit */long long int) var_7))));
                    var_59 = ((/* implicit */unsigned char) arr_109 [i_29] [i_29] [i_31 - 4]);
                }
            } 
        } 
    } 
}
