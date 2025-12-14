/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174507
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
    var_19 = ((/* implicit */signed char) max((((long long int) ((int) var_3))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11)))))));
    var_20 = ((/* implicit */short) var_10);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        var_21 += var_5;
        var_22 = var_17;
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    {
                        arr_17 [i_2] = ((/* implicit */unsigned long long int) var_8);
                        arr_18 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) arr_14 [(unsigned char)10] [i_2])))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_4))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_16))));
                        arr_19 [i_1] [i_1] [i_4 + 2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (var_7))))), (((((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */int) arr_16 [i_2] [i_3] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) var_18)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_12)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_24 [i_1] [i_5] [i_6] = ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_15)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) var_0))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_1]))));
                    var_26 = ((/* implicit */short) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_1])) ? (var_7) : (arr_22 [i_1] [(short)2] [i_1] [i_1])))))), (var_11)));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (short i_8 = 2; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 1945380516)) ? (-1167035761) : (2143510024))))) ? (max((((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) var_17)) : (var_2))), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_8 [i_1])))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13)))))))));
                                arr_30 [i_1] [i_7] [i_1] [(unsigned char)3] [i_8] [i_7] = ((/* implicit */short) var_9);
                                arr_31 [4U] [4U] [i_6] [i_7] [i_7] [i_8] [i_8 - 1] = ((/* implicit */unsigned int) ((signed char) var_1));
                                arr_32 [i_5] [i_5] [i_7] [i_7] [i_8] [i_8 - 1] = ((/* implicit */long long int) var_15);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 18; i_9 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) var_10);
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (signed char i_11 = 2; i_11 < 15; i_11 += 1) 
            {
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 274877906816LL))) ? (((/* implicit */int) arr_39 [(unsigned short)15])) : (((((/* implicit */_Bool) 536870896)) ? (1167035734) : (2143510024)))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) -1167035734))) ? (((/* implicit */unsigned long long int) -8645403521938882065LL)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58315))) : (var_2))))))));
                }
            } 
        } 
        arr_42 [i_9 + 1] = ((/* implicit */short) var_2);
        /* LoopSeq 1 */
        for (int i_12 = 3; i_12 < 17; i_12 += 4) 
        {
            var_31 *= ((/* implicit */unsigned char) var_18);
            arr_46 [i_9 - 1] [i_9] [i_9 + 1] = ((/* implicit */signed char) var_18);
            arr_47 [(_Bool)1] [(_Bool)1] [i_9 - 1] = ((/* implicit */int) var_4);
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_15 = 1; i_15 < 12; i_15 += 1) 
            {
                for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    for (unsigned char i_17 = 1; i_17 < 11; i_17 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((unsigned int) arr_35 [i_15 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_13] [i_13] [i_13] [i_15] [i_16] [i_16] [(signed char)9])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_57 [i_16])))))))));
                            arr_62 [i_13] [i_14] [i_15 + 1] [i_16] [i_14] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_16))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_18)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
                            arr_63 [i_13] [(unsigned char)9] [i_17] [i_15] = ((((/* implicit */_Bool) arr_15 [i_13] [i_13])) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) arr_58 [i_17 + 2] [6] [i_15] [i_14])));
                            arr_64 [i_17] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (~(var_15)))) : (((((/* implicit */_Bool) var_16)) ? (arr_20 [i_15] [i_15 - 1]) : (var_11)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_18 = 3; i_18 < 9; i_18 += 3) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_70 [i_13] [(signed char)12] [i_18] [i_19] &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (unsigned short)7221)) : (((/* implicit */int) (unsigned short)58315)))));
                        arr_71 [i_18] = ((/* implicit */unsigned long long int) var_8);
                        /* LoopSeq 4 */
                        for (unsigned int i_20 = 2; i_20 < 12; i_20 += 1) 
                        {
                            arr_74 [i_13] [i_18] [i_18] [i_13] [i_13] [i_18] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_7) : (arr_25 [i_18])))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_9))));
                            arr_75 [i_13] [(signed char)7] [i_18 - 2] [i_19] [i_18] = ((/* implicit */long long int) ((signed char) arr_61 [i_13] [i_13] [9] [i_19] [i_20]));
                            arr_76 [i_18] [i_19] [i_18] [i_14] [i_18] = ((/* implicit */short) arr_60 [i_18] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]);
                        }
                        for (int i_21 = 0; i_21 < 13; i_21 += 4) /* same iter space */
                        {
                            var_34 += ((/* implicit */_Bool) ((long long int) arr_1 [i_13]));
                            var_35 |= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_13] [i_21] [i_18])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_13]))))));
                            arr_79 [i_18] = ((/* implicit */int) ((unsigned char) var_9));
                            arr_80 [i_13] [i_13] [i_21] [i_19] |= ((/* implicit */unsigned int) ((unsigned long long int) var_3));
                        }
                        for (int i_22 = 0; i_22 < 13; i_22 += 4) /* same iter space */
                        {
                            var_36 *= ((/* implicit */signed char) var_11);
                            arr_83 [i_13] [i_13] [i_18] [i_18] [i_13] [i_18] = ((/* implicit */unsigned int) arr_28 [i_13] [i_13] [i_14] [7] [i_19] [i_22] [i_22]);
                            arr_84 [i_22] [i_18] [i_18 - 2] [i_18] [i_13] = ((/* implicit */long long int) ((unsigned long long int) var_9));
                            var_37 += ((/* implicit */long long int) var_15);
                        }
                        for (int i_23 = 0; i_23 < 13; i_23 += 4) /* same iter space */
                        {
                            arr_87 [i_23] [10] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (4988417469823705113LL)))) ? (var_7) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_16 [i_23] [i_23] [i_19] [i_19]))))));
                            arr_88 [0LL] [i_14] [i_18] [i_23] [i_23] &= ((/* implicit */short) ((unsigned long long int) (unsigned short)7222));
                            var_38 = ((/* implicit */unsigned short) var_2);
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 13; i_24 += 1) 
            {
                for (int i_25 = 0; i_25 < 13; i_25 += 4) 
                {
                    {
                        var_39 = ((/* implicit */unsigned long long int) ((signed char) (short)-18628));
                        var_40 = var_16;
                    }
                } 
            } 
            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) arr_8 [i_13]))));
            var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))))));
        }
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 13; i_26 += 2) 
        {
            for (int i_27 = 0; i_27 < 13; i_27 += 4) 
            {
                {
                    var_43 = ((/* implicit */unsigned int) var_18);
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        for (unsigned long long int i_29 = 1; i_29 < 10; i_29 += 4) 
                        {
                            {
                                arr_107 [i_13] [(_Bool)1] [i_13] [i_28] [(signed char)4] = ((/* implicit */unsigned long long int) ((_Bool) var_16));
                                arr_108 [i_13] [i_26] [i_27] [i_28] [i_29] [i_29 + 3] = (-(((/* implicit */int) arr_105 [i_13] [i_13] [i_26] [i_27] [i_27] [i_27])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_30 = 1; i_30 < 12; i_30 += 2) 
        {
            for (short i_31 = 0; i_31 < 13; i_31 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_32 = 0; i_32 < 13; i_32 += 3) 
                    {
                        for (unsigned int i_33 = 0; i_33 < 13; i_33 += 1) 
                        {
                            {
                                arr_119 [i_30] [i_31] [i_33] = ((/* implicit */short) ((unsigned short) ((int) var_9)));
                                arr_120 [i_30] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_13] [i_13])) : (((/* implicit */int) arr_105 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))));
                                arr_121 [i_30] [i_31] [i_32] [i_33] = ((/* implicit */unsigned char) var_9);
                                arr_122 [i_13] [i_33] [i_13] [i_33] [i_33] &= ((/* implicit */unsigned short) var_18);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_34 = 0; i_34 < 13; i_34 += 3) 
                    {
                        arr_125 [i_13] [i_13] [i_13] [(unsigned short)0] [i_13] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_92 [i_13] [3U] [i_31] [i_34]))) : (var_8)))) ? (((((/* implicit */_Bool) arr_12 [i_13] [i_30] [i_31] [i_13])) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((int) arr_93 [i_13])))));
                        var_44 = ((/* implicit */unsigned short) arr_50 [i_13]);
                        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_13)) : (((int) var_17)))))));
                    }
                    var_46 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_9))));
                }
            } 
        } 
        arr_126 [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1073741824U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(unsigned char)2] [16U] [(unsigned char)2])))));
        arr_127 [i_13] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_13])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_16))))));
    }
}
