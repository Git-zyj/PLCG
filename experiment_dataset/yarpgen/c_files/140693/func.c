/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140693
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
    var_17 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (var_3))), (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_16))));
    var_18 = ((/* implicit */_Bool) (+(((var_2) | (((/* implicit */unsigned int) var_5))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 2; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        var_19 = ((signed char) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_2 [i_0 + 1]))))))))));
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_12))))))));
                        var_22 += ((/* implicit */unsigned char) (+(var_2)));
                        var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14)))) & ((+(var_2))))))));
                        arr_16 [i_0] [i_0] [i_2 - 1] [(unsigned char)4] = arr_3 [4U] [i_1] [i_1];
                    }
                    var_25 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3)))));
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [(unsigned short)3] [i_2] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_0]))))) : (((unsigned int) arr_9 [i_6]))));
                        var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0]))))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_14 [i_1] [i_1] [9U] [i_1])) : (var_10)))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_0 - 1])) : (((/* implicit */int) arr_17 [i_0 + 1]))));
                        var_29 = ((/* implicit */signed char) var_7);
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))));
                        arr_23 [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_3]);
                    }
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_31 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10))) & (((((/* implicit */_Bool) var_16)) ? (var_6) : (var_6)))));
                        arr_27 [(unsigned char)7] [i_3] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) var_7);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_6)));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) arr_11 [i_0 - 1] [i_0] [i_3 + 1]));
                        var_33 ^= ((/* implicit */signed char) (~(((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))))));
                    }
                    arr_32 [i_0 - 1] [i_0 - 1] [i_2 - 2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10))))));
                }
                for (int i_10 = 2; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */signed char) var_5);
                    var_35 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                }
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(unsigned char)11] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_12]))))) : (((((/* implicit */_Bool) arr_29 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))) : (var_0)))));
                            var_37 = ((/* implicit */short) ((arr_15 [i_0] [i_0 - 1] [i_0] [i_0]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 1] [i_2] [i_0])))));
                        }
                    } 
                } 
                arr_40 [i_2 - 3] [i_0] [i_2 - 3] [i_2] = ((/* implicit */short) var_16);
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    var_38 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2120413429U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (var_10)));
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_39 = ((/* implicit */int) var_7);
                        var_40 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11]))) * ((+(var_6)))));
                        arr_48 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0]))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        var_41 *= ((/* implicit */short) var_14);
                        var_42 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) var_0)))) + (9223372036854775807LL))) >> (((/* implicit */int) arr_10 [i_0 + 1] [i_2 + 1]))));
                        var_43 = ((/* implicit */int) var_12);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_44 = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)254))))));
                        var_45 = ((/* implicit */long long int) var_2);
                        arr_53 [0] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((arr_34 [i_13] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) arr_37 [6U] [8] [i_2] [8] [i_0 + 1]))));
                    }
                }
            }
            for (unsigned short i_17 = 1; i_17 < 11; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned char i_19 = 1; i_19 < 9; i_19 += 3) 
                    {
                        {
                            arr_61 [i_18] [i_18 - 1] [i_18] [i_18 - 1] [i_0] [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_17 + 1]))) / (arr_3 [i_0] [i_18 - 1] [i_19])))) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) arr_41 [i_0 - 1] [i_17 + 1] [i_17] [i_18]))));
                            var_46 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_46 [i_19 - 1] [i_18] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) var_13)));
                            arr_62 [(unsigned short)5] [i_1] [i_1] [i_1] [i_0] [i_19] [i_19 - 1] = var_3;
                        }
                    } 
                } 
                var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_44 [0U] [(short)7] [i_0] [i_0 + 1]))));
            }
            var_48 = var_5;
            var_49 = ((/* implicit */_Bool) arr_45 [i_1] [i_0] [i_0] [i_0]);
            var_50 ^= ((/* implicit */short) arr_29 [(unsigned char)4]);
            var_51 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21277))) | (518725577U))))));
        }
        for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
        {
            arr_65 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)23))) ? (1324105517U) : (var_15)));
            /* LoopNest 2 */
            for (unsigned char i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                for (unsigned short i_22 = 1; i_22 < 11; i_22 += 3) 
                {
                    {
                        arr_72 [i_21] [i_21] [i_21] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_33 [i_0] [0U] [1U] [i_0])) ? (var_0) : (((/* implicit */unsigned int) var_5)))))));
                        var_52 = ((/* implicit */_Bool) arr_22 [i_0] [i_21] [i_21]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 12; i_23 += 4) /* same iter space */
                        {
                            var_53 = ((/* implicit */unsigned char) var_1);
                            arr_75 [i_0] [i_0] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_20] [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0] [i_0] [5] [i_0] [5U] [i_0 + 1]))))) : (((var_6) + (((/* implicit */long long int) var_0))))));
                            var_54 = ((/* implicit */signed char) var_1);
                        }
                        for (int i_24 = 0; i_24 < 12; i_24 += 4) /* same iter space */
                        {
                            arr_79 [i_20] [i_0] = ((/* implicit */unsigned int) var_9);
                            arr_80 [i_0] [i_20] [i_21] [i_21] [(unsigned short)4] [i_0] = ((/* implicit */short) ((int) arr_57 [i_0 - 1] [i_0] [(unsigned short)2] [(signed char)8] [i_24]));
                        }
                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 12; i_25 += 4) /* same iter space */
                        {
                            var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) ((short) arr_9 [i_22 + 1])))));
                            arr_83 [i_0] [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                            arr_84 [i_0] [i_0] [i_21] [i_22 - 1] [i_25] [i_22 - 1] = var_11;
                        }
                        for (int i_26 = 0; i_26 < 12; i_26 += 4) /* same iter space */
                        {
                            var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_0])), (var_1)))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) ((unsigned char) var_3)))));
                            arr_89 [(unsigned short)0] [(unsigned short)0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
                            arr_90 [i_26] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_5 [i_22])))) ? ((-(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_21]))) : (arr_14 [i_0] [i_26] [(short)1] [i_22]))))))))));
                        }
                        arr_91 [i_0] [i_0] [i_0] = var_0;
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_27 = 0; i_27 < 12; i_27 += 4) 
            {
                for (unsigned char i_28 = 3; i_28 < 11; i_28 += 4) 
                {
                    for (unsigned int i_29 = 0; i_29 < 12; i_29 += 4) 
                    {
                        {
                            arr_99 [i_0] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) arr_74 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1])) ? (arr_74 [i_0 + 1] [i_0 - 1] [i_0 + 1] [(short)5] [(short)5] [i_0] [i_0 - 1]) : (arr_74 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            var_57 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_11)) | (((/* implicit */int) arr_25 [i_0 + 1]))))));
                            var_58 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((int) (unsigned char)6))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 1]))) * (arr_12 [i_0] [i_0 + 1] [i_28 - 2] [i_27] [i_0 + 1] [i_0 + 1] [i_0])))));
                        }
                    } 
                } 
            } 
        }
        arr_100 [i_0] = min((var_2), (((/* implicit */unsigned int) arr_87 [i_0] [i_0] [i_0])));
    }
    var_59 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) (~(var_15))))), ((-(((/* implicit */int) ((unsigned char) var_5)))))));
}
