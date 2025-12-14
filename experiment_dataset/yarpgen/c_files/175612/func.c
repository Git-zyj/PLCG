/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175612
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
    var_10 = var_1;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            var_11 = arr_4 [i_0];
            var_12 = max((min((arr_5 [i_1 - 1] [i_1 + 3] [i_1]), (arr_5 [i_1 - 1] [i_1 + 3] [i_1]))), ((+(arr_5 [i_1 + 4] [i_1 + 4] [i_1 - 1]))));
            var_13 ^= ((unsigned int) min((arr_2 [i_1 - 3]), (arr_2 [i_1 + 1])));
            var_14 = 1650517418U;
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                var_15 = 442236858U;
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4279631981U)))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_17 = min((((unsigned int) arr_1 [i_2 + 1])), (min((arr_1 [i_2 - 1]), (arr_1 [i_2 + 2]))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (arr_11 [i_1 - 3] [i_2] [i_3])));
                            var_19 = ((unsigned int) max((0U), (1U)));
                            var_20 *= (+(arr_13 [i_0] [i_4] [i_3 - 2] [i_2 + 2]));
                        }
                    } 
                } 
                arr_14 [i_2] [i_2] = min((((((/* implicit */_Bool) arr_7 [i_2] [i_1 - 2] [i_1 - 1])) ? (774095907U) : (arr_7 [i_2] [13U] [i_2 - 1]))), (arr_7 [i_2] [i_2 + 1] [2U]));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 3; i_5 < 13; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((unsigned int) arr_10 [i_2 - 1] [i_5 + 1] [i_1 + 4] [i_5 + 1]))));
                    arr_17 [i_2] [i_1] [i_1] [i_2 + 1] = arr_7 [i_2] [i_2] [i_5];
                }
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (arr_5 [i_0] [i_1] [0U])));
                    arr_20 [i_2] = max((min((arr_7 [i_2] [i_1 + 3] [i_2 + 2]), (arr_7 [i_2] [i_1 - 1] [i_2]))), (1650517418U));
                    arr_21 [i_0] [7U] [i_2] [9U] = min((max((arr_13 [i_6] [i_2] [i_2] [i_0]), (arr_13 [i_6] [i_2] [i_2] [i_0]))), (((unsigned int) arr_13 [i_0] [i_2] [i_0] [i_0])));
                    arr_22 [i_0] [4U] [i_2] [i_6] [i_1] [i_1 - 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [i_1 - 2]), (((unsigned int) arr_6 [i_2])))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    var_23 = (~(arr_10 [i_0] [i_0] [i_0] [i_7 - 2]));
                    arr_25 [i_7] [i_2] [i_1 - 3] [i_7] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [6U] [i_1 + 1]))));
                    var_24 = ((unsigned int) arr_7 [i_2] [i_1 - 3] [i_2]);
                    var_25 += arr_7 [i_7] [i_1 - 2] [i_2 - 1];
                }
                /* vectorizable */
                for (unsigned int i_8 = 1; i_8 < 12; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 2; i_9 < 12; i_9 += 2) 
                    {
                        var_26 = ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_8 + 1] [i_9 + 2] [i_1 + 2])) ? (arr_29 [i_1] [i_1 + 3] [i_2] [i_9 - 2]) : (0U));
                        arr_32 [7U] [i_1 + 3] [i_1 + 1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_8 + 2] [i_8] [i_2] [i_9])) && (((/* implicit */_Bool) arr_27 [i_2 + 2] [i_8 - 1] [i_9 - 2] [i_9 + 2]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_27 ^= (+(arr_13 [i_8 + 1] [i_10] [i_10] [i_1]));
                        var_28 = ((/* implicit */unsigned int) ((arr_2 [i_1 - 2]) == (arr_2 [i_1 - 3])));
                    }
                    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 4) 
                    {
                        var_29 -= (-(arr_13 [i_8 + 2] [i_0] [i_0] [i_1 - 2]));
                        arr_39 [i_0] [i_1] [i_2 + 2] [i_8 + 2] [i_2] [i_2] = arr_9 [i_0] [i_1] [i_2 - 1] [i_2] [i_8] [i_11 + 1];
                    }
                    var_30 -= ((unsigned int) arr_38 [4U] [1U] [4U] [i_1] [i_1] [i_1] [i_1 + 4]);
                }
            }
        }
        for (unsigned int i_12 = 2; i_12 < 13; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                for (unsigned int i_14 = 1; i_14 < 13; i_14 += 2) 
                {
                    {
                        arr_46 [i_13] [i_13] [i_13] [i_14] [i_13] = min((3317530957U), (442236868U));
                        var_31 = (-(min((arr_42 [i_12 - 1] [i_14 - 1]), (arr_38 [i_12 + 1] [i_13] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14]))));
                    }
                } 
            } 
            var_32 -= min((arr_36 [i_0]), (arr_19 [12U] [i_0] [12U] [i_0] [i_12]));
            var_33 = (-(max((3852730418U), (3941401307U))));
        }
        for (unsigned int i_15 = 2; i_15 < 10; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 2; i_16 < 13; i_16 += 2) 
            {
                for (unsigned int i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_18 = 4; i_18 < 13; i_18 += 2) 
                        {
                            arr_56 [i_15] [i_15] [4U] [i_15] [i_15] [i_15] [i_15 + 2] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3941401285U))))), (min((arr_19 [i_0] [8U] [i_18 - 4] [i_15] [i_18]), (arr_19 [i_17] [i_18] [i_18 - 2] [i_17] [i_18 - 3]))));
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((min((arr_55 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_15 [12U] [i_15] [i_0] [i_15 + 1] [i_15] [i_0]))) * (arr_52 [i_0] [8U] [i_0])))));
                            var_35 = min((arr_4 [i_15 + 1]), (arr_35 [i_18] [i_17] [i_16] [i_0] [i_0] [i_0] [i_0]));
                        }
                        /* vectorizable */
                        for (unsigned int i_19 = 4; i_19 < 11; i_19 += 3) 
                        {
                            arr_60 [i_0] [i_15] [i_16 - 1] [i_17] [i_0] = arr_31 [i_16 - 2] [i_0] [i_16 + 1] [i_16] [i_15] [i_0] [i_15 - 1];
                            arr_61 [i_0] [i_15] [i_16] [i_0] = ((((/* implicit */_Bool) arr_30 [i_16 + 1] [i_16 - 2] [i_15 - 1] [i_15] [i_15])) ? (arr_30 [i_15] [i_16 - 1] [i_15 + 4] [i_15] [i_0]) : (arr_59 [i_15 + 4] [i_15] [i_16 - 1] [i_16] [4U]));
                            var_36 = ((/* implicit */unsigned int) ((arr_24 [i_15] [i_15 + 2] [6U] [i_15] [2U] [3U]) == (arr_5 [i_15 - 1] [i_15 - 1] [i_15])));
                            var_37 = (+(((unsigned int) arr_30 [11U] [i_15] [i_16 + 1] [i_17] [i_0])));
                        }
                        for (unsigned int i_20 = 0; i_20 < 14; i_20 += 3) 
                        {
                            arr_64 [i_0] [i_15 + 2] [1U] [i_17] [5U] = ((unsigned int) 4279631975U);
                            var_38 += ((arr_34 [i_16] [i_16] [i_16 - 1] [i_15 + 2] [i_16]) + (arr_13 [i_16] [i_17] [i_20] [i_20]));
                        }
                        var_39 = ((/* implicit */unsigned int) ((((unsigned int) 3085252639U)) <= (((unsigned int) ((unsigned int) arr_12 [6U] [i_15] [i_16] [i_17])))));
                    }
                } 
            } 
            var_40 = ((((((/* implicit */_Bool) arr_53 [i_15 + 2] [1U] [i_15] [i_15 - 1] [i_15 + 3] [i_15 + 1])) ? (arr_53 [i_15 + 4] [i_15] [8U] [i_15] [i_15 + 2] [i_15 + 1]) : (arr_53 [i_15 - 2] [i_15] [i_15 - 1] [i_15] [i_15 + 4] [i_15 + 2]))) >> ((((-(((/* implicit */int) ((arr_9 [i_15 + 3] [i_15] [10U] [i_0] [i_0] [i_0]) != (arr_11 [i_15] [i_15] [i_15])))))) + (5))));
        }
        arr_65 [i_0] = arr_8 [i_0] [i_0] [i_0] [i_0];
    }
    for (unsigned int i_21 = 0; i_21 < 14; i_21 += 4) /* same iter space */
    {
        arr_68 [i_21] = arr_34 [i_21] [i_21] [i_21] [8U] [i_21];
        var_41 = min((((unsigned int) ((arr_49 [i_21] [i_21] [i_21]) < (arr_44 [i_21] [i_21] [7U] [7U] [i_21])))), ((~(7U))));
    }
    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) 
    {
        var_42 += max((arr_69 [i_22]), (min(((-(arr_70 [2U] [i_22]))), (arr_70 [i_22] [9U]))));
        /* LoopSeq 2 */
        for (unsigned int i_23 = 0; i_23 < 22; i_23 += 3) 
        {
            var_43 ^= max((arr_72 [i_23]), (min((arr_70 [i_22] [i_23]), (arr_70 [i_23] [i_22]))));
            /* LoopNest 2 */
            for (unsigned int i_24 = 2; i_24 < 20; i_24 += 2) 
            {
                for (unsigned int i_25 = 0; i_25 < 22; i_25 += 2) 
                {
                    {
                        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(1209714643U))) & (((((/* implicit */_Bool) 14U)) ? (arr_71 [i_24] [i_24]) : (4294967280U)))))) || (((/* implicit */_Bool) (-(((arr_74 [i_22] [i_23]) * (arr_71 [14U] [i_24])))))))))));
                        var_45 = ((max((arr_69 [i_24 - 1]), (arr_69 [i_24 + 1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((arr_69 [i_24 - 1]) != (arr_69 [i_24 - 2]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_26 = 0; i_26 < 22; i_26 += 4) 
            {
                var_46 = ((/* implicit */unsigned int) min((var_46), (max((353565989U), (max((arr_78 [i_26] [8U]), (((unsigned int) arr_75 [16U] [i_23] [i_22] [16U]))))))));
                var_47 = min((min((arr_71 [i_22] [i_23]), (arr_76 [i_22] [i_23] [4U] [i_26]))), (((/* implicit */unsigned int) ((arr_76 [i_22] [i_22] [i_26] [i_26]) == (arr_76 [i_26] [i_26] [i_23] [i_22])))));
            }
            var_48 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_73 [i_22] [i_23] [i_22] [i_23]))))), (((52008613U) << (((((arr_69 [i_22]) & (arr_76 [i_22] [i_22] [i_23] [i_23]))) - (2332327912U))))));
        }
        /* vectorizable */
        for (unsigned int i_27 = 1; i_27 < 18; i_27 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_28 = 1; i_28 < 21; i_28 += 4) 
            {
                for (unsigned int i_29 = 4; i_29 < 19; i_29 += 2) 
                {
                    for (unsigned int i_30 = 0; i_30 < 22; i_30 += 2) 
                    {
                        {
                            var_49 = ((((/* implicit */_Bool) 2473184143U)) ? (0U) : (1209714656U));
                            var_50 = (-(arr_69 [i_22]));
                            arr_89 [i_27] [i_29] [i_30] [i_30] [7U] [i_30] = (+(arr_82 [i_22] [i_27 + 4] [i_28 - 1] [i_29 - 1]));
                        }
                    } 
                } 
            } 
            arr_90 [i_22] [i_27] [i_27] = 1378478360U;
            var_51 += (((+(arr_70 [i_22] [i_22]))) | (arr_74 [i_27 + 1] [i_27 + 3]));
        }
    }
    var_52 = var_8;
}
