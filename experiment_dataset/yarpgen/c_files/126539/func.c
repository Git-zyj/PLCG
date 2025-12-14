/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126539
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
    var_17 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_6))));
        var_19 |= ((/* implicit */unsigned short) arr_0 [i_0]);
        var_20 = var_10;
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [0] [i_3] [i_0] = ((/* implicit */int) var_14);
                            arr_11 [i_0] [i_2] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */long long int) arr_7 [i_0]);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (2613731547163163479LL) : (var_7)));
                            var_22 = ((/* implicit */unsigned char) 1715129084);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    for (int i_6 = 4; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6 - 3] [i_5 + 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_5 [i_0])))) : (((/* implicit */int) arr_6 [i_6] [i_1] [(unsigned short)3] [i_1] [i_1] [i_0]))))) ? (((/* implicit */long long int) arr_7 [i_1])) : (arr_1 [i_2])));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_7 [i_2]))));
                        }
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */unsigned char) var_1);
            }
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_0 [6U]))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 16; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 14; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_14))));
                            var_27 = ((var_9) ? (arr_9 [i_0] [i_1] [i_0] [(unsigned short)7] [i_9] [i_9 - 2] [(unsigned short)7]) : (arr_21 [i_0] [i_0] [i_0] [i_0]));
                        }
                        for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) var_9);
                            arr_30 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((signed char) arr_13 [i_0]));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                        {
                            var_29 = arr_32 [i_11] [12U] [i_7 + 1] [i_8] [i_8];
                            var_30 &= ((/* implicit */signed char) arr_25 [i_0] [i_8] [i_0] [i_8] [i_8] [i_11]);
                            var_31 += ((/* implicit */unsigned char) var_6);
                            var_32 = ((/* implicit */int) arr_23 [i_8] [i_1]);
                            arr_33 [i_0] = ((/* implicit */long long int) arr_29 [i_0]);
                        }
                        for (int i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) min((arr_23 [i_1] [i_1 - 1]), (arr_23 [i_0] [i_1 - 1])));
                            var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_9 [i_12] [(unsigned char)3] [i_12] [i_8] [i_1 - 1] [(unsigned char)10] [i_12]) : (((/* implicit */int) arr_2 [i_0] [i_12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned int) ((signed char) var_1))), (((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_7] [i_8] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3)))))));
                        }
                        var_35 = ((/* implicit */long long int) var_13);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 15; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (int i_15 = 1; i_15 < 16; i_15 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) var_9);
                            arr_45 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_35 [i_0] [i_14] [(unsigned short)2] [i_0]);
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_16 = 4; i_16 < 6; i_16 += 4) 
    {
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            for (int i_18 = 0; i_18 < 10; i_18 += 1) 
            {
                {
                    arr_54 [i_16 - 3] [(_Bool)1] [i_18] = ((/* implicit */unsigned int) var_5);
                    var_37 -= ((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_16])) : (((/* implicit */int) arr_16 [i_16] [i_17] [i_18])))) : (((/* implicit */int) max((arr_27 [i_16] [(short)9] [i_16 - 3] [i_18] [i_18]), (((/* implicit */unsigned short) var_9)))))))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 3; i_19 < 7; i_19 += 2) 
                    {
                        for (unsigned char i_20 = 4; i_20 < 9; i_20 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned int) arr_52 [i_16]);
                                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_13 [i_18])))) ? (((/* implicit */unsigned long long int) -1611270090)) : (arr_13 [i_18])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 1; i_23 < 8; i_23 += 2) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) arr_56 [i_16] [i_21] [i_22] [i_23]))));
                            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) var_5))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 10; i_25 += 3) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)107)));
                            var_43 = ((/* implicit */int) 1100316862U);
                            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_25] [i_16 + 3])) ? (arr_64 [i_16 - 2] [i_16 - 2] [i_26] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) arr_53 [i_26] [1LL] [1LL] [i_16])))))));
                            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (((_Bool)0) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) var_10))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_27 = 0; i_27 < 10; i_27 += 4) 
                {
                    for (unsigned int i_28 = 0; i_28 < 10; i_28 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned char) max((min((max((((/* implicit */long long int) 813958161)), (var_11))), (arr_28 [i_16] [i_21] [i_22] [i_27] [i_28]))), (((/* implicit */long long int) max((((/* implicit */int) var_9)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)17)) : (-1715129086))))))));
                            arr_82 [i_28] [i_28] [i_27] [i_16] [i_22] [(_Bool)1] [i_16] |= ((/* implicit */unsigned char) arr_62 [i_16] [8] [8]);
                            var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) : (var_15)))) ? (((/* implicit */unsigned long long int) 1038367331)) : (((((/* implicit */_Bool) arr_19 [i_16] [i_22] [i_27])) ? (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_68 [i_16] [i_21] [6ULL] [i_27] [i_28] [i_21]))) : (arr_67 [i_21] [i_21])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 4) 
                {
                    arr_85 [i_21] = ((/* implicit */int) var_9);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 2; i_30 < 6; i_30 += 1) 
                    {
                        arr_88 [i_16] [i_21] [i_21] [i_21] [i_29] [i_29] [i_30] = ((/* implicit */int) arr_36 [i_16]);
                        var_49 = ((/* implicit */unsigned char) arr_41 [i_21] [i_21] [i_22] [i_29]);
                        var_50 = ((/* implicit */unsigned long long int) ((unsigned int) arr_42 [8] [i_29] [i_16 - 3] [i_16 - 3] [i_16 - 3]));
                    }
                    arr_89 [i_16] [i_22] [i_16] [i_16] [i_22] [i_22] |= ((/* implicit */unsigned short) arr_66 [i_16] [i_16 - 2] [i_16] [i_16] [i_16]);
                }
                for (int i_31 = 0; i_31 < 10; i_31 += 2) 
                {
                    var_51 = ((/* implicit */int) arr_20 [i_16] [i_21] [i_21] [i_22] [i_21] [i_31]);
                    arr_92 [i_31] [i_21] [i_21] [i_21] [i_16 + 4] = ((/* implicit */signed char) var_3);
                }
                /* vectorizable */
                for (unsigned short i_32 = 2; i_32 < 6; i_32 += 4) 
                {
                    var_52 = ((/* implicit */int) arr_27 [i_16 + 2] [(unsigned short)7] [i_21] [i_22] [16]);
                    /* LoopSeq 3 */
                    for (unsigned char i_33 = 2; i_33 < 7; i_33 += 3) 
                    {
                        arr_99 [i_33] [i_21] [i_22] [i_21] [i_16] = ((/* implicit */_Bool) ((int) arr_47 [i_16 + 4] [i_16 - 1]));
                        var_53 = ((/* implicit */int) arr_77 [i_16] [i_21] [i_33 - 2] [i_16]);
                        arr_100 [i_16 - 4] [i_16 - 4] [i_21] [i_32] [i_33] = ((/* implicit */int) var_16);
                        arr_101 [2U] [i_21] [i_22] [i_32] [i_33] = ((((/* implicit */_Bool) 936997086U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9249)));
                    }
                    for (unsigned int i_34 = 2; i_34 < 7; i_34 += 4) 
                    {
                        var_54 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_87 [1LL] [i_32] [9] [1LL] [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_16 - 2] [i_21] [i_22] [i_32]))) : (((((/* implicit */_Bool) arr_5 [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5)))));
                        arr_104 [i_22] [i_32 + 3] [i_32 + 3] [i_32 + 4] [2U] [i_32] [i_21] = ((/* implicit */int) var_3);
                        var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_34 + 2] [i_16 + 3] [i_21] [i_16 + 3])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_56 = ((/* implicit */long long int) var_1);
                    }
                    for (unsigned int i_35 = 1; i_35 < 8; i_35 += 2) 
                    {
                        var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) arr_14 [i_32] [i_21] [i_22] [i_32] [i_35] [i_21] [i_21]))));
                        arr_108 [i_21] [i_21] [i_22] [5] [i_21] = ((/* implicit */unsigned int) arr_9 [i_16] [i_21] [i_22] [i_32 + 4] [i_22] [i_32] [i_35]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_36 = 0; i_36 < 10; i_36 += 2) 
                    {
                        arr_111 [i_16] [i_16] [i_16] [i_16] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_21] [i_21] [i_21] [i_21])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_36] [5U] [i_16] [i_16])))))) ? (((/* implicit */int) arr_57 [i_16 - 3] [i_16 - 4] [i_16 + 2] [i_16 - 1])) : (((/* implicit */int) arr_87 [i_16 - 3] [i_21] [i_22] [i_32] [i_36]))));
                        var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) arr_27 [i_16 - 3] [i_16 - 3] [i_22] [i_16 - 3] [i_36]))));
                        arr_112 [i_21] [i_21] [i_22] [i_36] [i_21] = ((/* implicit */unsigned short) (((_Bool)1) ? (-1719237370) : (arr_47 [i_32] [i_32])));
                        var_59 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_105 [i_16 + 4] [0ULL] [i_16] [8] [i_16] [i_21])) : (((/* implicit */int) (_Bool)1))));
                    }
                }
                var_60 = ((/* implicit */unsigned short) max((var_60), (((/* implicit */unsigned short) ((unsigned int) var_1)))));
            }
            for (signed char i_37 = 0; i_37 < 10; i_37 += 1) 
            {
                var_61 ^= ((/* implicit */_Bool) arr_106 [i_16] [i_37] [(short)8] [i_16] [i_16]);
                arr_117 [i_16] [i_21] = ((/* implicit */unsigned char) arr_37 [i_16 - 2] [i_21] [i_21] [i_37]);
            }
            var_62 &= ((/* implicit */signed char) var_10);
        }
        for (unsigned char i_38 = 0; i_38 < 10; i_38 += 1) 
        {
            arr_121 [i_16] [i_38] [i_16 - 3] = ((/* implicit */signed char) arr_46 [i_16] [i_38]);
            var_63 &= ((/* implicit */int) ((unsigned long long int) var_16));
            /* LoopNest 2 */
            for (unsigned char i_39 = 1; i_39 < 8; i_39 += 1) 
            {
                for (short i_40 = 0; i_40 < 10; i_40 += 2) 
                {
                    {
                        var_64 = ((/* implicit */unsigned char) max((((long long int) arr_43 [i_16 - 3] [i_16] [i_38] [i_39] [i_40] [i_40] [i_40])), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1155537046)) ? (((/* implicit */int) (short)29332)) : (((/* implicit */int) (unsigned char)188))))) ? (var_1) : (((/* implicit */int) (unsigned char)154)))))));
                        var_65 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */long long int) arr_124 [i_39] [i_39] [i_39] [7U])) : (arr_28 [i_39 + 2] [i_39] [i_39] [i_16] [3])))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) var_2)) ? (arr_75 [i_16] [i_38] [i_39] [i_40]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_41 = 0; i_41 < 10; i_41 += 2) 
            {
                for (unsigned char i_42 = 0; i_42 < 10; i_42 += 1) 
                {
                    {
                        arr_135 [i_38] [i_38] [i_38] = ((/* implicit */int) arr_2 [i_16] [i_38]);
                        var_66 = ((/* implicit */unsigned int) var_7);
                        var_67 = ((/* implicit */unsigned int) arr_69 [(_Bool)1] [(_Bool)1] [i_16 + 2] [i_16 + 2] [i_16 + 2] [i_16 + 2]);
                    }
                } 
            } 
        }
        for (int i_43 = 3; i_43 < 8; i_43 += 4) 
        {
            var_68 = ((/* implicit */unsigned char) min((var_68), (arr_39 [i_16] [i_16] [i_43] [i_16] [i_43])));
            var_69 = ((/* implicit */unsigned short) ((int) ((unsigned short) (short)12229)));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_44 = 0; i_44 < 18; i_44 += 4) 
    {
        var_70 |= ((/* implicit */_Bool) var_5);
        arr_142 [i_44] [i_44] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3040177571480688881LL)));
    }
    var_71 = ((/* implicit */unsigned char) var_0);
}
