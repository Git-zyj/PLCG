/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160733
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
    var_10 = var_9;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((short) (short)-17241));
                arr_7 [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((short) var_3)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) var_4);
        arr_12 [i_2] = ((unsigned int) (unsigned char)102);
        /* LoopSeq 2 */
        for (short i_3 = 3; i_3 < 14; i_3 += 2) 
        {
            var_11 = ((/* implicit */unsigned short) var_7);
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
            {
                arr_17 [i_4] [i_3] = var_7;
                var_12 = ((/* implicit */short) -568821929);
                var_13 = ((/* implicit */int) var_1);
                arr_18 [i_2] [i_4] [i_4] = ((/* implicit */short) var_4);
            }
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */int) ((unsigned int) var_5));
                arr_21 [i_5] = ((/* implicit */unsigned char) var_3);
            }
            for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)7680)) >> (((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            arr_32 [i_2] [i_2] [i_6] [i_8] = ((/* implicit */signed char) ((_Bool) (short)-7681));
                            var_16 = ((/* implicit */int) var_0);
                        }
                    } 
                } 
            }
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 2) /* same iter space */
            {
                arr_37 [i_2] = ((/* implicit */_Bool) (short)-7681);
                /* LoopSeq 2 */
                for (unsigned int i_10 = 1; i_10 < 14; i_10 += 4) 
                {
                    arr_42 [i_2] [i_3] [i_2] [i_10 - 1] = ((/* implicit */unsigned short) ((int) var_0));
                    arr_43 [(unsigned char)4] [i_3] [i_3 - 3] [i_3] = ((/* implicit */unsigned int) var_2);
                    arr_44 [i_10] [i_10] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_9))));
                }
                for (unsigned int i_11 = 2; i_11 < 12; i_11 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)165)) ^ (((/* implicit */int) (signed char)94)))))));
                    arr_48 [i_3] [i_3] [i_9 - 1] [i_9 - 1] [i_11] [i_11] = ((/* implicit */_Bool) ((unsigned char) var_0));
                    var_18 = ((/* implicit */short) ((((/* implicit */int) (short)7693)) >> (((/* implicit */int) (_Bool)1))));
                    var_19 = ((/* implicit */unsigned int) var_9);
                }
                /* LoopNest 2 */
                for (unsigned short i_12 = 2; i_12 < 12; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */short) min((var_20), ((short)7680)));
                            arr_57 [i_3] = -1642999322;
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned char) var_0);
            /* LoopSeq 2 */
            for (unsigned char i_14 = 1; i_14 < 13; i_14 += 4) /* same iter space */
            {
                var_22 -= ((/* implicit */int) ((short) var_0));
                /* LoopSeq 2 */
                for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_16 = 1; i_16 < 13; i_16 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) (unsigned short)42818);
                        var_24 = ((((/* implicit */int) (short)29317)) | (((/* implicit */int) var_2)));
                    }
                    for (unsigned int i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        arr_66 [i_2] [i_2] [i_17] [i_2] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_5))));
                        arr_67 [i_2] [i_3] [i_2] [i_2] [i_14 + 1] [i_2] [i_17] |= ((/* implicit */unsigned int) ((short) var_8));
                        arr_68 [i_2] |= ((/* implicit */short) ((((/* implicit */int) (short)-7681)) < (((/* implicit */int) var_2))));
                    }
                    arr_69 [i_2] [(short)4] [i_14] [i_15] = ((/* implicit */short) var_4);
                    arr_70 [i_2] = ((/* implicit */int) (_Bool)1);
                }
                for (short i_18 = 0; i_18 < 15; i_18 += 2) 
                {
                    var_25 = ((/* implicit */int) ((unsigned int) var_9));
                    arr_73 [10] [i_2] [i_3 - 2] [i_3] [9U] [i_18] = ((/* implicit */unsigned int) (unsigned short)64462);
                }
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    for (unsigned int i_20 = 2; i_20 < 14; i_20 += 2) 
                    {
                        {
                            var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_3))));
                            arr_79 [i_19] [i_3] [i_14] [(_Bool)1] [i_20] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (short)-29335))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 15; i_21 += 4) 
                {
                    arr_83 [i_2] [i_2] [i_21] [i_21] &= ((/* implicit */int) ((unsigned char) (short)-7694));
                    var_27 = ((/* implicit */int) var_9);
                    /* LoopSeq 4 */
                    for (int i_22 = 3; i_22 < 13; i_22 += 3) 
                    {
                        var_28 -= ((/* implicit */unsigned char) ((signed char) (short)16213));
                        var_29 = ((/* implicit */unsigned short) var_9);
                    }
                    for (unsigned char i_23 = 2; i_23 < 14; i_23 += 1) 
                    {
                        arr_89 [i_23] = ((unsigned int) 63U);
                        arr_90 [i_23] [i_23] [i_14] [i_21] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7659)) || (((/* implicit */_Bool) var_7))));
                        var_30 = ((/* implicit */_Bool) ((unsigned int) var_2));
                    }
                    for (signed char i_24 = 1; i_24 < 14; i_24 += 4) /* same iter space */
                    {
                        arr_94 [i_21] = ((/* implicit */short) var_4);
                        var_31 = ((/* implicit */_Bool) var_2);
                    }
                    for (signed char i_25 = 1; i_25 < 14; i_25 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */signed char) var_4);
                        var_33 = ((/* implicit */unsigned char) 4294967270U);
                        var_34 += ((/* implicit */unsigned short) var_8);
                    }
                }
                /* LoopSeq 2 */
                for (signed char i_26 = 0; i_26 < 15; i_26 += 2) 
                {
                    var_35 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)1073));
                    var_36 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (1690364596U)));
                }
                for (short i_27 = 0; i_27 < 15; i_27 += 3) 
                {
                    arr_103 [i_2] [i_3] [i_14 + 2] [i_27] = ((/* implicit */unsigned int) ((_Bool) var_3));
                    arr_104 [i_2] [i_3 - 2] [i_14] [(unsigned short)14] = ((/* implicit */short) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_2))));
                    arr_105 [i_2] |= ((/* implicit */unsigned int) ((short) (short)7680));
                }
            }
            for (unsigned char i_28 = 1; i_28 < 13; i_28 += 4) /* same iter space */
            {
                arr_110 [i_28] [i_2] [i_2] [i_2] &= (unsigned short)5166;
                var_37 += var_4;
                arr_111 [i_28] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6))));
            }
            var_38 &= ((/* implicit */signed char) var_9);
        }
        for (short i_29 = 3; i_29 < 13; i_29 += 3) 
        {
            var_39 |= ((/* implicit */unsigned int) ((-795013399) / (((/* implicit */int) (_Bool)1))));
            arr_115 [i_29] [2] [i_29] = ((/* implicit */int) ((signed char) (short)-22384));
        }
    }
    for (unsigned int i_30 = 0; i_30 < 12; i_30 += 4) 
    {
        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) max((((/* implicit */int) (short)7698)), (((((/* implicit */int) var_8)) | (120))))))));
        var_41 = ((/* implicit */unsigned int) var_8);
        /* LoopSeq 4 */
        for (short i_31 = 0; i_31 < 12; i_31 += 4) 
        {
            var_42 = ((/* implicit */int) ((_Bool) ((_Bool) var_9)));
            arr_121 [i_30] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))) % (min((var_0), (((/* implicit */unsigned int) (short)7680)))))), (((unsigned int) var_3))));
            arr_122 [i_30] [6U] = ((/* implicit */unsigned short) var_0);
        }
        for (signed char i_32 = 0; i_32 < 12; i_32 += 2) 
        {
            arr_125 [i_30] [i_30] = ((/* implicit */short) (unsigned short)58444);
            arr_126 [i_32] [i_30] = ((/* implicit */signed char) var_1);
            arr_127 [i_30] [i_30] [i_32] = ((/* implicit */int) (short)15);
            /* LoopSeq 1 */
            for (int i_33 = 0; i_33 < 12; i_33 += 2) 
            {
                var_43 -= ((/* implicit */short) 1826717287);
                var_44 = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4294967295U))), (((/* implicit */unsigned int) min((var_9), (((/* implicit */short) var_5)))))));
            }
        }
        for (unsigned char i_34 = 3; i_34 < 9; i_34 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_35 = 1; i_35 < 11; i_35 += 1) 
            {
                for (short i_36 = 2; i_36 < 8; i_36 += 1) 
                {
                    {
                        var_45 &= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_7)))));
                        arr_138 [i_34] [i_34] [i_34] = ((/* implicit */unsigned short) var_7);
                        arr_139 [i_34] [i_34] [10U] = min((((/* implicit */unsigned int) 867568397)), (4294967295U));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_37 = 2; i_37 < 11; i_37 += 2) 
            {
                var_46 = ((/* implicit */signed char) 183962932U);
                arr_142 [i_37] [i_37] |= ((/* implicit */_Bool) ((int) var_7));
            }
            /* vectorizable */
            for (int i_38 = 1; i_38 < 10; i_38 += 2) 
            {
                var_47 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) / (((/* implicit */int) (short)32767))));
                var_48 = ((/* implicit */unsigned short) var_1);
                var_49 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-15)))) % (((/* implicit */int) var_4))));
            }
        }
        for (signed char i_39 = 3; i_39 < 10; i_39 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_40 = 0; i_40 < 0; i_40 += 1) 
            {
                arr_150 [i_40] = ((/* implicit */int) ((short) 2147483631));
                var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_4))));
            }
            var_51 = ((/* implicit */signed char) ((int) max((8U), (((/* implicit */unsigned int) var_6)))));
            arr_151 [i_30] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)65535)))) == (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_9)))))));
            var_52 = ((10U) / (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_1))))));
            var_53 = ((/* implicit */unsigned short) ((unsigned int) var_9));
        }
    }
}
