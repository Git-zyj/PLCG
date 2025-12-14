/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177834
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
    var_16 = var_1;
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_17 &= (+(((((/* implicit */_Bool) (-(-139536993)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [18]) : ((-2147483647 - 1)))) : (max((2084141767), (arr_2 [i_0]))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_2 [i_0 - 2]) : (arr_0 [i_0] [i_0])))) ? (((int) arr_0 [i_0 - 2] [i_0 - 2])) : (var_10));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            arr_11 [i_1] [i_1] = arr_1 [i_1];
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) 1049852623)) ? (((int) 1585907942)) : (1049852630)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_19 -= ((((/* implicit */_Bool) arr_18 [i_5 + 2] [i_5 + 1] [i_4] [i_5] [i_5] [i_5 - 1] [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) 1489025727)) && (((/* implicit */_Bool) 1934085248))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_2] [i_3] [i_3] [i_2] [1]))))));
                            var_20 &= arr_15 [i_1] [0] [0] [i_4] [i_2];
                        }
                    } 
                } 
                var_21 ^= (~(((int) arr_13 [5] [i_2] [i_2] [i_2])));
            }
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
        {
            var_22 = ((((/* implicit */_Bool) -801840274)) ? (arr_10 [i_1] [i_6]) : (var_11));
            var_23 = ((int) var_6);
            /* LoopSeq 2 */
            for (int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
            {
                var_24 = (-(-1392322254));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_25 = ((int) (+(1392322254)));
                            var_26 = ((((/* implicit */_Bool) ((arr_28 [i_1] [i_7] [i_1] [i_9]) / (609239523)))) ? (((/* implicit */int) ((-1049852635) < (var_1)))) : (((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_7] [i_1])) ? (-2003828796) : (var_4))));
                            var_27 = ((/* implicit */int) max((var_27), ((-(arr_5 [i_1] [i_8])))));
                            var_28 = ((/* implicit */int) max((var_28), (arr_18 [i_1] [i_1] [i_6] [i_1] [i_7] [i_8] [i_9])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (int i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) -1049852620))));
                            arr_36 [i_1] [i_6] [i_6] [i_6] [i_11] = ((var_6) << (((arr_23 [i_7 - 1] [i_11 + 1] [i_7 - 1]) - (1272980344))));
                            var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) 1489025727)) || (((/* implicit */_Bool) 2136560476))));
                        }
                    } 
                } 
            }
            for (int i_12 = 2; i_12 < 9; i_12 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_13 = 1; i_13 < 9; i_13 += 2) 
                {
                    var_31 = ((((/* implicit */_Bool) arr_41 [i_13] [i_12] [i_12 + 1] [i_12 + 2])) ? (arr_41 [i_13] [i_6] [i_12 - 2] [i_13 - 1]) : (arr_41 [i_13] [i_6] [i_12 - 2] [i_6]));
                    var_32 = ((387006146) | (arr_6 [i_12 + 2]));
                    var_33 = arr_38 [i_1] [i_1];
                    var_34 = -8476822;
                }
                for (int i_14 = 1; i_14 < 8; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 1; i_15 < 8; i_15 += 3) 
                    {
                        var_35 = ((arr_22 [i_14 + 3] [i_14 + 3] [i_15 + 1]) >> (((var_6) - (1134316567))));
                        var_36 &= ((((/* implicit */int) ((-1420022769) < (-801840279)))) | (((((/* implicit */_Bool) 416521664)) ? (arr_37 [i_1] [i_6]) : (arr_43 [i_1] [i_1] [i_6] [i_12] [i_6] [i_15]))));
                    }
                    var_37 = (i_14 % 2 == 0) ? (((((((/* implicit */_Bool) var_15)) ? (arr_30 [i_1] [i_6] [i_12] [i_14] [i_14]) : (arr_15 [i_1] [i_6] [i_6] [i_6] [i_6]))) + (((((/* implicit */_Bool) -1610670956)) ? (-1489025727) : (-1049852612))))) : (((((((/* implicit */_Bool) var_15)) ? (arr_30 [i_1] [i_6] [i_12] [i_14] [i_14]) : (arr_15 [i_1] [i_6] [i_6] [i_6] [i_6]))) - (((((/* implicit */_Bool) -1610670956)) ? (-1489025727) : (-1049852612)))));
                }
                var_38 = ((arr_15 [i_12] [i_12] [i_12 - 2] [i_12] [i_12]) % (-67042168));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        {
                            var_39 = (~((~(arr_6 [i_1]))));
                            var_40 = (-(arr_28 [i_1] [i_12 + 1] [i_12 - 2] [i_1]));
                            arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_17] = (-2147483647 - 1);
                            var_41 = ((((2003828804) - (411041253))) >> (((-8476837) + (8476858))));
                        }
                    } 
                } 
                arr_54 [i_1] [i_6] [i_1] [i_1] = ((int) ((0) + (23)));
            }
            var_42 = ((arr_39 [i_1] [i_1] [6] [i_6]) >> (((arr_25 [i_1] [i_1] [i_6]) - (443127922))));
            var_43 = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_14 [i_1] [i_6])) || (((/* implicit */_Bool) arr_45 [i_1] [i_1] [i_1] [i_1] [i_6]))))));
        }
        for (int i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                for (int i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    {
                        arr_63 [i_1] [i_20] [i_1] [i_1] [i_1] [i_1] &= ((int) var_0);
                        var_44 = ((/* implicit */int) max((var_44), ((~(arr_43 [i_1] [i_18] [i_18] [i_20] [i_18] [i_1])))));
                    }
                } 
            } 
            var_45 = ((/* implicit */int) max((var_45), (((int) arr_22 [i_18] [i_1] [i_1]))));
        }
        var_46 = ((int) (~(-1395148619)));
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 11; i_21 += 1) 
        {
            for (int i_22 = 0; i_22 < 11; i_22 += 4) 
            {
                for (int i_23 = 0; i_23 < 11; i_23 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_24 = 0; i_24 < 11; i_24 += 4) 
                        {
                            arr_74 [i_21] [i_21] [i_22] [i_23] [i_24] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_24] [i_24] [9] [i_22] [i_1] [i_1]))));
                            var_47 = ((/* implicit */int) max((var_47), (((((((/* implicit */_Bool) -801840268)) && (((/* implicit */_Bool) var_9)))) ? ((+(arr_14 [i_1] [i_23]))) : (arr_52 [i_1] [i_21] [i_24] [i_22])))));
                            var_48 = ((int) arr_51 [i_1] [i_22]);
                        }
                        /* LoopSeq 1 */
                        for (int i_25 = 2; i_25 < 10; i_25 += 3) 
                        {
                            arr_78 [i_25] = ((int) arr_17 [i_1] [i_25 + 1] [i_22] [i_22] [i_25]);
                            var_49 = ((/* implicit */int) max((var_49), (arr_70 [i_1] [i_1] [i_25 + 1])));
                            var_50 = ((((/* implicit */_Bool) (-(arr_21 [i_22] [i_22] [i_25])))) ? (arr_10 [i_25 + 1] [i_25]) : (((int) -2035982110)));
                            var_51 = ((/* implicit */int) max((var_51), (arr_66 [i_1] [i_21] [i_22] [i_23])));
                        }
                        var_52 = ((int) arr_25 [i_1] [i_21] [i_23]);
                        var_53 = ((/* implicit */int) min((var_53), ((~(arr_45 [i_22] [i_23] [i_22] [i_1] [i_22])))));
                        var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) (((-2147483647 - 1)) > (arr_35 [i_1] [i_21] [i_22]))))));
                    }
                } 
            } 
        } 
    }
}
