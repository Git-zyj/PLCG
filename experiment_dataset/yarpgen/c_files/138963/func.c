/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138963
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
    var_17 &= ((/* implicit */int) var_6);
    var_18 = ((/* implicit */short) ((-594039350) > (((/* implicit */int) ((((var_8) - (((/* implicit */int) var_15)))) >= (var_8))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_20 = ((/* implicit */short) max((594039349), (-594039342)));
                arr_10 [i_0] = ((/* implicit */unsigned long long int) ((short) min((arr_9 [i_0] [i_1] [i_2 + 1] [i_2]), (((/* implicit */short) var_11)))));
                var_21 = arr_9 [i_1] [(unsigned char)5] [i_1] [i_0];
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_22 = ((/* implicit */short) -594039350);
                var_23 = ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) arr_14 [i_3] [i_1])) : (((/* implicit */int) arr_0 [i_0]))));
                arr_15 [4LL] [i_0] [4LL] [i_0] = ((/* implicit */unsigned long long int) -946520598887688941LL);
                var_24 = ((/* implicit */short) ((((/* implicit */int) arr_14 [6ULL] [i_0])) != (((/* implicit */int) arr_14 [i_0] [i_1]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) -594039370))));
                arr_18 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-21448)) : (((((/* implicit */int) (short)5492)) / (((/* implicit */int) (unsigned char)106))))));
                arr_19 [i_0] [3] [i_4] [i_0] = ((/* implicit */short) max((((/* implicit */int) (unsigned char)84)), (((((var_12) - (((/* implicit */int) (unsigned char)125)))) & (((((/* implicit */int) (unsigned char)215)) / (var_4)))))));
            }
            var_26 |= ((/* implicit */unsigned short) 594039362);
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_27 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0]);
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -471271621272841668LL);
            /* LoopSeq 4 */
            for (int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                arr_27 [i_0] [i_5] [i_5] = (-(((/* implicit */int) var_15)));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 7; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                            arr_33 [i_6] [i_5] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_6] [i_5] [i_8]))));
                            var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_6]))))) ? (((/* implicit */int) arr_1 [i_7 + 1])) : (((/* implicit */int) (unsigned char)124))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57960)) ? (arr_2 [i_6] [i_6]) : (arr_2 [i_6] [i_6]))))));
                            var_30 *= ((/* implicit */unsigned char) var_16);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        {
                            arr_39 [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0])) ? (((int) var_4)) : (((/* implicit */int) var_6))));
                            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_0]))));
                            var_33 *= ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_13 [i_0] [i_6] [i_6] [i_9])));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) - (var_8)));
            }
            for (short i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                arr_42 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_5])) && (((((/* implicit */_Bool) (unsigned char)65)) && (((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5]))))));
                arr_43 [i_11] [i_0] [i_0] [i_0] = ((arr_36 [i_0] [i_0] [i_0] [4LL] [i_0]) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_11] [i_0] [i_11])) : (((/* implicit */int) (unsigned char)200)));
            }
            for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                var_35 -= ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */short) (unsigned char)203);
                            var_37 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)108))));
                            var_38 = ((/* implicit */short) arr_0 [i_0]);
                            var_39 = ((arr_11 [i_0] [i_5] [i_5] [0]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [6] [(_Bool)1] [i_13])) != (((/* implicit */int) var_15)))))) : (var_1));
                        }
                    } 
                } 
                var_40 = ((((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_0] [i_5] [i_12] [i_0]))))) != (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [7]))) : (var_1))));
                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) arr_50 [i_0]))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 2; i_16 < 10; i_16 += 4) 
                {
                    for (unsigned short i_17 = 1; i_17 < 10; i_17 += 3) 
                    {
                        {
                            arr_57 [i_0] [i_0] [(short)9] [(short)8] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_2))))));
                            var_42 = arr_0 [i_0];
                            arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_16 - 2] [i_0] [i_17 - 1] [i_17])) || (((/* implicit */_Bool) arr_13 [i_16 + 1] [i_0] [i_17 - 1] [i_17]))));
                            arr_59 [i_5] [i_5] [i_5] [i_5] [i_0] [i_5] [i_5] = ((arr_3 [i_0] [i_17 - 1]) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_16 - 2] [i_0])));
                        }
                    } 
                } 
                var_43 -= ((/* implicit */_Bool) (unsigned char)68);
            }
        }
        var_44 -= ((/* implicit */unsigned long long int) var_0);
    }
    for (unsigned char i_18 = 1; i_18 < 15; i_18 += 2) 
    {
        var_45 = arr_61 [i_18] [i_18];
        var_46 = ((/* implicit */int) arr_60 [i_18]);
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
            {
                {
                    arr_70 [i_18] [i_18] = ((/* implicit */_Bool) ((arr_69 [i_18] [(_Bool)1]) ? (min((((((/* implicit */_Bool) var_13)) ? (-1871200585) : (((/* implicit */int) (short)-32675)))), (((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-27189)))))) : (((((/* implicit */_Bool) (short)-27183)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned char)47))))));
                    arr_71 [i_18 - 1] [i_19] [i_18] [i_18 - 1] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)175)), ((-(((/* implicit */int) arr_60 [i_18]))))));
                }
            } 
        } 
    }
    for (int i_21 = 3; i_21 < 13; i_21 += 1) 
    {
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 16; i_22 += 3) 
        {
            for (unsigned short i_23 = 0; i_23 < 16; i_23 += 1) 
            {
                {
                    var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) var_0))));
                    /* LoopSeq 3 */
                    for (unsigned char i_24 = 0; i_24 < 16; i_24 += 2) 
                    {
                        var_48 |= ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) arr_78 [i_21] [i_21] [i_21 + 2])))));
                        var_49 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (_Bool)0)))));
                        var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) arr_74 [i_24]))));
                    }
                    for (short i_25 = 0; i_25 < 16; i_25 += 4) 
                    {
                        arr_87 [i_25] [i_23] [i_22] [i_25] |= ((/* implicit */unsigned char) min(((((!(var_6))) ? ((~(((/* implicit */int) arr_65 [i_21])))) : (((/* implicit */int) arr_73 [9])))), (((/* implicit */int) arr_73 [i_23]))));
                        /* LoopSeq 1 */
                        for (short i_26 = 0; i_26 < 16; i_26 += 3) 
                        {
                            arr_90 [i_21] [i_21] [i_22] [i_21] [i_21 - 2] [i_21] = ((/* implicit */_Bool) arr_79 [(short)10] [i_22] [i_26]);
                            var_51 = ((/* implicit */_Bool) max((var_51), (((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))))));
                        }
                        arr_91 [i_22] = ((/* implicit */_Bool) (((-(arr_85 [i_22] [15ULL] [(_Bool)0] [i_21 + 2]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3478)))));
                        var_52 = ((/* implicit */short) ((unsigned char) max((((/* implicit */short) (unsigned char)123)), (arr_66 [i_21] [i_21 - 2] [i_23]))));
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_84 [i_21 + 2] [i_21 - 1] [i_21] [i_21] [i_21] [i_21])) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_69 [i_22] [i_22])), (arr_83 [i_21] [i_22])))) ? (((/* implicit */int) arr_67 [i_21] [i_22] [i_22])) : (((/* implicit */int) arr_67 [i_21 - 2] [i_21 - 1] [i_22]))))));
                    }
                    for (unsigned char i_27 = 0; i_27 < 16; i_27 += 3) 
                    {
                        arr_95 [i_21] [i_22] [i_22] [i_21] [i_23] [i_22] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_79 [i_21 - 1] [i_22] [i_21 + 1])) - (((/* implicit */int) arr_79 [i_21 - 3] [i_22] [i_21 + 1])))));
                        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_84 [i_21] [i_21 - 1] [i_23] [i_21] [i_21] [i_21]))))) || (((/* implicit */_Bool) (unsigned short)62058))));
                    }
                }
            } 
        } 
        arr_96 [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_79 [(short)4] [(unsigned char)8] [i_21 - 1])) ^ (((/* implicit */int) (unsigned short)10))))) ? ((-(((/* implicit */int) arr_79 [i_21] [(unsigned short)6] [i_21 + 3])))) : (((int) (unsigned short)62058))));
        var_55 = ((/* implicit */unsigned char) ((long long int) max((5ULL), (((/* implicit */unsigned long long int) arr_88 [i_21 + 1] [i_21] [i_21] [i_21 - 1] [i_21])))));
    }
}
