/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157263
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
    var_13 = ((/* implicit */int) var_8);
    var_14 = ((/* implicit */unsigned int) var_11);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((var_1) ? (var_9) : (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) var_1))))))) ? (31LL) : (((/* implicit */long long int) (+(((int) var_5)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 += ((/* implicit */unsigned char) ((max((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_11)))) * (((/* implicit */int) arr_4 [i_1]))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+((+(arr_6 [i_0] [i_1] [i_1] [(_Bool)1]))))))));
                    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)34))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_4] [(unsigned char)8] [i_3] [i_1] [i_1]))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] [i_0])))) : ((-(4953421632722894409ULL))))))));
                                arr_15 [i_0] [i_0] [i_3] [1] [i_0] [i_0] = ((/* implicit */long long int) (+(var_9)));
                                arr_16 [i_0] = ((/* implicit */unsigned long long int) ((arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) >= (arr_14 [i_0] [i_1] [i_3] [i_1] [i_1] [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_21 [i_0] [(unsigned char)4] [i_7] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [21ULL] [(_Bool)1] [(_Bool)1] [i_7]))));
                            var_21 = arr_7 [i_0] [i_1] [i_6] [i_7];
                        }
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_24 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_6] [i_0] [i_0])) ? (arr_6 [13LL] [i_1] [i_3] [i_6]) : (arr_6 [i_8] [5LL] [i_1] [i_0])));
                            var_22 = ((/* implicit */int) (signed char)-35);
                        }
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) var_3);
                            var_24 = ((/* implicit */unsigned char) var_2);
                        }
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) (signed char)34);
                            var_26 = ((/* implicit */unsigned short) (unsigned char)50);
                            arr_30 [i_10] [i_0] [i_3] [i_0] [i_0] = arr_7 [i_0] [i_0] [i_3] [i_0];
                        }
                        arr_31 [i_0] [i_6] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)11])) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) (unsigned short)12288)))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) (short)-1))))));
                        var_27 = ((/* implicit */unsigned char) arr_18 [i_0] [i_3] [i_3] [i_6]);
                        var_28 = arr_3 [i_0] [i_0] [i_3];
                        arr_32 [(unsigned char)10] [i_0] [i_3] [i_6] = ((/* implicit */short) ((int) arr_13 [i_3] [i_3] [i_1] [i_1] [i_0]));
                    }
                    for (int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        arr_35 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2843388596U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16))));
                        var_29 *= ((/* implicit */signed char) ((arr_14 [i_0] [i_0] [i_3] [i_3] [i_11] [i_11]) | (((/* implicit */int) arr_9 [i_0] [i_1] [i_0]))));
                        var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_3] [i_11]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) arr_33 [i_0] [i_1] [i_1]))));
                            var_32 = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [(short)10] [i_0] [i_0]);
                        }
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_3])))))));
                            var_34 = ((/* implicit */long long int) arr_1 [i_11]);
                        }
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_44 [i_14] [i_0] [i_3] [i_0] [(unsigned short)16] = (~(-1374920324));
                            arr_45 [i_14] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))));
                            var_35 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                }
                for (long long int i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) 0))));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (unsigned char)130)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))) : (arr_36 [i_0] [i_0] [i_15] [i_1] [i_15] [i_1] [i_1])));
                }
                for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    var_39 = ((/* implicit */long long int) max((var_39), (min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_16] [i_16])) == (var_5))))) / (arr_40 [i_0] [i_0] [i_16]))), (min((arr_3 [(unsigned char)12] [i_16] [(unsigned char)12]), (((/* implicit */long long int) var_2))))))));
                    /* LoopSeq 3 */
                    for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        arr_55 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(min((arr_6 [i_0] [i_1] [i_16] [i_17]), (((/* implicit */long long int) var_6))))));
                        var_40 = ((/* implicit */unsigned int) (!((!((!((_Bool)1)))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned long long int) arr_23 [i_0] [5ULL]);
                        arr_60 [i_0] [(_Bool)1] [i_1] [i_18] = ((/* implicit */unsigned short) min((max(((~(((/* implicit */int) (signed char)15)))), (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 3) /* same iter space */
                    {
                        var_42 += ((/* implicit */long long int) ((((/* implicit */unsigned int) (((!(var_2))) ? (((/* implicit */int) arr_33 [i_0] [i_1] [i_0])) : (max((-699639425), (((/* implicit */int) arr_5 [i_1] [(short)19]))))))) * (arr_61 [i_16] [i_1] [i_16] [i_19])));
                        arr_63 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_19] [i_16] [i_16] [i_1] [i_1] [i_0])) ? (arr_36 [i_19] [i_16] [10] [i_1] [i_0] [i_0] [i_0]) : (arr_36 [i_19] [i_16] [i_16] [(unsigned char)3] [i_0] [i_0] [i_0])))) ? (arr_23 [i_16] [(unsigned char)7]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_19] [i_19] [i_0])))))));
                        var_43 = ((/* implicit */_Bool) (~((~(var_7)))));
                    }
                }
                /* LoopNest 3 */
                for (unsigned char i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    for (unsigned char i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 24; i_22 += 4) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)13))));
                                arr_71 [i_0] = ((/* implicit */long long int) arr_43 [i_22] [i_0] [i_0] [i_0] [i_0] [i_22]);
                                var_45 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) >= (-7715791885871867426LL))))));
                                var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_22] [i_22] [i_22] [i_22] [i_1] [(signed char)16]))) : (var_7)))))))));
                            }
                        } 
                    } 
                } 
                var_47 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_26 [i_0] [(unsigned char)9] [i_1] [i_0] [i_1] [i_1]) : (var_5)))));
                /* LoopSeq 3 */
                for (unsigned short i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    var_48 ^= ((/* implicit */signed char) max(((_Bool)1), ((!(((/* implicit */_Bool) (unsigned char)4))))));
                    var_49 = ((/* implicit */unsigned char) var_0);
                    var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_47 [i_1])))) ? (((/* implicit */unsigned int) min(((+(var_6))), ((+(((/* implicit */int) var_2))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) >= (var_5))))) | (arr_8 [i_0] [i_0] [(unsigned char)19] [i_23]))))))));
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((signed char)35), (((/* implicit */signed char) arr_9 [i_0] [i_1] [i_23])))))))) && (var_1)));
                }
                for (signed char i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_25 = 0; i_25 < 24; i_25 += 4) 
                    {
                        arr_79 [i_0] [i_0] [i_0] [i_0] = max((((var_6) + (((/* implicit */int) ((((/* implicit */int) arr_7 [i_25] [i_24] [i_1] [11LL])) < (arr_58 [i_0] [i_0] [i_0] [i_24] [i_25])))))), ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)121))))))));
                        arr_80 [(unsigned short)13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 0; i_26 < 24; i_26 += 3) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 24; i_27 += 3) 
                        {
                            {
                                var_52 = ((/* implicit */unsigned char) var_2);
                                var_53 = ((/* implicit */unsigned long long int) arr_41 [i_24] [i_24]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_28 = 0; i_28 < 24; i_28 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_29 = 0; i_29 < 24; i_29 += 3) 
                    {
                        for (unsigned int i_30 = 0; i_30 < 24; i_30 += 1) 
                        {
                            {
                                arr_93 [i_0] [i_1] [i_28] [i_29] [i_30] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1889147304U)) ? (var_0) : (((/* implicit */int) var_10))))) != (((var_8) % (((/* implicit */unsigned long long int) arr_39 [i_0] [i_1] [i_1] [i_29])))));
                                var_54 = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_31 = 0; i_31 < 24; i_31 += 4) 
                    {
                        arr_96 [i_0] [i_0] [i_28] [i_31] = (unsigned char)81;
                        var_55 = ((/* implicit */unsigned char) var_6);
                    }
                    for (long long int i_32 = 0; i_32 < 24; i_32 += 3) 
                    {
                        arr_99 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_94 [i_0] [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_56 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) >> (((/* implicit */int) ((((/* implicit */int) var_4)) < (var_6))))));
                        arr_100 [i_0] [i_0] [i_0] [i_28] [i_32] [i_32] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_32] [i_0] [i_1])) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_28] [i_0] [i_0])));
                    }
                    for (int i_33 = 0; i_33 < 24; i_33 += 3) 
                    {
                        arr_104 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_3)) : (var_7)))));
                        var_57 ^= (unsigned char)57;
                    }
                    var_58 = ((/* implicit */int) min((var_58), ((+((+(arr_68 [i_0] [i_0] [i_0] [i_0])))))));
                    var_59 = ((arr_57 [i_28] [i_28] [i_1] [i_0] [i_0]) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))));
                }
            }
        } 
    } 
}
