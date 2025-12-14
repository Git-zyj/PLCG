/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170483
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
    var_10 = ((/* implicit */unsigned int) ((unsigned char) 1330654337369674872LL));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -11LL)) ? (2178794055U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32755)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_11 += ((/* implicit */unsigned char) ((short) 1330654337369674868LL));
                                var_12 = ((/* implicit */int) ((short) var_8));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_19 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1946390971)) >= (1211270864125768247ULL)));
                        arr_20 [i_5] [i_2] [i_5] = ((/* implicit */short) arr_1 [i_2]);
                        arr_21 [i_5] [i_5] [i_1] [i_5] [i_0] = ((/* implicit */short) min((8658654068736LL), (-1330654337369674867LL)));
                        var_13 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) arr_14 [i_1] [i_2 - 2] [i_2] [i_5])), (var_1)))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */short) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (short i_7 = 2; i_7 < 11; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 4) 
            {
                {
                    var_14 &= ((/* implicit */short) ((((504153661) >= (((/* implicit */int) (unsigned char)252)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6]))) : (4194303U)));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_33 [i_6] [i_7] [i_8 - 1] [i_9 - 1] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_4)) : (arr_6 [i_6] [i_6] [i_6]))) << ((((~(372849228U))) - (3922118056U)))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 3; i_10 < 12; i_10 += 3) 
                        {
                            arr_37 [i_6] [i_7] [i_8] = ((/* implicit */short) arr_11 [i_7 - 1] [i_8 - 3] [i_9 - 1] [i_7]);
                            arr_38 [i_10 + 1] [i_9] [i_8 + 1] [i_7 + 2] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) (unsigned short)65535)) : (504153667)));
                            var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_9] [i_9 - 1] [i_9])) ? (((/* implicit */int) arr_36 [i_9 - 1] [i_9 - 1] [i_9])) : (((/* implicit */int) var_9))));
                        }
                        var_17 = arr_23 [i_7 - 1];
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_28 [i_7 - 2])))) : (arr_6 [i_7 + 1] [i_8 - 3] [i_8 - 2])));
                    }
                    for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        var_19 = 2005620480;
                        arr_43 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_7 + 1] [i_11] [i_11])) : (((/* implicit */int) arr_3 [i_7 + 1])))) / (arr_40 [i_11] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8] [i_7 + 2])));
                    }
                    arr_44 [i_6] [i_7] = ((/* implicit */unsigned int) ((arr_11 [i_7 - 1] [i_7 - 1] [i_8] [i_7]) + (arr_11 [i_7 + 1] [i_7 + 2] [i_7] [i_7])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            arr_49 [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) arr_23 [i_12]);
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned long long int) 1099478073344ULL)))));
            var_21 = ((/* implicit */unsigned char) arr_46 [i_6] [i_12] [i_12]);
        }
        var_22 = ((/* implicit */short) arr_22 [i_6]);
    }
    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
    {
        var_23 = ((/* implicit */long long int) var_2);
        var_24 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)172))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    for (int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        {
                            arr_66 [i_14] [i_14] [i_16] [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2005620480)) ? (-8658654068738LL) : (((/* implicit */long long int) -2040320553))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_9))));
                            arr_67 [i_14] [i_14] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_14] [i_14] [i_18])))))));
                        }
                    } 
                } 
                arr_68 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) var_2);
                var_26 = ((/* implicit */short) arr_54 [i_14]);
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    var_27 = ((/* implicit */short) -1330654337369674867LL);
                    arr_71 [i_14] [i_19] [i_14] [i_19] [i_14] = ((/* implicit */long long int) ((2487860023U) + (((unsigned int) (short)2304))));
                    arr_72 [i_14] [i_15] = ((/* implicit */unsigned int) ((unsigned short) 4106227385U));
                    var_28 &= ((/* implicit */short) ((signed char) ((int) (_Bool)1)));
                }
                /* LoopNest 2 */
                for (unsigned int i_20 = 2; i_20 < 19; i_20 += 4) 
                {
                    for (unsigned int i_21 = 2; i_21 < 17; i_21 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) (unsigned short)4913)), (4294967295U))));
                            var_30 = ((/* implicit */short) 9ULL);
                        }
                    } 
                } 
            }
            for (signed char i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                arr_80 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) var_8);
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (int i_24 = 1; i_24 < 20; i_24 += 2) 
                    {
                        {
                            arr_86 [i_14] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_61 [i_23]))));
                            var_31 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) arr_76 [i_14] [i_15] [i_15] [i_15] [i_14] [i_23] [i_24 - 1]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_59 [i_14] [i_14] [i_14] [i_14])) : (arr_79 [i_14] [i_15])))))), ((-(10207901526424314177ULL)))));
                            arr_87 [i_14] [i_23] [i_22] [i_22] [i_15] [i_14] = ((short) ((((/* implicit */_Bool) -8658654068729LL)) ? (((/* implicit */long long int) 4294967289U)) : (3835966856601933977LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 21; i_25 += 1) 
                {
                    for (int i_26 = 2; i_26 < 20; i_26 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (3217506577U) : (1077460718U))))));
                            arr_92 [i_14] [i_22] [i_15] [i_14] = ((/* implicit */short) var_6);
                        }
                    } 
                } 
            }
            arr_93 [i_14] = ((/* implicit */unsigned short) (-((((-(1330654337369674867LL))) + (var_1)))));
            arr_94 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) 18446744073709551615ULL))) ? (((/* implicit */int) (short)-32582)) : (((/* implicit */int) ((((unsigned long long int) 6U)) < (((/* implicit */unsigned long long int) 1338113882U)))))));
        }
        for (short i_27 = 0; i_27 < 21; i_27 += 3) 
        {
            arr_98 [i_14] [i_14] [i_27] = (-(((/* implicit */int) (!(((/* implicit */_Bool) 505462526U))))));
            /* LoopSeq 2 */
            for (short i_28 = 0; i_28 < 21; i_28 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_29 = 0; i_29 < 21; i_29 += 3) 
                {
                    for (short i_30 = 2; i_30 < 18; i_30 += 4) 
                    {
                        {
                            var_33 ^= ((signed char) arr_79 [i_29] [i_29]);
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)55705)) ? (((/* implicit */int) (short)256)) : (((/* implicit */int) (unsigned short)9831))));
                            arr_108 [i_30] [i_29] [i_14] [i_27] [i_14] = ((/* implicit */_Bool) var_6);
                            arr_109 [i_28] [i_27] [i_28] [i_29] [i_30] [i_30] |= ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_31 = 0; i_31 < 21; i_31 += 3) 
                {
                    var_35 = ((((/* implicit */_Bool) 8U)) ? (3185278534U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))));
                    var_36 -= ((/* implicit */unsigned int) arr_58 [i_28]);
                    arr_112 [i_14] [i_27] [i_28] &= ((/* implicit */short) arr_59 [i_14] [i_28] [i_14] [i_14]);
                    arr_113 [i_14] [i_28] [i_28] [i_27] [i_14] = ((/* implicit */long long int) (unsigned char)31);
                }
            }
            for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
            {
                var_37 += (((!(((/* implicit */_Bool) (short)-7150)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10207901526424314189ULL)) || (((/* implicit */_Bool) (unsigned short)2392)))))) : (((((/* implicit */_Bool) ((int) var_9))) ? (arr_75 [i_14] [i_27] [i_32 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                var_38 = ((/* implicit */signed char) var_0);
                /* LoopSeq 2 */
                for (unsigned long long int i_33 = 2; i_33 < 20; i_33 += 2) 
                {
                    arr_120 [i_14] = ((/* implicit */unsigned long long int) ((499506229U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_39 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 2642117975U)) ? (0U) : (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) arr_59 [i_33 - 2] [i_14] [i_33 - 2] [i_33 - 2]))));
                    /* LoopSeq 1 */
                    for (int i_34 = 3; i_34 < 17; i_34 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned int) max((((unsigned long long int) (unsigned short)51949)), (((/* implicit */unsigned long long int) ((unsigned int) max((var_2), (((/* implicit */short) (unsigned char)31))))))));
                        arr_123 [i_34 - 1] [i_33] [i_33] [i_14] [i_27] [i_27] [i_14] = ((/* implicit */unsigned short) arr_104 [i_33 - 2]);
                        var_41 = var_2;
                    }
                }
                for (short i_35 = 0; i_35 < 21; i_35 += 4) 
                {
                    arr_128 [i_14] = arr_115 [i_14] [i_14] [i_14] [i_14];
                    var_42 = ((/* implicit */unsigned short) arr_64 [i_14] [i_14] [i_14] [i_14] [i_14]);
                }
            }
            /* LoopNest 2 */
            for (signed char i_36 = 0; i_36 < 21; i_36 += 3) 
            {
                for (signed char i_37 = 0; i_37 < 21; i_37 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_38 = 0; i_38 < 21; i_38 += 3) 
                        {
                            arr_140 [i_38] [i_38] [i_38] [i_38] [i_38] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) >> (((var_8) + (702226023)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_136 [i_38] [i_38] [i_38] [i_38] [i_38]))) : (((((/* implicit */_Bool) 3524688621U)) ? (15ULL) : (((/* implicit */unsigned long long int) 199560904U))))));
                            arr_141 [i_14] [i_38] = ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (281474976710656LL) : (((/* implicit */long long int) 0U))))));
                            var_43 = ((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_27] [i_37])))));
                            var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_14]))));
                            arr_142 [i_14] [i_14] = ((/* implicit */signed char) var_8);
                        }
                        /* LoopSeq 2 */
                        for (short i_39 = 1; i_39 < 20; i_39 += 1) 
                        {
                            arr_145 [i_14] [i_27] [i_36] [i_37] [i_39] = ((/* implicit */long long int) var_7);
                            var_45 *= ((/* implicit */unsigned int) arr_96 [i_14]);
                        }
                        for (int i_40 = 0; i_40 < 21; i_40 += 4) 
                        {
                            var_46 = ((/* implicit */short) ((((/* implicit */_Bool) 16352U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222)))));
                            var_47 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)1261))));
                            var_48 -= ((/* implicit */unsigned long long int) arr_105 [i_40] [i_37] [i_37] [i_37] [i_36] [i_27] [i_40]);
                        }
                    }
                } 
            } 
            arr_149 [i_14] [i_27] [i_14] = arr_84 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14];
        }
        var_49 = ((/* implicit */int) ((unsigned char) (unsigned char)227));
        var_50 ^= ((/* implicit */short) ((((/* implicit */_Bool) 2447719552U)) ? (((/* implicit */int) (short)25791)) : (222719078)));
    }
    var_51 *= ((/* implicit */unsigned int) var_6);
}
