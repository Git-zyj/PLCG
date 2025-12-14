/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148378
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */unsigned int) ((int) var_3));
                                var_12 = ((/* implicit */unsigned short) ((short) ((unsigned int) (unsigned char)217)));
                                var_13 = ((unsigned short) 9747951911674968342ULL);
                            }
                            var_14 = ((/* implicit */int) ((unsigned int) ((unsigned int) ((unsigned int) var_1))));
                            /* LoopSeq 2 */
                            for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                            {
                                var_15 = ((unsigned short) ((unsigned short) 18446744073709551602ULL));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned long long int) ((long long int) (unsigned short)9))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                            {
                                var_17 *= ((/* implicit */unsigned int) ((unsigned long long int) 1764184561));
                                var_18 = ((/* implicit */unsigned int) ((unsigned short) 13ULL));
                                arr_18 [i_2] [i_2] [i_3] [i_2] = ((unsigned int) 3436022376U);
                                var_19 = ((unsigned int) var_0);
                                var_20 = ((/* implicit */unsigned short) ((unsigned int) arr_15 [i_2] [i_0] [i_2] [i_0] [i_0 - 2]));
                            }
                        }
                    } 
                } 
                var_21 *= ((/* implicit */unsigned short) ((unsigned int) ((long long int) (unsigned short)9)));
                var_22 |= ((/* implicit */unsigned short) ((unsigned int) ((int) 1040187392)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            arr_23 [3ULL] = ((/* implicit */unsigned short) ((unsigned char) ((int) arr_19 [i_7])));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 1; i_9 < 22; i_9 += 2) 
            {
                arr_26 [i_9 + 2] [i_9] [i_9] [i_7] = ((/* implicit */unsigned short) ((short) ((int) -393707434)));
                var_23 = ((/* implicit */unsigned short) ((unsigned char) ((int) arr_25 [i_9])));
                arr_27 [(unsigned short)13] [18U] [i_9] = ((/* implicit */unsigned short) ((int) ((unsigned int) arr_25 [i_9])));
                var_24 |= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) arr_22 [i_9] [i_9 + 1])));
            }
            var_25 = ((/* implicit */unsigned char) ((int) ((short) (unsigned char)255)));
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_11 = 1; i_11 < 22; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) var_2)));
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) 18446744073709551602ULL)));
                        var_28 *= ((unsigned int) ((long long int) 8388607));
                    }
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        arr_38 [i_8] [i_11] [i_8] [(unsigned short)2] = ((long long int) ((unsigned char) var_2));
                        arr_39 [i_13] [i_11] [i_11] [0ULL] [i_7] = ((/* implicit */short) ((unsigned int) ((unsigned char) (short)-16156)));
                    }
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        arr_44 [i_7] [i_8] [i_14] [i_11] [i_14] [i_14] = ((unsigned short) ((unsigned short) (unsigned short)9671));
                        var_29 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) -168630301)));
                        var_30 = ((/* implicit */unsigned short) ((int) ((unsigned short) var_4)));
                        var_31 = ((/* implicit */unsigned int) ((short) ((int) ((short) var_9))));
                    }
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        arr_47 [i_15] [i_15] [i_11] [i_7] [i_15] [i_11] = ((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_36 [i_10 + 3] [i_10 - 2] [i_11] [i_10 - 2] [i_10 + 1])));
                        var_32 = ((/* implicit */unsigned char) ((int) ((unsigned int) ((long long int) arr_29 [i_7]))));
                        var_33 = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) var_4)));
                        arr_48 [i_15] [i_11] [i_10] [i_8] [i_8] [i_11] [(short)13] = ((/* implicit */int) ((unsigned short) ((unsigned int) (unsigned short)23568)));
                        var_34 = ((/* implicit */int) ((unsigned short) ((long long int) -1764184577)));
                    }
                }
                arr_49 [i_7] [i_8] [i_10] [i_7] = ((/* implicit */short) ((unsigned char) ((unsigned long long int) var_7)));
                var_35 = ((/* implicit */unsigned int) ((unsigned long long int) ((int) var_8)));
            }
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                var_36 += ((/* implicit */unsigned int) ((short) ((unsigned long long int) 1470084426U)));
                var_37 = ((/* implicit */unsigned short) ((unsigned int) ((short) 6666328609513848842LL)));
            }
            for (int i_17 = 1; i_17 < 23; i_17 += 1) 
            {
                var_38 = ((/* implicit */unsigned short) ((int) ((unsigned int) -1764184557)));
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    var_39 = ((/* implicit */short) ((int) ((unsigned int) arr_28 [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 - 1])));
                    arr_59 [i_17] [i_17] = ((/* implicit */unsigned int) ((int) ((short) var_10)));
                }
                for (unsigned short i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((int) ((unsigned char) var_3)));
                        var_41 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) arr_54 [i_17 - 1])));
                        var_42 = ((/* implicit */unsigned short) ((int) ((unsigned short) var_2)));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned short) ((int) ((unsigned char) arr_41 [i_17 + 1] [i_17 + 1] [i_17] [i_8] [i_17 + 1] [i_17 - 1] [i_8])));
                        arr_67 [(short)20] [i_17] [i_19] [(short)20] [i_17] [i_17] [(short)20] = ((/* implicit */int) ((short) ((unsigned int) 3671703607U)));
                        arr_68 [i_17] [i_8] [i_8] [i_8] [i_17] [(unsigned short)19] = ((/* implicit */int) ((unsigned char) ((unsigned long long int) var_7)));
                        var_44 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)47900));
                    }
                    for (unsigned short i_22 = 3; i_22 < 20; i_22 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned int) ((int) ((unsigned short) ((unsigned short) var_4))));
                        var_46 -= ((/* implicit */unsigned int) ((int) ((int) ((unsigned long long int) var_6))));
                        var_47 = ((/* implicit */int) ((unsigned long long int) ((unsigned char) 0ULL)));
                    }
                    for (unsigned int i_23 = 0; i_23 < 24; i_23 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) ((int) ((short) var_1))))));
                        arr_75 [10LL] [0] [10LL] [i_17] [i_17] = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) ((unsigned short) arr_52 [i_7] [i_7] [i_7] [i_7]))));
                        arr_76 [i_17] [i_8] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_73 [i_17] [i_17 + 1] [i_17 - 1] [i_17 - 1])));
                    }
                    var_49 &= ((/* implicit */unsigned long long int) ((int) ((short) arr_65 [i_7] [i_17 + 1] [i_17 + 1] [4LL] [i_17 - 1] [i_17 + 1] [i_17])));
                    var_50 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) (short)18430)));
                }
                var_51 = ((unsigned int) ((unsigned short) (short)0));
            }
        }
        for (short i_24 = 0; i_24 < 24; i_24 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_25 = 0; i_25 < 24; i_25 += 2) 
            {
                arr_82 [i_7] [i_24] [i_25] = ((/* implicit */unsigned short) ((short) ((int) var_3)));
                var_52 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) 3130512078U)));
                /* LoopNest 2 */
                for (short i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    for (int i_27 = 0; i_27 < 24; i_27 += 3) 
                    {
                        {
                            arr_87 [i_7] [i_27] [i_27] [i_7] = ((/* implicit */unsigned int) ((short) ((unsigned int) -276162416)));
                            var_53 &= ((unsigned short) ((unsigned short) ((unsigned long long int) 1724767320U)));
                        }
                    } 
                } 
                var_54 = ((/* implicit */short) ((unsigned char) ((long long int) (short)-9059)));
                arr_88 [i_7] [(unsigned short)1] [i_7] = ((unsigned short) ((unsigned long long int) arr_45 [i_24] [i_25] [i_24] [i_7] [i_24]));
            }
            var_55 = ((/* implicit */int) ((unsigned short) ((long long int) var_2)));
            /* LoopNest 2 */
            for (int i_28 = 1; i_28 < 23; i_28 += 2) 
            {
                for (unsigned int i_29 = 0; i_29 < 24; i_29 += 2) 
                {
                    {
                        var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) ((long long int) ((unsigned long long int) arr_69 [i_7] [i_7]))))));
                        var_57 *= ((/* implicit */unsigned int) ((long long int) ((short) var_7)));
                        arr_97 [i_28] [i_24] [i_24] = ((unsigned long long int) ((unsigned int) 14ULL));
                    }
                } 
            } 
        }
        for (unsigned long long int i_30 = 0; i_30 < 24; i_30 += 2) 
        {
            arr_100 [i_7] [i_7] = ((/* implicit */short) ((unsigned long long int) ((unsigned short) ((unsigned char) -2068884972))));
            var_58 = ((unsigned short) ((unsigned int) arr_57 [i_30] [i_30] [i_30]));
            var_59 = ((/* implicit */unsigned int) ((unsigned short) ((int) arr_71 [i_7] [i_7] [i_7] [1U] [20U] [i_30])));
        }
        var_60 = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) var_0)));
        var_61 = ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_8)));
        var_62 = ((/* implicit */long long int) max((var_62), (((/* implicit */long long int) ((unsigned short) ((unsigned short) var_1))))));
        arr_101 [i_7] = ((unsigned int) ((int) (unsigned char)81));
    }
}
