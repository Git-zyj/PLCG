/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126888
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_0] [i_2] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_4 - 1] [i_4 - 1]))));
                            arr_12 [i_0] [i_3] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_9 [i_3] [i_3]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    arr_16 [i_5] [i_5] [(short)5] [i_2] [i_1] [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8177928991844800695LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(2147483639))))));
                }
                for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    arr_19 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2])) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) arr_7 [i_6] [i_2] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65290)) ? (-2493550993619962256LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6] [i_2])) ? (arr_8 [i_0] [i_1] [i_2] [i_6] [i_6]) : (((/* implicit */long long int) arr_7 [i_0] [0] [i_2] [i_6]))));
                    arr_20 [i_0] [i_2] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_6])) : (((/* implicit */int) arr_3 [i_0]))));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 4; i_7 < 8; i_7 += 4) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)50))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_7 - 4] [i_7 - 1] [i_7 + 2] [i_7] [i_7 + 1] [i_6])) ? (((/* implicit */int) arr_4 [i_7 - 3] [i_7 - 1] [i_7 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) -3331114353536376032LL)))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 - 4] [i_7] [i_7 - 1] [i_7 - 3] [i_7 + 2] [i_7 - 1] [i_7 - 4]))) : (9223372036854775802LL));
                    }
                    for (long long int i_8 = 4; i_8 < 8; i_8 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) (-(arr_1 [i_8 + 2])));
                        var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_8 + 2] [i_8 + 2] [i_8 - 2] [(signed char)0] [i_8 - 4] [7LL])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_8 + 1] [i_1] [i_2]))))) : (arr_8 [i_8 - 3] [i_1] [i_2] [i_6] [i_8])));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_21 [i_8] [i_6] [i_6] [i_6] [i_2] [(signed char)2] [i_0]))));
                    }
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0]))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-50)) ? (arr_15 [i_1] [i_1] [(short)4] [i_6] [i_9] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))));
                    }
                    arr_28 [i_0] [i_1] [i_2] [i_6] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_6] [i_2] [i_1]))));
                }
            }
            for (unsigned int i_10 = 1; i_10 < 9; i_10 += 4) 
            {
                var_28 |= ((/* implicit */int) arr_29 [2U] [i_0]);
                /* LoopSeq 2 */
                for (int i_11 = 1; i_11 < 7; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (-9223372036854775803LL) : (arr_24 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [1LL])) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) arr_14 [(unsigned char)7] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                        arr_36 [i_12] [i_11 + 1] [i_10] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)246)) ? (0) : (((/* implicit */int) arr_3 [i_10 + 1]))));
                        arr_37 [i_0] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) 8388607);
                    }
                    for (short i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) arr_6 [i_10] [i_10] [i_10 + 1] [i_10]);
                        arr_40 [3U] [i_10] [i_10 + 1] [i_10 + 1] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9082516635977063178LL)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (signed char)-107))));
                        var_31 = ((/* implicit */unsigned short) (short)-19305);
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    }
                    var_33 = ((/* implicit */short) arr_24 [i_0] [i_1]);
                    var_34 = ((/* implicit */long long int) (short)12151);
                }
                for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    arr_43 [i_0] [i_0] [i_10 + 1] [i_14] [i_10] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_10 - 1] [i_10 + 1] [i_10 - 1]))));
                    arr_44 [i_10] [i_1] [i_1] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [(unsigned char)0] [i_1] [i_10]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1718965743)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */int) (unsigned char)255))))) : (arr_9 [i_10 - 1] [i_10])));
                    var_35 = ((/* implicit */int) (+(arr_0 [(signed char)3] [i_1])));
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32749)))))));
                    var_37 = (~(arr_2 [i_14] [i_1]));
                }
                var_38 = ((/* implicit */long long int) (short)-12368);
            }
            for (short i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                /* LoopSeq 4 */
                for (short i_16 = 1; i_16 < 8; i_16 += 4) 
                {
                    var_39 = ((/* implicit */short) 7527544336892595909LL);
                    var_40 = ((/* implicit */long long int) (~(arr_48 [i_1] [i_1] [i_16 + 2])));
                }
                for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) (signed char)-50)))))));
                    arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_46 [i_17] [i_15] [i_1] [i_0]);
                    arr_52 [i_0] [i_1] [(unsigned short)3] [i_17] = ((/* implicit */signed char) arr_33 [i_0] [(unsigned short)1] [(unsigned short)1] [i_0] [(unsigned short)1] [i_0]);
                }
                for (short i_18 = 3; i_18 < 9; i_18 += 3) 
                {
                    var_42 = ((((/* implicit */_Bool) -7623630331939266130LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_18 - 1] [i_1] [i_1] [i_15]))) : (arr_15 [i_0] [i_1] [i_15] [i_15] [i_18] [i_15]));
                    arr_55 [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_18 - 3] [i_18] [i_18] [i_0])) ? (arr_47 [i_18 - 2] [i_18] [i_18] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)76)))));
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_15] [i_1])) ? (((/* implicit */int) arr_46 [i_0] [i_1] [i_15] [i_18])) : (((/* implicit */int) arr_46 [i_0] [i_1] [i_15] [i_18 + 1]))));
                }
                for (short i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    var_44 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)7))));
                    var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_0] [3LL] [i_15] [i_15] [i_19] [i_19] [i_19])))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 2; i_20 < 8; i_20 += 2) 
                {
                    for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        {
                            arr_65 [i_0] [i_0] [i_0] [i_1] [i_15] [i_20] [i_0] = ((/* implicit */long long int) arr_64 [i_20 - 2] [i_20 + 1] [i_21] [i_21] [i_21]);
                            arr_66 [i_0] [i_0] [6LL] [i_15] [i_20 + 1] [i_21] = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_20] [i_0]);
                        }
                    } 
                } 
                arr_67 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_61 [i_15] [i_0]))));
            }
            /* LoopNest 2 */
            for (unsigned short i_22 = 2; i_22 < 9; i_22 += 1) 
            {
                for (long long int i_23 = 3; i_23 < 9; i_23 += 4) 
                {
                    {
                        arr_73 [i_0] [(unsigned short)6] [i_0] [i_0] [i_0] [(short)8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)4095))));
                        arr_74 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(3852566432U)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_24 = 1; i_24 < 9; i_24 += 3) 
                        {
                            var_46 *= ((/* implicit */unsigned char) 3852566432U);
                            var_47 = ((/* implicit */unsigned long long int) arr_71 [i_24 - 1] [i_23 - 3] [i_22] [i_22 + 1]);
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_25 = 2; i_25 < 8; i_25 += 3) /* same iter space */
            {
                arr_81 [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [5U] [8LL])) ? (262143LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-96))))))));
                var_48 = ((/* implicit */short) arr_0 [i_0] [i_1]);
            }
            for (signed char i_26 = 2; i_26 < 8; i_26 += 3) /* same iter space */
            {
                arr_85 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_26 - 2]))));
                var_49 = ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */long long int) 1073741823U)) : (9007199254740991LL));
            }
            for (signed char i_27 = 2; i_27 < 8; i_27 += 3) /* same iter space */
            {
                var_50 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [i_27 - 2]))));
                var_51 = ((/* implicit */_Bool) arr_88 [i_0] [i_1] [i_27]);
                /* LoopSeq 1 */
                for (unsigned char i_28 = 3; i_28 < 9; i_28 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_29 = 0; i_29 < 10; i_29 += 3) 
                    {
                        arr_96 [i_0] [i_0] [i_0] [i_0] [i_0] [9U] [i_0] |= ((((/* implicit */_Bool) -262144LL)) ? (3852566424U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))));
                        var_52 = ((((/* implicit */_Bool) -8956758923010192998LL)) ? (((/* implicit */unsigned int) arr_5 [i_27 + 2] [i_27 + 1])) : (arr_45 [i_0] [i_1] [i_27] [i_28]));
                        var_53 = ((/* implicit */long long int) arr_83 [i_27 - 2] [i_28 - 3] [i_28 + 1] [i_28 - 2]);
                        arr_97 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(-1)));
                        var_54 = ((/* implicit */short) (~(arr_86 [i_27 + 2] [i_28 + 1] [i_28] [i_27 + 2])));
                    }
                    for (unsigned short i_30 = 2; i_30 < 8; i_30 += 3) 
                    {
                        var_55 = ((/* implicit */short) (+((~(-1LL)))));
                        arr_101 [i_30] [i_28] [i_27 + 2] [i_1] = ((/* implicit */long long int) 2147483647);
                        var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)109)))))));
                    }
                    var_57 = ((/* implicit */long long int) ((arr_95 [i_27 + 2] [i_27 - 1] [i_27 + 2] [(short)7] [i_27]) ? (((/* implicit */int) arr_95 [i_27 - 1] [i_27 - 2] [i_27 + 1] [i_27 + 1] [i_27])) : (((/* implicit */int) arr_95 [i_27 + 1] [i_27] [i_27 - 2] [(short)6] [i_27]))));
                    var_58 ^= ((/* implicit */long long int) arr_61 [i_28 - 1] [i_27 + 1]);
                    var_59 = ((/* implicit */int) min((var_59), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)19)))))));
                }
                var_60 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)95))));
            }
            arr_102 [i_0] [i_1] [i_1] = ((/* implicit */signed char) 5235609802316907716ULL);
        }
        for (signed char i_31 = 0; i_31 < 10; i_31 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_32 = 0; i_32 < 10; i_32 += 2) 
            {
                var_61 = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_62 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(18446744073709551595ULL))))));
            }
            for (signed char i_33 = 0; i_33 < 10; i_33 += 4) 
            {
                arr_111 [i_0] [i_0] [i_31] [i_33] = ((/* implicit */long long int) (-(min((67108608), (((((/* implicit */_Bool) 9223372036854775802LL)) ? (arr_90 [i_0] [i_0] [i_31] [i_31] [i_33]) : (((/* implicit */int) arr_107 [i_33] [i_0]))))))));
                var_63 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
            }
            arr_112 [i_0] = ((/* implicit */unsigned long long int) arr_87 [i_0]);
            var_64 = ((/* implicit */unsigned short) max((var_64), (((/* implicit */unsigned short) (signed char)91))));
            var_65 = ((/* implicit */unsigned int) arr_25 [i_0] [i_31] [i_0]);
        }
        for (unsigned long long int i_34 = 0; i_34 < 10; i_34 += 4) 
        {
            var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [0] [i_0])) ? (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_34] [i_34] [i_34] [i_34])) ? (((((/* implicit */_Bool) arr_83 [i_34] [i_34] [i_34] [i_34])) ? (((/* implicit */unsigned long long int) arr_33 [i_0] [i_34] [i_34] [i_34] [i_0] [i_34])) : (arr_49 [8LL] [i_34] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27596)) ? (7862664103726402757LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3)))));
            var_67 = ((/* implicit */signed char) (-(134217727U)));
            arr_115 [3LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_34] [i_34] [i_0])) ? (arr_48 [i_0] [i_0] [i_0]) : (arr_48 [i_34] [i_0] [i_0]))))));
        }
        arr_116 [i_0] = ((/* implicit */long long int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_68 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) 2370417115381765107ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (short)512)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))));
    var_69 = ((/* implicit */long long int) var_6);
}
