/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161105
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (~(arr_1 [i_0] [i_0])));
        arr_2 [(short)17] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_19 = ((/* implicit */long long int) var_13);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 3; i_4 < 12; i_4 += 4) 
                    {
                        arr_13 [i_4] [i_2] [i_3] = (+(arr_1 [(unsigned char)2] [i_4]));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_4] [(signed char)5] [(signed char)5] [i_4] [i_5] = arr_10 [i_1];
                            arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_3])))) ? (((/* implicit */int) arr_14 [i_5] [11] [i_1] [i_1])) : ((~(((/* implicit */int) var_15))))))) ? ((+(((/* implicit */int) arr_0 [i_5 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15))))))))));
                            arr_18 [i_1] [i_2] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */signed char) var_2);
                            arr_19 [i_4] [7ULL] [4U] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_5] [i_4] [i_3] [i_2]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 1] [i_4] [i_5 - 1])) ? (((/* implicit */int) arr_14 [i_4] [i_4 - 1] [i_4] [i_5 - 1])) : (((/* implicit */int) arr_14 [12ULL] [i_4 - 3] [i_5] [i_5 - 1])))))));
                            var_20 = ((/* implicit */unsigned short) arr_14 [i_4 - 2] [i_3] [i_2] [i_2]);
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) (-(arr_1 [i_1] [i_1])));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(var_16)))))) ? (((/* implicit */unsigned long long int) arr_1 [i_1] [(unsigned short)3])) : (arr_4 [8LL])));
                    }
                    var_23 = ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_8] [i_8])) ? (arr_4 [i_7]) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_3]))))))) ? ((-(var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [4LL] [i_8])))));
                                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2]))));
                                arr_28 [i_2] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_8 - 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
                            }
                        } 
                    } 
                    arr_29 [i_1] = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [12] [12] [i_2] [i_3] [i_2]))) : (arr_26 [i_1] [i_1] [i_1] [i_1] [(signed char)5]))))) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [8U] [i_2] [i_2] [i_2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1] [i_2] [i_1] [i_2] [i_1]))))) <= (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        arr_32 [3LL] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_9])))))));
        arr_33 [i_9] = arr_31 [i_9] [i_9];
        arr_34 [(unsigned char)9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */long long int) (-((-(((/* implicit */int) arr_31 [i_9] [i_9]))))))) : (var_4)));
    }
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_12 - 2] [i_12 - 2] [i_12 - 2]))));
                    var_27 = ((/* implicit */unsigned short) var_5);
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_37 [i_13])))) ? (((/* implicit */long long int) (+(var_9)))) : (arr_1 [i_10] [i_10])));
                                arr_49 [i_14] [i_13] [i_12] [i_11] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) << (((var_6) + (3854433114093781594LL)))))) ? (((/* implicit */int) arr_44 [i_12 - 1] [i_12 + 1])) : (((((/* implicit */int) arr_38 [i_14] [i_13] [i_10])) - (((/* implicit */int) arr_48 [i_14] [i_13] [i_12] [i_11] [i_10]))))));
                                arr_50 [i_10] [i_11] [i_11] [i_14] [i_14] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_45 [i_14])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            arr_57 [3U] [i_11] [i_15] = ((/* implicit */unsigned int) arr_55 [i_10]);
                            arr_58 [i_10] [i_10] [i_15] [11LL] = ((/* implicit */int) var_3);
                            arr_59 [i_10] [i_10] [i_10] [i_15] [(short)13] [i_10] [i_11] = (+(((((/* implicit */_Bool) arr_36 [i_15])) ? (arr_47 [15U] [15U] [15U] [i_12 + 1] [i_15] [15U] [i_16]) : (((/* implicit */long long int) arr_39 [i_10])))));
                        }
                        arr_60 [i_10] [i_10] [i_10] [i_15] [i_15] [i_10] = ((/* implicit */unsigned long long int) ((arr_30 [i_12 + 1]) ? (((/* implicit */int) arr_44 [i_15] [i_10])) : (arr_53 [i_10] [i_10] [i_10] [i_10])));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) (~(((/* implicit */int) var_17))));
                        arr_63 [i_17] [i_11] [i_11] = (((!(((/* implicit */_Bool) arr_48 [(short)14] [i_11] [(short)14] [(short)14] [6U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_10] [i_12 + 1] [i_12] [i_12 + 1] [i_10]))) : ((+(arr_51 [i_10] [i_11] [i_10] [i_17]))));
                        arr_64 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) arr_35 [i_12 - 2]);
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(var_6)))) == (((((/* implicit */_Bool) var_7)) ? (arr_36 [i_11]) : (((/* implicit */unsigned long long int) arr_53 [i_17] [i_17] [i_17] [i_17]))))));
                        arr_65 [i_10] [i_11] [i_11] [i_12] [i_12] = ((/* implicit */short) (-(arr_36 [i_10])));
                    }
                    var_31 = ((/* implicit */unsigned short) (-((+(arr_43 [i_10] [i_10] [i_10] [i_10])))));
                }
                for (unsigned int i_18 = 0; i_18 < 18; i_18 += 2) 
                {
                    arr_68 [i_11] [i_11] = ((/* implicit */signed char) arr_40 [i_10] [7]);
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_73 [i_11] [i_11] [(unsigned char)10] [i_18] [i_11] [i_11] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) arr_66 [i_18] [i_18]))));
                                arr_74 [i_10] [i_10] [i_11] [15] [i_19] [1U] [i_11] = ((/* implicit */unsigned int) arr_71 [(short)11] [i_11] [(short)11] [(short)10] [i_11] [i_11]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 0; i_21 < 18; i_21 += 4) 
                    {
                        arr_77 [i_10] [i_11] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_67 [i_10] [i_10] [i_10] [i_11]))));
                        arr_78 [i_10] [(unsigned short)7] [i_11] [12ULL] [i_10] [i_21] = arr_52 [17ULL];
                    }
                    /* vectorizable */
                    for (unsigned long long int i_22 = 1; i_22 < 17; i_22 += 4) 
                    {
                        arr_83 [(_Bool)1] [i_11] [i_18] [(_Bool)1] = ((/* implicit */unsigned char) (+(((arr_30 [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9)))));
                        var_32 = arr_31 [i_10] [i_22 - 1];
                        var_33 = (-(((/* implicit */int) arr_46 [17ULL] [(unsigned short)3] [(signed char)16] [7] [(unsigned char)4])));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_48 [i_10] [i_11] [i_18] [i_18] [i_22])) >> (((var_1) + (9048073697041787129LL)))));
                    }
                    arr_84 [(signed char)8] = ((/* implicit */short) ((arr_61 [i_10]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    arr_85 [i_10] [i_11] [i_18] = ((/* implicit */unsigned int) var_15);
                }
                /* vectorizable */
                for (short i_23 = 1; i_23 < 16; i_23 += 2) 
                {
                    var_35 = ((/* implicit */unsigned int) arr_38 [i_23 + 2] [i_23 - 1] [i_23 - 1]);
                    arr_90 [i_11] [(signed char)7] [i_23] = ((/* implicit */unsigned char) (~((~(arr_79 [i_11])))));
                    var_36 = ((/* implicit */_Bool) var_8);
                    /* LoopSeq 4 */
                    for (signed char i_24 = 0; i_24 < 18; i_24 += 2) 
                    {
                        arr_93 [i_11] = ((/* implicit */unsigned long long int) arr_45 [i_11]);
                        arr_94 [i_10] [(unsigned char)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_11] [16ULL])) ^ (((/* implicit */int) arr_55 [i_24]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_23] [i_23 + 1] [i_23 - 1] [i_23 + 1]))) : (((((/* implicit */_Bool) arr_1 [i_10] [i_10])) ? (arr_51 [i_10] [i_10] [i_10] [(short)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11])))))));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        arr_97 [i_10] [i_11] [i_23] [i_25] [i_25] = ((/* implicit */long long int) (-(((/* implicit */int) arr_44 [i_23] [i_23 + 1]))));
                        var_37 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11]))) == (arr_79 [(unsigned char)2])));
                        arr_98 [i_10] = (+((-(arr_35 [i_25]))));
                    }
                    for (long long int i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        arr_101 [6U] [6U] [(short)6] = ((/* implicit */short) (-(((/* implicit */int) arr_45 [i_11]))));
                        arr_102 [(short)5] [i_11] [(short)5] [i_26] = (-(((((/* implicit */int) arr_89 [(unsigned char)3] [(unsigned char)3] [i_23] [i_26])) - (((/* implicit */int) arr_45 [i_10])))));
                    }
                    for (unsigned char i_27 = 0; i_27 < 18; i_27 += 2) 
                    {
                        arr_106 [i_23] [i_23] [i_11] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_44 [i_10] [i_27]))));
                        arr_107 [(signed char)5] [i_11] [(signed char)5] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_56 [i_23 - 1] [i_11] [i_10] [(unsigned char)14] [i_11])) + (((/* implicit */int) arr_56 [11LL] [11LL] [i_23] [11LL] [11LL]))));
                        var_38 = ((/* implicit */long long int) var_3);
                    }
                }
                var_39 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_99 [i_10] [i_10] [i_10] [(signed char)8] [i_10])))))) * (arr_88 [i_10] [i_10] [i_10])))));
            }
        } 
    } 
}
