/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104629
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) var_11)) : (max((max((var_13), (var_13))), (var_12)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = (~(arr_1 [i_0]));
        var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) (+((+(arr_1 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [11U] = max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_3 [21])))), (((/* implicit */int) var_9)));
        var_17 = max((((arr_2 [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [(_Bool)1])))), (((/* implicit */int) (!(arr_2 [i_1] [i_1])))));
        /* LoopSeq 4 */
        for (int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            arr_7 [i_2] [i_2] [i_2] = ((/* implicit */int) (((-(((/* implicit */int) max((arr_3 [i_2]), (arr_3 [i_1])))))) != ((-(((/* implicit */int) max((var_9), (arr_6 [i_1] [i_2]))))))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((var_13), (((/* implicit */unsigned int) arr_3 [i_1])))), (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_5)))))))) ? (((((((/* implicit */_Bool) 134217727U)) ? (1874570625U) : (134217726U))) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_1]), (arr_5 [i_2]))))))) : (((/* implicit */unsigned int) (~(((arr_2 [i_1] [i_2]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))))))));
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned int) arr_6 [i_1] [i_2]);
                arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) max((var_2), ((((!(arr_2 [i_1] [i_1]))) ? (min((((/* implicit */int) arr_5 [i_2])), (var_6))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2 - 2] [i_3]))))))));
            }
            for (int i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) ((max((arr_8 [i_1] [i_1] [i_4] [i_1]), (((/* implicit */unsigned int) arr_9 [i_2 - 3] [i_2 - 3] [i_4] [i_4])))) <= (max((((/* implicit */unsigned int) ((arr_2 [6U] [i_1]) ? (arr_13 [i_1] [i_2] [i_2]) : (arr_13 [i_1] [i_1] [i_2])))), (((((/* implicit */_Bool) var_10)) ? (2724065512U) : (134217727U)))))));
                var_21 = ((/* implicit */int) max((var_21), (arr_15 [i_2] [i_2] [i_4 - 1])));
                var_22 += ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_6 [i_1] [i_4])) : (((/* implicit */int) arr_3 [i_1]))))))));
            }
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                arr_20 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_5 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (arr_8 [i_1] [i_1] [i_1] [i_1]))))));
                arr_21 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [20U]))))) ? ((-(arr_8 [i_1] [i_1] [i_2] [i_2]))) : (min((arr_12 [i_1] [i_2] [i_5 - 1]), (((/* implicit */unsigned int) arr_5 [i_2])))))), (((/* implicit */unsigned int) (+(((arr_3 [i_1]) ? (arr_15 [i_1] [i_2 - 1] [i_5]) : (var_2))))))));
            }
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 4160749568U)) ? (((/* implicit */unsigned int) -1658487791)) : (1874570629U)));
        }
        for (unsigned int i_6 = 4; i_6 < 21; i_6 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_6] [i_6] [i_1]), (arr_12 [i_6] [i_6] [4U])))) ? (((((/* implicit */_Bool) arr_22 [i_6 - 2])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [7U])) : (((/* implicit */int) arr_2 [i_1] [i_1])))) : (arr_13 [i_1] [i_6] [i_6])))) ? (arr_19 [i_6]) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1])))))))));
            var_25 = arr_10 [i_1] [i_1] [i_1];
        }
        for (unsigned int i_7 = 4; i_7 < 20; i_7 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_7]);
            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            arr_28 [i_1] = (-(max((4160749569U), (((((/* implicit */_Bool) arr_12 [i_1] [i_7] [i_1])) ? (((/* implicit */unsigned int) arr_25 [i_7] [i_7])) : (2420396676U))))));
        }
        for (unsigned int i_8 = 4; i_8 < 20; i_8 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) arr_22 [i_1]);
            var_29 = ((/* implicit */int) (-(min((((((/* implicit */_Bool) 2537680689U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (134217727U))), (((/* implicit */unsigned int) (_Bool)1))))));
        }
        var_30 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_12 [(_Bool)1] [12] [(_Bool)1])))) ? (var_8) : (min((((/* implicit */unsigned int) arr_25 [i_1] [5U])), (var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_1] [i_1] [i_1] [i_1]) > (((/* implicit */unsigned int) (-(arr_19 [(_Bool)1])))))))) : (max((((/* implicit */unsigned int) -954671790)), (2292175014U))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_31 = (-((+(1413308370U))));
        var_32 ^= ((/* implicit */_Bool) max(((+(min((((/* implicit */unsigned int) (_Bool)1)), (134217710U))))), (((/* implicit */unsigned int) max(((~(1063229260))), (((((/* implicit */_Bool) arr_23 [i_9] [i_9])) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) arr_31 [0U])))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_10 = 4; i_10 < 9; i_10 += 4) /* same iter space */
        {
            arr_35 [i_9] [i_9] [6] = ((/* implicit */int) arr_12 [i_9] [i_10] [i_10 - 1]);
            arr_36 [4U] [i_10] = (+(arr_14 [i_9] [17] [i_9]));
        }
        for (int i_11 = 4; i_11 < 9; i_11 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned int) (-(-526907649)));
            /* LoopSeq 3 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                var_34 = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_17 [i_11] [i_11] [i_12]))))));
                arr_44 [i_12] [i_11 - 2] [i_9] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (min((((((/* implicit */_Bool) arr_25 [(_Bool)1] [i_9])) ? (arr_1 [i_9]) : (((/* implicit */int) arr_31 [i_12])))), (((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_9]))))));
                arr_45 [i_9] [i_9] [i_12] [i_11] = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_6 [i_9] [i_11])))), ((+(arr_19 [i_11])))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_35 = ((/* implicit */int) min((var_35), (max((((arr_2 [i_9] [i_11 + 1]) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_11 - 2])) : (((/* implicit */int) arr_2 [10] [i_11 + 1])))), (((arr_41 [i_11 - 1] [i_11 - 4] [i_11 - 2] [i_11 - 3]) ? (arr_47 [i_11 - 4] [i_11 - 3] [i_11 - 1] [i_11 - 4]) : (((/* implicit */int) arr_41 [i_11 - 4] [i_11 + 1] [i_11 - 2] [i_11 + 1]))))))));
                var_36 = ((/* implicit */int) max((((arr_16 [i_13] [i_9] [i_9] [i_9]) ? (min((((/* implicit */unsigned int) arr_10 [(_Bool)1] [i_11 - 1] [i_13])), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9]))))), ((-(1874570625U)))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_37 = ((/* implicit */_Bool) max((-872165811), (-11)));
                var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) 434954915)), (1498251935U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_14] [i_9] [i_9]))))))))));
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_41 [(_Bool)0] [i_11] [i_11 - 1] [i_11 - 1])) & (((/* implicit */int) arr_41 [i_11] [i_11] [i_11 - 4] [i_11 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1275487237)))))) : ((-(arr_30 [i_14] [i_11 - 3])))));
                /* LoopSeq 3 */
                for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    arr_57 [i_9] [i_14] [i_11] [i_14] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_14] [i_9]))))) ? (((((/* implicit */_Bool) arr_32 [i_9] [4])) ? (arr_32 [i_9] [1]) : (arr_32 [i_9] [i_9]))) : (var_13)))) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_41 [i_9] [i_11] [i_14] [i_15])), (arr_54 [i_14] [i_14] [i_14] [i_14] [i_9] [5])))) ? (((arr_52 [3] [i_14] [i_9] [i_9]) ? (((/* implicit */unsigned int) arr_1 [(_Bool)1])) : (var_7))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_15]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_50 [i_9] [i_11] [i_11]) ? (((/* implicit */int) arr_16 [i_15] [i_11] [i_11] [i_15])) : (((/* implicit */int) arr_48 [i_9] [i_9] [i_9]))))) ? ((-(arr_54 [i_14] [i_14] [i_14] [(_Bool)1] [i_14] [i_14]))) : (((/* implicit */int) arr_5 [i_14])))))));
                    arr_58 [3] [i_11] [i_14] [i_14] = ((/* implicit */unsigned int) arr_6 [i_9] [i_14]);
                }
                for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3996171018U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2796715360U)));
                        var_41 = max((((((/* implicit */_Bool) -1275487220)) ? (1742915481U) : (2537680689U))), (((((/* implicit */_Bool) arr_39 [i_11 + 1] [i_11 - 4])) ? (((/* implicit */unsigned int) arr_39 [i_11 + 1] [i_11 - 4])) : (arr_30 [i_11 + 1] [i_11 - 4]))));
                    }
                    var_42 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 1757286604U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_37 [4] [i_14] [i_9])) ? (((/* implicit */unsigned int) -1275487220)) : (arr_53 [i_14] [i_11])))))));
                    var_43 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) var_9))))))), (var_1)));
                    var_44 = ((/* implicit */int) var_8);
                }
                /* vectorizable */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_45 = ((/* implicit */_Bool) var_2);
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_66 [i_14] [(_Bool)0] [i_14])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_9] [i_14] [i_9] [(_Bool)1])) ? (arr_65 [i_14] [i_11] [i_14] [i_14] [i_18] [i_19]) : (var_11)))) : ((+(1565196604U)))));
                        var_47 = arr_6 [i_14] [i_14];
                        var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (arr_55 [i_9] [i_11] [i_14] [1] [1])));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1757286607U)))))));
                        var_50 |= (+(((/* implicit */int) (!(((/* implicit */_Bool) -963439632))))));
                        var_51 ^= ((((/* implicit */_Bool) arr_43 [i_11 + 1] [i_11 - 4] [i_11 + 1] [6])) ? (arr_38 [i_11]) : (arr_22 [i_11 - 2]));
                        var_52 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_9] [21U] [21U])) ? (arr_18 [i_14] [i_18] [i_14] [i_14]) : (var_12)))));
                    }
                    var_53 = (-((+(((/* implicit */int) arr_48 [4U] [i_11] [i_9])))));
                }
                /* LoopNest 2 */
                for (unsigned int i_21 = 2; i_21 < 7; i_21 += 4) 
                {
                    for (int i_22 = 0; i_22 < 10; i_22 += 4) 
                    {
                        {
                            var_54 = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_65 [i_14] [i_11] [i_14] [i_21] [i_11] [i_22]), (((/* implicit */int) arr_60 [3] [i_14] [i_14] [i_21] [i_22]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) != (var_7))))) : (((((/* implicit */unsigned int) arr_10 [i_9] [i_11 - 4] [i_21])) / (arr_12 [i_22] [i_14] [i_11]))))) / (var_3)));
                            var_55 ^= ((/* implicit */_Bool) max((max((1757286605U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) max((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))), ((+(arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))));
                            var_56 = min((min(((+(arr_73 [i_9] [i_11] [i_14] [i_21] [i_14]))), (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [5U] [5U] [i_14] [i_21]))) : (var_0))))), (((/* implicit */unsigned int) (+((-(1383628635)))))));
                        }
                    } 
                } 
            }
            var_57 = ((/* implicit */unsigned int) max((var_57), (((((/* implicit */_Bool) (+(-1975555548)))) ? ((-(4160749569U))) : ((+(arr_18 [i_11] [i_11 - 2] [i_11 - 4] [i_11 - 1])))))));
        }
        for (int i_23 = 4; i_23 < 9; i_23 += 4) /* same iter space */
        {
            arr_80 [i_9] [i_23] = min((((/* implicit */unsigned int) (-((~(arr_10 [i_9] [i_9] [i_9])))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_9] [i_9] [1U] [i_9]))))) ? (((/* implicit */unsigned int) (-(arr_49 [i_23] [i_23] [i_23 + 1])))) : (arr_53 [i_23] [i_23]))));
            var_58 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(arr_54 [i_23] [i_23] [i_23] [i_23] [2U] [2U])))))) ? (min((((((/* implicit */_Bool) arr_54 [i_23] [i_23] [2U] [i_9] [i_9] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [13] [i_23 + 1] [i_23 - 1]))) : (arr_63 [i_23] [i_23] [2U] [i_23]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_9] [i_23]))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 691666455)) && ((_Bool)0)))), (min((((/* implicit */unsigned int) arr_76 [i_9] [i_9] [(_Bool)1] [i_23] [i_23 - 4] [i_23] [i_23 - 2])), (var_1)))))));
            var_59 = ((((/* implicit */_Bool) max((((var_2) / (((/* implicit */int) arr_3 [i_9])))), (((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [(_Bool)1]))))) ? (((((/* implicit */_Bool) min((arr_23 [i_9] [i_23 - 1]), (((/* implicit */unsigned int) arr_77 [i_23] [i_9] [i_9] [(_Bool)0] [(_Bool)1]))))) ? (((/* implicit */int) arr_24 [i_23 - 2])) : (((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_23])) ? (((/* implicit */int) arr_5 [i_23])) : (var_11))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9]))) : (var_0))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_77 [i_23] [i_23] [i_23] [i_9] [8])))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                var_60 = (-(arr_70 [i_23 - 3] [i_23] [i_23] [i_23]));
                var_61 = ((/* implicit */_Bool) arr_51 [i_23] [i_9] [i_23]);
                var_62 += (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_24]))))));
            }
            /* vectorizable */
            for (unsigned int i_25 = 3; i_25 < 9; i_25 += 4) 
            {
                var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_25] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_25] [i_25] [i_25 - 2] [i_25] [i_25]))) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 231487713U))))) : (((/* implicit */int) (!(arr_60 [i_9] [i_25] [i_9] [i_25 - 3] [i_25 - 3]))))));
                var_64 = (-(298796278U));
            }
        }
        var_65 = (+(max((1757286613U), (4142758895U))));
    }
}
