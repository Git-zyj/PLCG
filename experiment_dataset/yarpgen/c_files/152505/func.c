/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152505
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
    var_17 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) arr_3 [i_0]);
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12824)) ? (((/* implicit */unsigned int) var_14)) : (var_0)))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)120)))))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2484456614U)), (((long long int) arr_0 [i_0 + 1] [i_1])))))));
                var_19 = (unsigned char)122;
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((long long int) (unsigned char)0));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_16 [i_3] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned short) var_2));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((signed char) (unsigned char)36)))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_4] [i_3 - 2] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) var_2)))))))));
                                arr_17 [i_3] [2LL] = ((/* implicit */unsigned char) ((var_14) << (((arr_3 [i_0 - 1]) - (2773724330U)))));
                                arr_18 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((int) arr_11 [i_1] [i_2])) / (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((_Bool) ((long long int) (unsigned char)219)));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) arr_14 [i_0 - 1] [i_6] [i_5] [i_6] [i_7]);
                                arr_28 [i_6] [5U] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) ^ (1810510691U)));
                                arr_29 [i_6] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((arr_3 [i_0 - 1]) & (arr_3 [i_0 - 1])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_8] [i_5] [8U] [i_1] [i_1] [i_1] [i_8])) % (((/* implicit */int) ((short) (unsigned char)220)))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_23 [i_5] [i_8] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [9U] [i_1]))))) : (((((/* implicit */int) arr_15 [i_0] [i_1] [i_8] [i_8] [i_8])) ^ (var_2)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                        {
                            arr_34 [i_0] [i_8] [i_5] [i_8] [i_9] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(1810510705U)))) ? (arr_9 [i_0] [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1])))));
                            var_27 += ((/* implicit */long long int) (~(((/* implicit */int) arr_32 [i_0] [i_0 - 1] [i_5] [(unsigned char)4] [i_8]))));
                            arr_35 [i_0] [i_1] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) var_8))) * (((((/* implicit */_Bool) var_1)) ? (1810510682U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                        {
                            var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_10])) ? (((/* implicit */int) arr_27 [i_0] [i_1] [i_5])) : (((/* implicit */int) (short)12824))));
                            arr_38 [i_8] [(unsigned char)2] [i_8] [i_1] [i_5] [i_8] [i_10] &= ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_8] [i_1] [i_8] [i_8] [i_1])) - (((/* implicit */int) arr_15 [i_0] [i_1] [i_8] [i_8] [(short)10]))));
                            var_29 -= ((/* implicit */signed char) ((unsigned char) arr_27 [i_0 + 1] [i_0 - 1] [(unsigned char)11]));
                        }
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                        {
                            var_30 -= ((/* implicit */unsigned short) ((int) (_Bool)0));
                            arr_41 [i_11] [i_8] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) var_16))))) : (arr_10 [i_0] [i_0] [i_0] [i_0 - 1])));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((arr_25 [i_0 + 1] [i_11]) + (var_11))))));
                        }
                    }
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (((unsigned int) (short)12848))));
                        arr_44 [i_0] [i_1] [(unsigned short)8] [i_1] = arr_37 [i_12];
                        arr_45 [i_0 + 1] [i_1] [i_5] [i_12] [i_12] [i_12] = ((/* implicit */signed char) var_0);
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
    {
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_7 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_7 [(_Bool)0] [i_13] [i_13]))));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((((/* implicit */int) var_16)) * (((/* implicit */int) arr_30 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))) + (((((/* implicit */_Bool) (short)12824)) ? (((/* implicit */int) (short)-32746)) : (var_14))))))));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_13])) ? (arr_47 [i_13]) : (((/* implicit */int) arr_33 [i_13] [i_16]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 3; i_17 < 9; i_17 += 4) 
                        {
                            arr_59 [i_17] [i_13] [i_15] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_20 [i_13] [i_13]))) ? (((((/* implicit */_Bool) arr_47 [i_13])) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) arr_4 [i_17] [i_16] [i_15])))) : ((+(((/* implicit */int) (unsigned char)219))))));
                            arr_60 [i_13] [i_13] [i_15] [i_16] [i_13] = ((/* implicit */unsigned char) ((unsigned int) arr_40 [i_17] [i_17] [i_17 - 1] [i_17 - 2] [i_17] [i_13]));
                            arr_61 [i_13] [i_14] [i_15] [i_16] [i_13] = ((/* implicit */_Bool) arr_37 [i_13]);
                        }
                    }
                    for (short i_18 = 0; i_18 < 10; i_18 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            arr_69 [i_13] [i_14] [i_14] [i_15] [i_13] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_13] [i_14] [i_13] [i_18] [i_19] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_13]))) : (var_5)));
                            var_36 = ((/* implicit */short) arr_24 [0LL] [i_13] [i_14] [i_15] [i_18] [i_18] [i_19]);
                        }
                        for (signed char i_20 = 0; i_20 < 10; i_20 += 3) 
                        {
                            var_37 = ((/* implicit */long long int) var_14);
                            arr_73 [i_13] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((unsigned char) var_8));
                        }
                        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
                        {
                            arr_77 [i_18] [i_14] [i_14] [i_18] [i_13] = ((/* implicit */unsigned short) (+(var_5)));
                            var_38 = ((/* implicit */short) 3719120514U);
                            var_39 = ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
                            var_40 &= ((/* implicit */unsigned long long int) (unsigned short)65525);
                        }
                        arr_78 [i_14] [i_14] [i_14] [i_14] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_13] [i_18] [i_15])) ? (((/* implicit */long long int) ((arr_32 [i_13] [i_14] [(unsigned short)8] [(unsigned short)8] [i_18]) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_48 [i_13]))))) : (((arr_1 [i_14]) * (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_13])))))));
                    }
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_13])) ? (((/* implicit */int) arr_40 [i_13] [i_13] [i_14] [i_14] [i_15] [i_15])) : (((/* implicit */int) ((arr_57 [0LL] [i_13] [i_14] [0LL] [i_15] [i_13] [i_15]) != (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                }
            } 
        } 
        arr_79 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_13] [i_13] [i_13] [i_13])) ? (((((/* implicit */_Bool) arr_31 [i_13] [i_13])) ? (arr_71 [i_13] [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (short)-12805))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_13] [i_13] [i_13]))))))));
    }
    for (int i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
    {
        arr_83 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_22] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_48 [i_22]) || (((/* implicit */_Bool) var_10)))))) : (arr_76 [0LL] [i_22] [i_22] [i_22])))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_22] [i_22])) || (((/* implicit */_Bool) arr_80 [i_22] [i_22])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_22]))) : (var_0))))));
        /* LoopNest 2 */
        for (long long int i_23 = 3; i_23 < 8; i_23 += 3) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    arr_88 [i_22] [i_22] [i_22] [i_22] = (short)16255;
                    arr_89 [i_22] [i_22] = ((short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-24)), (var_14)))) ? (((long long int) (unsigned char)120)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_22]))))))));
                    arr_90 [i_22] [i_23] [i_22] = ((/* implicit */_Bool) 1666436921);
                    var_42 = ((long long int) ((((/* implicit */_Bool) 1392227761U)) ? (((/* implicit */unsigned long long int) arr_87 [i_23 - 3] [i_23 - 3] [i_24] [i_22])) : (arr_36 [(short)11] [i_22] [i_24] [i_23] [i_22] [i_23])));
                }
            } 
        } 
    }
}
