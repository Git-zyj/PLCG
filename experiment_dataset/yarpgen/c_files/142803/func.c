/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142803
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 ^= arr_1 [(unsigned short)20] [4ULL];
        var_18 = ((/* implicit */unsigned char) var_13);
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(0ULL))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 *= ((/* implicit */unsigned short) var_9);
                    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [3LL]), (((/* implicit */unsigned char) arr_6 [0LL] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_7 [18] [i_2])) ? (((/* implicit */int) var_16)) : (var_12))) : (((/* implicit */int) min((((/* implicit */short) arr_0 [i_1])), (arr_7 [i_1] [i_0]))))))) ? (((unsigned long long int) min((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])), (arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) arr_7 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0] [i_0] [(unsigned short)6]) : (((/* implicit */unsigned int) arr_1 [i_0] [(_Bool)1])))) : (((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 4]))))))))));
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)16))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)123)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */unsigned int) 2097150)) : (4160749568U)))), (7762598058800630255ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)448)))));
                                arr_16 [(unsigned short)15] [i_1] [(unsigned char)23] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [i_1] [i_1 + 3] [i_1 + 2])) ? ((-(4160749596U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 + 4] [i_1 + 4] [i_1] [i_1 + 1] [i_1 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 += min((((((/* implicit */_Bool) arr_9 [(unsigned short)14] [i_0] [(unsigned char)5] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (var_12)))) : (var_11))), (max((134217732U), (((/* implicit */unsigned int) -111539294)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [i_5] [i_5] [i_5] [(unsigned short)5] = ((/* implicit */_Bool) arr_9 [i_5] [i_5] [(unsigned char)17] [(signed char)22] [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            {
                                arr_33 [i_5] [(_Bool)1] [i_9] [i_8] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)205));
                                arr_34 [i_9] = ((((/* implicit */_Bool) arr_11 [i_5] [i_7] [i_9] [i_9 + 2] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) : (((((/* implicit */_Bool) arr_11 [i_7] [i_6] [i_9] [i_7] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_13 [11] [i_6] [i_6]))));
                                arr_35 [(signed char)12] [i_8] [i_7] [i_6] [(signed char)12] |= ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_25 [i_5] [i_6] [i_5] [i_8])))));
                            }
                        } 
                    } 
                }
                arr_36 [i_5] [i_6] [i_6] = ((/* implicit */short) var_3);
                arr_37 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_6] [i_6])) ? (((unsigned int) arr_29 [i_5] [i_6] [i_6] [i_5])) : (((/* implicit */unsigned int) arr_21 [i_5] [i_6] [i_6])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned int) min((((unsigned short) arr_1 [i_10] [i_10])), (((/* implicit */unsigned short) arr_22 [i_10]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_11 = 1; i_11 < 10; i_11 += 1) 
        {
            var_25 ^= ((/* implicit */signed char) ((unsigned int) arr_6 [(unsigned char)6] [(unsigned char)6] [(unsigned short)2]));
            var_26 = ((/* implicit */unsigned short) var_7);
            arr_45 [i_10] [i_10] = ((/* implicit */unsigned short) ((unsigned char) arr_10 [i_10] [i_11] [i_11] [i_11 + 1] [i_10] [i_11 - 1]));
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            var_27 += ((/* implicit */short) ((unsigned int) arr_2 [i_12]));
            arr_50 [i_10] [i_10] [10U] = ((/* implicit */int) var_2);
            /* LoopNest 2 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    {
                        var_28 *= ((/* implicit */unsigned char) ((int) arr_8 [i_13 - 1] [i_12] [i_13 - 1] [i_14]));
                        var_29 *= ((/* implicit */short) arr_48 [i_13 - 1] [i_13 - 1] [i_13 - 1]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_60 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_10] [(_Bool)1] [i_15])) ? (arr_54 [i_10] [i_12] [i_12] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10] [i_12] [i_12] [i_10])))));
                arr_61 [i_15] [(unsigned char)6] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_52 [i_10] [i_10] [i_15] [i_15])) ? (((((/* implicit */_Bool) var_3)) ? (arr_57 [i_10] [i_12] [i_15]) : (((/* implicit */unsigned long long int) arr_21 [i_10] [i_10] [i_10])))) : (((/* implicit */unsigned long long int) arr_8 [(signed char)0] [i_12] [i_15] [(_Bool)1]))));
                /* LoopNest 2 */
                for (signed char i_16 = 3; i_16 < 7; i_16 += 2) 
                {
                    for (int i_17 = 1; i_17 < 9; i_17 += 4) 
                    {
                        {
                            var_30 += ((/* implicit */short) var_4);
                            arr_66 [i_12] |= ((/* implicit */int) arr_8 [i_16 - 2] [i_16 - 2] [(short)2] [i_17 + 2]);
                        }
                    } 
                } 
            }
            for (short i_18 = 1; i_18 < 7; i_18 += 2) 
            {
                arr_71 [i_10] [i_12] = ((/* implicit */unsigned short) ((short) arr_51 [i_10] [i_18 + 4] [i_18 + 4]));
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (short i_20 = 2; i_20 < 9; i_20 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */int) ((unsigned int) arr_57 [i_19] [i_12] [i_19]));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (~(18446744073709551613ULL))))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((unsigned char) ((int) var_2))))));
                            arr_76 [i_19] [6U] [i_18 + 3] = var_11;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    for (unsigned long long int i_22 = 4; i_22 < 9; i_22 += 1) 
                    {
                        {
                            var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_18] [i_12] [i_10])) ? (((/* implicit */int) arr_39 [i_10])) : (((/* implicit */int) arr_31 [2U] [i_12] [i_21] [i_21] [i_22]))));
                            arr_83 [i_10] [i_21] [i_18 - 1] [i_21] [i_22] [i_21] [(signed char)6] = arr_18 [i_10];
                            var_35 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (signed char)123)))));
                            var_36 = ((/* implicit */unsigned long long int) arr_79 [i_10] [i_10] [(unsigned short)8] [(unsigned short)8] [i_10] [3ULL] [(unsigned short)8]);
                            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_10] [i_10] [i_12] [i_21] [i_12])) : (((/* implicit */int) arr_73 [i_12] [(_Bool)1]))))))));
                        }
                    } 
                } 
                var_38 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_29 [i_10] [(_Bool)0] [i_10] [11U]))));
            }
            var_39 += ((/* implicit */unsigned long long int) arr_63 [i_10] [i_10] [i_10] [i_10] [i_12] [i_12]);
        }
    }
    for (unsigned int i_23 = 3; i_23 < 9; i_23 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_24 = 1; i_24 < 7; i_24 += 2) 
        {
            for (unsigned int i_25 = 2; i_25 < 9; i_25 += 2) 
            {
                for (unsigned long long int i_26 = 2; i_26 < 7; i_26 += 2) 
                {
                    {
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_26]))))) : (var_8))))));
                        arr_95 [i_26] [i_24] [i_24] [i_23 + 2] = arr_72 [i_24] [i_24] [i_24] [i_26 + 2];
                    }
                } 
            } 
        } 
        arr_96 [i_23] [i_23] = ((/* implicit */unsigned int) var_8);
    }
    for (unsigned short i_27 = 0; i_27 < 15; i_27 += 2) 
    {
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_27] [i_27]) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned int) var_12)) : (var_15)))) ? (((((/* implicit */_Bool) -111539314)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_2 [i_27]))));
        var_42 += ((/* implicit */unsigned int) var_0);
        /* LoopNest 3 */
        for (signed char i_28 = 1; i_28 < 13; i_28 += 2) 
        {
            for (short i_29 = 0; i_29 < 15; i_29 += 2) 
            {
                for (unsigned int i_30 = 0; i_30 < 15; i_30 += 4) 
                {
                    {
                        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) arr_102 [i_27] [i_27] [13ULL]))));
                        var_44 ^= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [(signed char)3] [i_28] [i_28 - 1])) ? (arr_13 [i_27] [i_28] [i_28 + 2]) : (arr_13 [i_27] [i_27] [i_28 + 1]))));
                    }
                } 
            } 
        } 
        arr_110 [i_27] [i_27] = ((/* implicit */_Bool) arr_0 [i_27]);
    }
    for (long long int i_31 = 0; i_31 < 25; i_31 += 1) 
    {
        arr_113 [i_31] [i_31] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_7 [i_31] [i_31]))))));
        /* LoopSeq 1 */
        for (int i_32 = 3; i_32 < 24; i_32 += 1) 
        {
            arr_116 [i_31] [i_31] [i_32] = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned int) (unsigned char)58)), (2392763422U))));
            var_45 = ((/* implicit */unsigned short) ((unsigned int) arr_14 [i_31] [i_32 - 3] [i_31]));
            arr_117 [i_31] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)175)), (-1175599515)));
        }
        arr_118 [(signed char)0] [i_31] = ((/* implicit */short) arr_111 [i_31]);
        arr_119 [i_31] [i_31] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_7 [i_31] [i_31])) ? (((/* implicit */int) arr_7 [i_31] [i_31])) : (((/* implicit */int) arr_7 [i_31] [i_31])))));
    }
}
