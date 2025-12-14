/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114170
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_9 [i_1] = (short)-26311;
                        var_16 *= ((/* implicit */short) ((unsigned long long int) arr_0 [i_0 + 2] [i_0]));
                        var_17 += ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (short)-26311)) > (((/* implicit */int) arr_5 [18] [18] [i_2])))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_4 [(short)9] [(unsigned char)2] [(_Bool)1])))) + (2147483647))) >> (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) (short)26307)))))));
        var_19 = ((/* implicit */unsigned short) arr_0 [i_0 - 2] [i_0]);
        arr_10 [i_0] = ((/* implicit */_Bool) (unsigned char)245);
    }
    var_20 = ((/* implicit */unsigned long long int) (short)26297);
    var_21 &= ((/* implicit */_Bool) (short)26310);
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 3) 
    {
        for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(18446744073709551598ULL)))) ? (((/* implicit */int) arr_7 [i_4])) : (((((/* implicit */int) arr_4 [(signed char)17] [9LL] [i_5])) | (((/* implicit */int) arr_12 [i_4 - 1]))))));
                var_23 = ((/* implicit */unsigned char) (short)-26308);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_6 = 3; i_6 < 13; i_6 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) arr_4 [(unsigned short)7] [(unsigned short)7] [i_4]);
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) 562949953421311LL);
                            var_26 = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_8 [(_Bool)1] [i_5] [(_Bool)0] [(unsigned char)16])) ^ (((/* implicit */int) (short)-26306)))));
                            arr_23 [i_4] [i_4] [i_8] [i_4] [14LL] = (((~(-9223372036854775805LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_22 [(unsigned char)2] [i_8] [i_6 + 3]))));
                            var_27 |= ((/* implicit */signed char) (short)-22361);
                        }
                        var_28 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_7 + 3])) ^ (((/* implicit */int) arr_7 [i_7 + 1]))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 3) 
                    {
                        arr_26 [(short)9] [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) (~(arr_21 [i_4 + 1] [(unsigned char)2] [i_6 - 3] [i_6 - 3])));
                        arr_27 [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_9] [i_9] [(short)9] [i_9 + 1] [i_4])) ^ (((/* implicit */int) (signed char)126))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (short)26311))));
                    }
                    for (short i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        var_30 ^= ((/* implicit */long long int) arr_19 [i_5 - 2] [i_6 - 3] [i_6 - 3] [(unsigned char)11] [i_10]);
                        var_31 = ((/* implicit */short) ((((/* implicit */int) arr_29 [i_6 + 2] [i_4 + 1] [i_6] [i_10] [i_10 - 1])) >> (((((/* implicit */int) (short)26315)) - (26298)))));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [(_Bool)1] [(short)14] [2ULL] [12LL] [8ULL] [(_Bool)1]))) / (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10] [11LL] [7LL] [15ULL] [15ULL]))) + (arr_21 [i_4] [(short)14] [i_6] [i_6]))))))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 12; i_11 += 3) 
                    {
                        var_33 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_11] [(_Bool)0] [i_4 - 1]))));
                        arr_33 [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */long long int) (short)-26311);
                        var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) ^ (arr_24 [7LL])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775787LL)) && (arr_14 [10LL])))) : (((/* implicit */int) arr_22 [i_4] [(signed char)0] [i_4]))));
                        var_35 = ((/* implicit */unsigned char) arr_22 [i_11] [(unsigned char)14] [i_5]);
                    }
                }
                /* LoopNest 3 */
                for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 1; i_14 < 15; i_14 += 3) 
                        {
                            {
                                arr_42 [i_4] [i_4] [i_14] [i_4] [i_13] [i_14] [(unsigned char)2] = ((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL))));
                                var_36 = ((/* implicit */signed char) (+(((((((((/* implicit */int) arr_18 [(signed char)3] [i_5])) + (((/* implicit */int) (short)-26332)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) 8937510071503043848LL)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            {
                                var_37 ^= arr_49 [i_4 - 1] [10ULL] [i_4 - 1] [(unsigned char)11] [i_17];
                                var_38 = ((/* implicit */unsigned long long int) (+(9223372036854775807LL)));
                            }
                        } 
                    } 
                    arr_51 [i_5] [0LL] [(_Bool)1] = ((/* implicit */signed char) arr_15 [i_15 + 1] [i_5 + 2] [i_4 + 1] [i_4 - 2]);
                }
                for (long long int i_18 = 0; i_18 < 16; i_18 += 1) 
                {
                    var_39 |= ((/* implicit */unsigned char) (short)-26332);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_19 = 3; i_19 < 13; i_19 += 3) 
                    {
                        arr_57 [i_4] [i_4] [i_18] [i_19] = ((/* implicit */_Bool) ((unsigned short) (unsigned char)236));
                        var_40 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_48 [(unsigned char)0] [i_5] [(unsigned char)13])))) != (((/* implicit */int) arr_11 [i_19]))));
                        var_41 = arr_12 [i_4];
                    }
                    /* vectorizable */
                    for (long long int i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_21 = 0; i_21 < 16; i_21 += 3) 
                        {
                            var_42 = arr_32 [5LL] [i_5] [i_20];
                            var_43 -= ((/* implicit */unsigned long long int) arr_56 [(unsigned char)12] [i_5] [i_18] [(unsigned char)13] [(unsigned char)11] [(unsigned short)12]);
                            arr_63 [(unsigned char)9] [(unsigned char)9] [i_18] [i_20] [i_20] = ((/* implicit */unsigned char) arr_0 [i_5 + 1] [i_5 + 3]);
                            var_44 ^= arr_31 [5LL] [(signed char)6] [i_5 + 3] [(unsigned char)9] [i_5 + 4] [i_5];
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 1) 
                        {
                            var_45 = ((/* implicit */_Bool) ((arr_61 [i_5 - 2] [i_20] [i_5 + 4] [i_5] [i_5 + 3] [i_20] [i_5 - 2]) + (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4 - 1] [12ULL] [i_4] [(_Bool)1])))));
                            arr_66 [i_5] [i_5] [i_20] [i_20] [i_22] = ((/* implicit */unsigned char) arr_4 [i_20] [(unsigned char)14] [i_18]);
                        }
                        for (unsigned char i_23 = 0; i_23 < 16; i_23 += 3) 
                        {
                            var_46 |= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)232))));
                            var_47 = ((/* implicit */_Bool) arr_11 [i_5 + 2]);
                            var_48 -= ((/* implicit */unsigned char) ((long long int) arr_48 [i_4 + 1] [i_5 + 1] [i_23]));
                        }
                        arr_70 [i_20] [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) (short)26299);
                        var_49 = ((/* implicit */int) (unsigned char)34);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 3) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 16; i_25 += 3) 
                        {
                            {
                                var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_5])) || (((/* implicit */_Bool) ((arr_36 [i_4 + 1] [i_5 - 2]) & (arr_36 [i_4 - 2] [i_5 - 2])))))))));
                                var_51 += ((/* implicit */unsigned long long int) (unsigned char)101);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_26 = 1; i_26 < 15; i_26 += 3) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 16; i_27 += 3) 
                        {
                            {
                                arr_81 [i_26] [i_26] [8ULL] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_49 [i_4] [i_4] [i_18] [9LL] [9LL])) - (237)))));
                                var_52 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_28 [i_4] [i_18] [i_5] [i_5] [i_27] [11LL])) && (((/* implicit */_Bool) arr_77 [i_26] [i_26]))))))) >> (((((/* implicit */int) (unsigned char)168)) >> (((((/* implicit */int) arr_62 [i_4] [i_5] [i_18] [i_18] [i_27] [i_18])) - (138)))))));
                            }
                        } 
                    } 
                    var_53 -= ((/* implicit */short) (~((+((~(((/* implicit */int) arr_45 [i_18]))))))));
                }
            }
        } 
    } 
}
