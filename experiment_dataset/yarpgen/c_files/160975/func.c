/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160975
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1051885784))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (short)23484))));
        var_16 -= (-(min((((/* implicit */unsigned int) (unsigned char)60)), (max((1118113498U), (((/* implicit */unsigned int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_13 [i_2] [i_2] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */short) 1118113484U);
                            arr_14 [i_3] [i_3] [i_2] [i_1] [i_3] = (!(((/* implicit */_Bool) (unsigned char)237)));
                            arr_15 [i_0] [i_3] [i_0] [(unsigned short)11] [i_4] [i_2] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_0 - 3] [i_0 - 3])) ? (arr_6 [i_3] [(signed char)12] [i_0 - 1] [i_3]) : (arr_6 [i_0] [i_1] [i_0 - 3] [i_3])))), (min((arr_4 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)255))))));
                            arr_16 [i_3] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (_Bool)0)), (11993294934644595130ULL))), (((((/* implicit */_Bool) 1118113498U)) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14935)))))));
                        }
                        for (short i_5 = 2; i_5 < 13; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */int) 868908829U);
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_1 [i_3]))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_5 - 1] [(signed char)1])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_0 + 1] [i_3] [i_3] = ((/* implicit */short) (unsigned short)23074);
                            var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0]))) | (3U));
                        }
                        arr_22 [i_0 - 1] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (short)2346);
                        arr_23 [i_3] = ((/* implicit */long long int) max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_18 [i_3] [i_1] [i_3] [i_0 - 2] [i_0 - 2])))), (((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (signed char)-96)), (3U))))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            arr_27 [i_7 - 2] [i_1] [i_3] [i_3] [i_1] [i_0] = (((!(((/* implicit */_Bool) 3486489738U)))) ? (min((((/* implicit */unsigned long long int) 3176853810U)), (11458627207833027672ULL))) : (((/* implicit */unsigned long long int) min((3U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1969502956)))))))));
                            arr_28 [i_3] [8LL] [i_3] [i_1] [i_0] = arr_24 [i_0] [i_0] [i_0] [i_0] [(short)5] [i_1];
                            var_20 = ((/* implicit */unsigned char) (signed char)-114);
                            var_21 -= ((/* implicit */short) (-2147483647 - 1));
                            arr_29 [i_7] [i_2] [i_2] [i_3] [i_7 + 2] = ((/* implicit */unsigned int) max((max((-159757283620667428LL), (((/* implicit */long long int) arr_19 [i_0] [i_1] [i_2] [i_3] [i_7] [i_7 + 3])))), (((/* implicit */long long int) min((arr_19 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1]), (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) arr_0 [12LL]);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                {
                    arr_37 [i_8] [i_9] [i_8] = ((/* implicit */int) 3194563160U);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */_Bool) (-(1621283923)));
                                var_24 = ((/* implicit */signed char) (unsigned short)0);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 1; i_13 < 11; i_13 += 4) 
                    {
                        arr_44 [i_8 + 1] [i_8] [i_8] = ((/* implicit */signed char) 1100404107U);
                        var_25 ^= ((/* implicit */long long int) arr_39 [i_8] [i_9] [i_9] [6] [i_8]);
                        arr_45 [i_8 + 1] [i_8 + 1] [(unsigned char)2] [i_8] = (+(((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8 + 1] [i_8] [i_9 - 2])));
                        arr_46 [i_8] = ((((arr_6 [i_13 + 2] [i_13 - 1] [i_13] [i_13 + 1]) + (9223372036854775807LL))) << (((((-826656284) + (826656304))) - (20))));
                    }
                    for (long long int i_14 = 4; i_14 < 13; i_14 += 3) 
                    {
                        arr_50 [i_8 - 2] [i_8] [i_8] [i_14 - 3] = arr_17 [i_8 + 2] [i_9 + 3] [i_8 + 2] [i_9 + 3] [i_9 + 3];
                        arr_51 [i_8] [i_8] = ((/* implicit */long long int) (_Bool)1);
                    }
                }
            } 
        } 
        arr_52 [i_8] [i_8] = ((/* implicit */signed char) (~(8672432595634155402LL)));
        arr_53 [i_8 - 3] [i_8] = ((/* implicit */unsigned char) (short)(-32767 - 1));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            for (int i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) min((max((((/* implicit */long long int) (signed char)124)), (arr_57 [i_15] [i_15] [i_17]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (4005318655U))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        for (long long int i_19 = 2; i_19 < 21; i_19 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) 18014398509481983LL);
                                arr_69 [i_16] [i_15] [i_15] [i_18] [i_17] [i_18] = ((/* implicit */_Bool) min((((long long int) ((((/* implicit */_Bool) -826656284)) && (((/* implicit */_Bool) (unsigned char)213))))), (max((2454177250798355766LL), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-9)))))))));
                                arr_70 [i_15] [i_16] [i_15] [i_18] [i_18] [i_19] = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_58 [i_15] [i_15] [i_15]))))), (3495307206U)));
                                arr_71 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) max((min(((-(2454177250798355766LL))), (((((/* implicit */long long int) ((/* implicit */int) (short)17099))) ^ (-8858731715430330716LL))))), (((/* implicit */long long int) 826656284))));
                                var_28 = (+(((/* implicit */int) (!(((/* implicit */_Bool) max((1600441143269248663LL), (-18014398509481984LL))))))));
                            }
                        } 
                    } 
                    arr_72 [i_15] [i_16] [i_17] = ((/* implicit */unsigned char) ((unsigned int) min((2052759484U), (((/* implicit */unsigned int) arr_56 [i_16])))));
                }
            } 
        } 
        var_29 += ((/* implicit */unsigned char) (short)9058);
        arr_73 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((1931764597), (((/* implicit */int) (unsigned char)139)))) / (((/* implicit */int) (short)-7109))))) ? (-1894596026) : (((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_65 [i_15] [i_15] [i_15])), (5945085864409248691LL)))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) + (3176853810U)))) ? (826656283) : (93932401)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_15] [(signed char)19] [i_15]))) : (min((((/* implicit */long long int) 4294967280U)), (-18014398509481984LL)))));
    }
    for (int i_20 = 3; i_20 < 9; i_20 += 2) 
    {
        var_31 = ((/* implicit */unsigned long long int) (signed char)120);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_21 = 2; i_21 < 7; i_21 += 1) 
        {
            arr_78 [(signed char)8] [i_20] = (+(((/* implicit */int) arr_48 [i_20] [i_21] [i_21 + 2])));
            arr_79 [i_20] [i_21 - 2] [i_20] = ((/* implicit */unsigned char) arr_9 [i_20] [i_21] [i_21 - 1] [i_20] [i_20] [i_20]);
            arr_80 [i_20] = ((/* implicit */unsigned int) arr_65 [i_20] [i_21 + 3] [i_21 + 2]);
        }
        for (unsigned short i_22 = 2; i_22 < 8; i_22 += 4) 
        {
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) arr_74 [i_20]))));
            arr_84 [i_20] [i_20] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? ((+((~(1098325075U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1621283924)))) ? (((/* implicit */int) ((short) (_Bool)1))) : (max((523255255), (((/* implicit */int) (short)10256)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 2; i_23 < 10; i_23 += 4) 
            {
                for (signed char i_24 = 3; i_24 < 9; i_24 += 1) 
                {
                    {
                        arr_92 [i_20 - 1] [i_20] [i_23 - 2] [i_24] [i_20] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 992U)) && (((/* implicit */_Bool) arr_39 [(unsigned char)2] [i_24 + 1] [i_24 + 1] [i_24 + 2] [i_24 - 3])))) ? ((((~(-18014398509481983LL))) & (max((((/* implicit */long long int) arr_25 [6ULL] [i_22 + 2] [6ULL] [i_24] [i_23 - 1])), (-18014398509481983LL))))) : (((/* implicit */long long int) 1621283923))));
                        arr_93 [i_20 - 2] [i_20] = arr_43 [i_20] [i_20] [i_20] [i_20] [i_23] [(unsigned char)0];
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) 4294967295U);
                /* LoopNest 2 */
                for (unsigned short i_26 = 1; i_26 < 10; i_26 += 4) 
                {
                    for (unsigned int i_27 = 0; i_27 < 11; i_27 += 1) 
                    {
                        {
                            arr_103 [i_20] = ((/* implicit */unsigned long long int) (signed char)118);
                            arr_104 [i_20] [i_20] [i_22 - 2] [i_25] [i_26 - 1] [i_26 - 1] [i_20] = ((/* implicit */unsigned short) 1206094514937210479LL);
                            var_34 += ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))))), (1600441143269248652LL))))));
                            var_35 ^= ((/* implicit */long long int) (unsigned char)255);
                        }
                    } 
                } 
            }
            for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_29 = 0; i_29 < 11; i_29 += 1) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            arr_113 [i_20] [i_20] [i_28] [i_29] [i_20 + 2] [i_29] [i_20] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((max(((unsigned char)43), (((/* implicit */unsigned char) (signed char)-43)))), ((unsigned char)196))))));
                            var_36 = ((/* implicit */short) (+(((((-3459599885088283603LL) != (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_28] [i_22 - 1] [i_22 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-51)))))) : (max((-7026177104910510413LL), (((/* implicit */long long int) (unsigned char)99))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_31 = 0; i_31 < 11; i_31 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_32 = 1; i_32 < 9; i_32 += 3) 
                    {
                        arr_118 [i_20] [i_31] = ((/* implicit */unsigned short) min((arr_26 [i_22] [i_22] [i_22 - 2] [i_32] [i_22] [i_22 - 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) 7026177104910510388LL)) ? ((~(1717452699))) : (((/* implicit */int) (signed char)3)))))));
                        var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [(short)7] [(short)7] [i_22] [(short)6] [(signed char)2]))));
                    }
                    for (int i_33 = 0; i_33 < 11; i_33 += 2) 
                    {
                        arr_121 [i_20] [i_20] [i_28] = ((/* implicit */unsigned long long int) (+(-1)));
                        arr_122 [i_33] [i_20] [i_28] [i_20] [i_20] = ((/* implicit */unsigned long long int) (-(((int) (short)-15447))));
                    }
                    /* LoopSeq 3 */
                    for (int i_34 = 0; i_34 < 11; i_34 += 4) 
                    {
                        arr_125 [i_20] [i_22] [i_28] [i_20] [i_22] = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)26)), (min((287104476244869120LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1886581773)))))))));
                        arr_126 [i_34] [i_31] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) -7026177104910510420LL);
                        arr_127 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_82 [i_20] [i_22 + 1])) / (((/* implicit */int) (short)17099))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))) : (0LL)));
                        arr_128 [6] [6] [i_28] [i_28] [i_31] [i_20] [i_34] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_112 [i_20 - 3] [i_28 - 1] [i_28 - 1] [i_20 - 3] [i_20 - 3] [(short)9])) ? ((-(arr_75 [i_31]))) : (((/* implicit */int) (short)-14948))))), (min((-7026177104910510414LL), (((/* implicit */long long int) 2705137204U))))));
                    }
                    /* vectorizable */
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        arr_131 [i_31] [i_22 + 3] [i_22 + 3] [i_20] [i_20] [i_22] [i_31] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)44))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_97 [i_20] [i_22] [i_28] [i_31] [i_35] [i_35])) & (((/* implicit */int) (short)32764))));
                    }
                    for (long long int i_36 = 1; i_36 < 10; i_36 += 4) 
                    {
                        arr_134 [i_20 - 1] [i_20 - 1] [i_28] [i_31] [1] [i_20] [i_31] = ((/* implicit */int) max((((/* implicit */unsigned long long int) -7026177104910510423LL)), (7274054404071842330ULL)));
                        var_39 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    arr_135 [9LL] [i_22] [i_20] [i_28 - 1] [i_28 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_20 + 2] [i_20 + 2] [i_20 - 1] [i_20] [i_20] [i_20]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_66 [i_20] [i_22] [i_28 - 1]) > (-826656284))))) : (-287104476244869121LL))) << (((2147483647) - (2147483605)))));
                }
                var_40 = (~(((/* implicit */int) (signed char)3)));
                var_41 ^= ((/* implicit */_Bool) (-(min((arr_132 [0] [i_22 + 2] [i_22 + 2]), (arr_132 [i_20] [i_22 - 2] [i_22 - 2])))));
                arr_136 [i_20] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_43 [i_20] [i_20] [12LL] [i_22] [i_28 - 1] [i_28 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42)))))) : ((-(9633836240009898989ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_91 [i_20] [i_28 - 1] [i_28 - 1] [i_20])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-74)), ((unsigned short)22417)))) : (((((/* implicit */int) arr_101 [i_20 - 1] [i_20 - 1] [i_20 - 1])) & (((/* implicit */int) (short)-20536)))))))));
            }
            var_42 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_60 [i_20 + 2] [i_20 - 2] [i_22 - 2] [i_22 + 3])) > (((((/* implicit */int) (signed char)3)) ^ (((/* implicit */int) arr_60 [i_20 + 1] [i_20 - 3] [i_22 + 3] [i_22 - 1]))))));
        }
    }
    var_43 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) var_1)))))))));
}
