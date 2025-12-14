/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134440
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((3734125580U), (var_3)))), (((4145554236994770654ULL) | (var_5)))));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_8)), (((14301189836714780962ULL) - (((/* implicit */unsigned long long int) 560841707U)))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (min((((/* implicit */unsigned int) arr_10 [i_3] [i_3])), (var_4)))));
        var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3])))) <= (var_5)));
        arr_12 [i_3] = ((/* implicit */unsigned char) var_11);
    }
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_14 [i_4]), (((/* implicit */unsigned int) var_8))))) || (((/* implicit */_Bool) (unsigned char)255))));
        var_15 = min((((((/* implicit */_Bool) 560841716U)) ? (275604470U) : (3318916229U))), (max((var_4), (((/* implicit */unsigned int) arr_10 [i_4] [i_4])))));
        var_16 = ((/* implicit */unsigned int) min((arr_1 [i_4] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_6))))));
        arr_15 [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_4])) : (var_1))), (((((/* implicit */_Bool) 8949165251312978011ULL)) ? (((/* implicit */int) arr_6 [i_4] [i_4] [9U])) : (((/* implicit */int) arr_6 [(unsigned char)13] [i_4] [i_4]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5 + 3])) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) var_9))))) ? (4294967266U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_21 [i_5 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 23; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) arr_26 [(unsigned char)7] [i_8] [(unsigned char)7] [i_8]);
                                arr_32 [i_5 - 2] [i_6] [i_6] [i_8 + 2] [i_5] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (var_11)))), (((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */unsigned long long int) arr_25 [i_5] [i_5] [i_5] [i_5] [i_9] [i_5])) : (0ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_23 [i_5] [i_5] [i_5 - 1] [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 + 1])))))) - (var_1)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        var_20 = ((/* implicit */int) var_7);
        arr_36 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_10] [i_10])) ? (arr_1 [i_10] [i_10]) : (arr_1 [i_10] [i_10])));
        /* LoopSeq 4 */
        for (unsigned int i_11 = 3; i_11 < 10; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        arr_45 [i_10] [i_11] [i_10] [i_10] = arr_4 [i_10] [i_11] [i_11];
                        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11 - 2] [i_11 + 2]))) & (arr_14 [i_10]));
                        var_22 = ((/* implicit */int) ((arr_4 [i_12] [i_11] [i_10]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_13])))));
                        /* LoopSeq 3 */
                        for (int i_14 = 3; i_14 < 10; i_14 += 3) 
                        {
                            arr_50 [i_10] [i_10] [i_10] [4ULL] [i_10] = ((/* implicit */int) var_4);
                            var_23 = ((((/* implicit */_Bool) var_8)) ? (arr_47 [i_10] [i_11 - 3] [i_10]) : (arr_47 [i_10] [i_13] [i_10]));
                            var_24 = ((/* implicit */unsigned int) arr_27 [4U] [i_14 + 2] [i_14] [i_14 - 1] [i_14]);
                            arr_51 [i_10] [i_10] [i_11] [(unsigned char)3] [i_10] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 16230893404921096984ULL))))) == (((/* implicit */int) arr_18 [i_14 + 1] [1ULL]))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
                        {
                            var_25 = ((((/* implicit */_Bool) var_7)) ? (arr_35 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11] [i_11 - 1] [i_11 - 3]))));
                            arr_54 [i_10] [i_10] [i_13] = ((/* implicit */unsigned int) arr_26 [i_10] [i_13] [i_10] [i_13]);
                            arr_55 [i_10] [i_10] [i_12] [i_12] [i_13] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [24U] [5U] [5U] [i_13] [i_15])) ? (var_11) : (((/* implicit */unsigned int) arr_46 [i_10] [i_10] [i_12] [i_12] [i_12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_40 [i_10] [i_11] [i_11 - 2])));
                        }
                        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) arr_10 [i_11 - 1] [i_11 - 1]);
                            var_27 = ((/* implicit */unsigned int) ((arr_3 [i_11 + 1] [i_11 + 1] [i_12]) | (arr_3 [i_11 + 2] [i_11 - 3] [i_12])));
                        }
                    }
                } 
            } 
            arr_58 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_10] [i_11 - 1] [i_10] [i_11 - 2] [11U])) ? (arr_52 [i_10] [i_11 - 1] [i_10] [i_11] [i_11 - 1]) : (arr_28 [i_11] [i_11 - 1] [i_11] [i_11 - 2] [i_10])));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) == (991267539U)));
        }
        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            arr_62 [i_17] [i_10] = ((/* implicit */unsigned char) ((arr_33 [i_10]) < (13545355851276649337ULL)));
            var_29 = (unsigned char)241;
        }
        for (int i_18 = 1; i_18 < 9; i_18 += 2) 
        {
            var_30 = ((/* implicit */int) max((var_30), (var_8)));
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                for (unsigned int i_20 = 0; i_20 < 12; i_20 += 4) 
                {
                    {
                        var_31 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_20] [i_20] [i_20] [i_20] [i_10])) ? (arr_46 [i_19] [i_18 + 2] [i_19] [i_20] [i_19]) : (arr_46 [i_19] [i_19] [i_19] [i_18] [i_19])));
                        var_32 = ((/* implicit */unsigned int) var_7);
                        arr_71 [i_10] [i_19] [i_10] [i_10] = ((/* implicit */int) ((var_3) != (((((/* implicit */_Bool) 16230893404921096984ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_19 [i_10] [i_20] [i_10])))));
                    }
                } 
            } 
        }
        for (unsigned int i_21 = 0; i_21 < 12; i_21 += 4) 
        {
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) 14224733880782058328ULL))));
            arr_74 [i_10] = ((/* implicit */unsigned char) arr_30 [i_10] [i_10] [i_10] [i_10] [i_21]);
            /* LoopSeq 2 */
            for (unsigned int i_22 = 2; i_22 < 11; i_22 += 1) 
            {
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (arr_22 [i_22 + 1] [i_22 + 1] [i_22 + 1]) : (arr_22 [i_22 - 1] [i_22 + 1] [i_22 + 1])));
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 12; i_23 += 1) 
                {
                    for (int i_24 = 0; i_24 < 12; i_24 += 1) 
                    {
                        {
                            arr_85 [i_10] [i_21] [i_22 - 1] [i_23] [i_10] = ((/* implicit */unsigned int) ((4227858432U) < (991267539U)));
                            arr_86 [i_24] [i_10] [i_10] [i_10] [i_10] = arr_61 [i_22 - 1] [i_21] [i_22];
                            var_35 *= ((/* implicit */unsigned int) (unsigned char)15);
                            var_36 = var_3;
                            arr_87 [i_21] &= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_14 [i_10])) : (var_5)));
                        }
                    } 
                } 
                var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_10] [i_21] [i_22 - 2])) ? (arr_22 [i_10] [i_21] [i_22 - 1]) : (arr_31 [i_10] [i_21] [i_22 + 1] [i_21] [i_22 - 1] [i_10] [i_22])));
            }
            for (unsigned char i_25 = 1; i_25 < 10; i_25 += 2) 
            {
                arr_90 [i_10] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (746197333U)))) : (arr_37 [i_25 + 1] [i_25 - 1] [i_25 + 2])));
                arr_91 [i_10] [i_21] [i_10] [i_10] = ((/* implicit */unsigned int) arr_65 [(unsigned char)10] [i_21] [i_10]);
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 21; i_26 += 1) 
    {
        var_38 = ((/* implicit */unsigned int) arr_27 [i_26] [i_26] [i_26] [i_26] [i_26]);
        arr_94 [i_26] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_4)) ? (4037234948U) : (((/* implicit */unsigned int) 14353210))))));
        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_1))));
        var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3416826795U))));
        var_41 = ((/* implicit */unsigned int) ((var_10) * (((/* implicit */unsigned long long int) arr_20 [i_26] [i_26] [i_26]))));
    }
}
