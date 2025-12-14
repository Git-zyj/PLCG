/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177076
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_6) : (arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 3] [i_4 + 1] [i_3 + 3]))));
                        var_21 = (-(var_14));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) (((-(arr_3 [i_5]))) <= (((((/* implicit */_Bool) var_16)) ? (arr_6 [i_5] [i_6] [i_2]) : (var_14)))));
                        var_23 ^= (((!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_2] [i_2] [i_5] [0U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (arr_15 [i_6] [i_5] [i_5] [7U] [i_1] [i_1]));
                        arr_21 [i_6] [i_5] [i_2] [i_1] = ((((/* implicit */_Bool) 465506348U)) ? (((((/* implicit */_Bool) 3829460970U)) ? (1082084330U) : (4004939034U))) : (654140780U));
                    }
                } 
            } 
            var_24 = ((3178089017U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [10U] [i_1] [12U])))))));
            var_25 = (((+(2935440687U))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1]))))));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [11U])) && (((/* implicit */_Bool) arr_7 [i_1] [i_2])))))));
        }
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            arr_26 [i_1] = (~(arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
            var_27 |= 3829460957U;
            /* LoopSeq 4 */
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                arr_31 [7U] [i_7] [i_8] = (+(arr_0 [i_8]));
                var_28 = ((/* implicit */unsigned int) min((var_28), ((-((+(0U)))))));
            }
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        {
                            var_29 = (~(arr_19 [i_1] [i_7] [i_9] [i_10] [i_11]));
                            arr_39 [i_9] = (-(arr_33 [i_1]));
                        }
                    } 
                } 
                arr_40 [i_9] [i_7] = (+((+(arr_19 [i_9] [i_7] [i_7] [i_7] [i_1]))));
            }
            for (unsigned int i_12 = 3; i_12 < 13; i_12 += 4) 
            {
                var_30 = (((-(var_12))) + (arr_37 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [5U]));
                var_31 = var_15;
                var_32 ^= arr_23 [i_1];
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    var_33 |= ((((/* implicit */_Bool) arr_41 [i_12 - 3] [i_13] [i_13] [i_12 - 3])) ? (arr_9 [i_1]) : (arr_34 [i_12 + 2] [i_12 + 3] [i_12] [i_12 + 1]));
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 4; i_14 < 12; i_14 += 1) 
                    {
                        var_34 = (-(4294967295U));
                        var_35 ^= (+(arr_12 [i_12 + 2] [i_12 + 3] [i_12 + 3]));
                    }
                    var_36 = ((((/* implicit */_Bool) arr_47 [i_12] [i_12 + 2] [i_12])) ? (arr_13 [12U] [i_12 + 3] [i_12 - 2] [i_12 + 1]) : (arr_47 [i_12] [i_12 + 3] [i_12]));
                }
            }
            for (unsigned int i_15 = 1; i_15 < 13; i_15 += 1) 
            {
                var_37 = ((/* implicit */unsigned int) min((var_37), (((arr_4 [i_15 + 2]) & (arr_4 [i_15 + 2])))));
                /* LoopSeq 4 */
                for (unsigned int i_16 = 3; i_16 < 12; i_16 += 2) 
                {
                    arr_54 [i_15] = (+(arr_35 [i_16 + 3] [i_15 + 1] [i_16] [i_15 + 1] [i_15 + 3]));
                    var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_9 [i_15]) % (var_6))))));
                    var_39 = ((1749681250U) / (2663709431U));
                }
                for (unsigned int i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    var_40 = ((arr_47 [i_15 + 2] [i_15] [i_15]) | (var_0));
                    var_41 += ((arr_32 [i_15 - 1] [i_15 + 2]) - (arr_32 [i_15 + 1] [i_15 + 1]));
                }
                for (unsigned int i_18 = 0; i_18 < 16; i_18 += 4) 
                {
                    arr_60 [i_15] [i_7] [13U] [i_7] = ((((/* implicit */_Bool) 1478848863U)) ? (arr_29 [12U] [i_15 + 3]) : (4294967282U));
                    arr_61 [i_1] [i_1] [i_15] [i_18] [13U] [i_18] = ((((/* implicit */_Bool) arr_19 [i_15 + 1] [i_7] [i_7] [i_18] [i_1])) ? (arr_14 [i_15 + 1] [i_15] [i_15 + 1] [i_18]) : (arr_6 [i_15 + 1] [12U] [i_18]));
                }
                for (unsigned int i_19 = 0; i_19 < 16; i_19 += 1) 
                {
                    arr_64 [15U] [i_7] [i_15 + 2] [i_15] = ((/* implicit */unsigned int) ((arr_8 [i_15 - 1] [i_15 + 1] [i_15 + 2]) >= (arr_41 [i_15 + 1] [i_15] [i_15] [i_15 + 1])));
                    arr_65 [10U] [i_7] [i_15] [i_19] [i_1] = var_8;
                }
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 16; i_20 += 1) 
                {
                    for (unsigned int i_21 = 0; i_21 < 16; i_21 += 1) 
                    {
                        {
                            var_42 = ((arr_56 [i_15 + 3] [i_1] [8U] [i_7] [i_15 + 3] [i_7]) / (arr_56 [i_15 + 3] [12U] [i_15 + 2] [i_20] [i_21] [8U]));
                            var_43 = ((((/* implicit */_Bool) 2581215965U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_21] [i_21] [0U] [3U] [i_21])) || (((/* implicit */_Bool) arr_37 [i_21] [13U] [i_15] [i_7] [i_1] [13U])))))) : (arr_44 [i_15 - 1] [i_7] [i_15 + 1] [6U] [10U]));
                            var_44 = ((arr_37 [i_21] [i_20] [i_15 + 3] [i_1] [i_7] [i_1]) / (arr_37 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]));
                            arr_70 [i_1] [i_7] [i_15] [i_7] [i_20] [i_15] = arr_19 [i_15 + 2] [i_15 + 2] [i_15 + 2] [11U] [i_15 + 1];
                            arr_71 [i_21] [i_15] [i_15] [i_7] = (-(arr_20 [i_1] [i_7] [i_15 - 1] [i_20] [i_1] [i_20]));
                        }
                    } 
                } 
                arr_72 [i_1] [i_15] [i_15] [i_15] = (-(arr_62 [i_15 + 3] [i_15] [i_15] [i_15] [i_15 + 2]));
            }
        }
        var_45 = (((+(arr_51 [i_1] [i_1] [i_1] [i_1]))) >> (((arr_7 [i_1] [i_1]) - (287629793U))));
        var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
    }
    for (unsigned int i_22 = 0; i_22 < 16; i_22 += 1) /* same iter space */
    {
        var_47 = arr_67 [i_22] [i_22] [3U] [i_22];
        var_48 += ((((/* implicit */_Bool) 465506342U)) ? (max((((((/* implicit */_Bool) 1631257854U)) ? (279504237U) : (1631257865U))), (367190637U))) : (arr_8 [i_22] [i_22] [i_22]));
        var_49 = max((max((12U), ((~(arr_68 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))))), (1125918137U));
        /* LoopNest 3 */
        for (unsigned int i_23 = 0; i_23 < 16; i_23 += 4) 
        {
            for (unsigned int i_24 = 0; i_24 < 16; i_24 += 2) 
            {
                for (unsigned int i_25 = 0; i_25 < 16; i_25 += 4) 
                {
                    {
                        var_50 = arr_12 [i_23] [i_24] [i_25];
                        var_51 = (~(arr_12 [i_25] [i_23] [i_22]));
                        arr_85 [i_22] [i_23] [i_24] [i_22] = ((/* implicit */unsigned int) ((0U) != (1132998256U)));
                        var_52 = (-(((((/* implicit */_Bool) (~(3897642624U)))) ? (((((/* implicit */_Bool) arr_29 [i_23] [i_23])) ? (arr_63 [i_22] [i_24] [i_23] [i_22]) : (arr_46 [0U] [0U]))) : (arr_5 [i_25]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_26 = 0; i_26 < 13; i_26 += 2) 
    {
        for (unsigned int i_27 = 1; i_27 < 11; i_27 += 2) 
        {
            {
                var_53 ^= max(((~(var_12))), (arr_11 [i_26] [i_27]));
                var_54 |= ((((/* implicit */unsigned int) (-(((/* implicit */int) ((var_3) > (arr_15 [i_26] [i_26] [i_26] [i_26] [i_26] [i_27 - 1]))))))) / (max((arr_66 [i_26] [i_26] [i_26] [i_27 + 1] [i_26]), (arr_3 [i_26]))));
            }
        } 
    } 
    var_55 = ((/* implicit */unsigned int) (+(((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) var_11)))))));
    var_56 = var_7;
    /* LoopSeq 1 */
    for (unsigned int i_28 = 0; i_28 < 23; i_28 += 1) 
    {
        arr_96 [i_28] = max((max((arr_94 [i_28] [2U]), (arr_95 [i_28]))), (((/* implicit */unsigned int) ((arr_92 [i_28] [i_28]) == (arr_92 [i_28] [i_28])))));
        var_57 = var_1;
        arr_97 [i_28] = (+((+(max((var_18), (arr_92 [i_28] [i_28]))))));
        var_58 = ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_93 [i_28] [i_28]) >= (arr_94 [i_28] [i_28]))))) * (((arr_92 [3U] [i_28]) % (arr_92 [i_28] [i_28]))));
    }
}
