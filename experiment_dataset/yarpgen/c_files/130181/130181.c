/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_8, (max(((max(var_5, var_1))), var_4))));
    var_11 = ((((max((max(var_3, var_8)), ((var_8 ? var_3 : var_4))))) ? ((max(((var_3 ? var_5 : var_0)), (min(var_0, var_0))))) : var_3));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_12 = ((((max(((var_1 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0]))), var_1))) ? var_2 : (arr_0 [i_0 + 2] [2])));
        var_13 = (min((max(((((arr_0 [i_0 - 2] [i_0 + 2]) ? (arr_1 [20]) : (arr_0 [i_0] [i_0])))), var_9)), (((min((arr_0 [15] [19]), (arr_1 [7])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            var_14 = (arr_5 [i_1] [i_2]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_15 = (arr_4 [i_2 + 4] [16] [i_5 - 4]);
                            arr_13 [i_1] [i_2 + 2] [i_5] [i_4] [i_5 - 1] = var_0;
                        }
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_16 = (var_1 >= var_1);
            arr_16 [i_6] = ((var_1 ? ((var_9 ? (arr_7 [i_1] [i_1] [i_6 + 1]) : var_3)) : (arr_8 [i_1] [i_6 - 1] [3] [14])));
            arr_17 [i_6] = (arr_9 [6]);
            var_17 = (max(var_17, (arr_7 [i_1] [i_1] [i_1])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_23 [i_1] [1] [6] [i_6] [i_8] = arr_10 [i_8] [i_8] [i_7] [i_6 - 1] [i_6] [15];
                        arr_24 [i_6] [1] [i_8] [i_8] = ((-1386612555338940775 ? (arr_10 [i_8] [i_7] [i_7] [i_6 + 1] [11] [i_1]) : (arr_4 [i_6 + 1] [i_7] [i_8])));
                        arr_25 [i_6] [i_6 - 1] [i_6] [i_6 + 1] = (((var_8 || (arr_18 [i_1] [i_7] [0]))));
                    }
                }
            }
        }
        arr_26 [10] = (((((arr_14 [13] [14]) / (arr_9 [i_1]))) >= (arr_3 [i_1])));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_18 = ((min((((arr_22 [i_9] [i_9]) ? (arr_28 [4]) : var_3)), (arr_1 [i_9]))) | ((((max(var_5, (arr_19 [21] [i_9])))) ? ((min(var_2, (arr_10 [7] [i_9] [i_9] [i_9] [i_9] [i_9])))) : (min((arr_1 [i_9]), var_6)))));
        arr_30 [i_9] [i_9] = (max((((((var_8 >> (var_7 - 348184647)))) ? (arr_6 [i_9] [i_9] [i_9]) : (((arr_0 [16] [i_9]) ? var_4 : var_4)))), ((var_6 ? (var_9 >= var_4) : (min((arr_4 [i_9] [i_9] [5]), (arr_3 [1])))))));
        arr_31 [i_9] = (arr_29 [i_9]);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_19 = (min((min(((max((arr_1 [i_12]), (arr_42 [i_9] [i_10] [0] [9])))), (((arr_12 [i_9] [i_13] [i_13] [20] [i_13] [14] [i_13]) ? (arr_39 [i_9] [i_9] [i_9] [i_9]) : var_1)))), var_5));
                                var_20 += (arr_33 [i_9] [i_10] [4]);
                            }
                        }
                    }
                    arr_43 [i_9] [10] = (max((arr_29 [i_9]), (arr_10 [i_9] [i_9] [i_9] [1] [3] [5])));
                    arr_44 [i_9] [i_10] [i_11] = (min((arr_14 [i_9] [i_10]), (min((max((arr_21 [11] [i_10] [i_9] [i_10] [i_10] [i_10]), (arr_11 [17] [5] [i_9] [i_11] [i_11]))), (arr_21 [i_9] [9] [i_9] [13] [i_9] [7])))));
                    arr_45 [1] [i_9] [i_9] [i_9] = (((arr_3 [i_9]) >= (arr_37 [i_9] [i_9] [i_10] [1])));
                }
            }
        }
        var_21 ^= (((((min((arr_5 [i_9] [i_9]), var_4))) ? var_5 : (arr_0 [18] [2]))));
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        var_22 = (min((max(((min((arr_4 [1] [7] [i_14]), (arr_6 [i_14] [i_14] [i_14])))), (arr_8 [i_14] [i_14] [i_14] [i_14]))), ((((var_6 + (arr_18 [9] [i_14] [0])))))));
        arr_50 [i_14] = (((arr_12 [i_14] [10] [i_14] [20] [i_14] [i_14] [i_14]) || (((arr_8 [i_14] [16] [i_14] [i_14]) || (arr_46 [i_14])))));
        var_23 += (max((arr_12 [i_14] [6] [i_14] [i_14] [i_14] [2] [i_14]), (min((arr_4 [i_14] [i_14] [i_14]), ((((arr_2 [i_14]) >= (arr_49 [i_14]))))))));
        var_24 = ((((((var_3 ^ (arr_2 [0])))) ? var_1 : ((var_4 ? (arr_6 [i_14] [i_14] [2]) : (arr_11 [6] [i_14] [i_14] [14] [i_14]))))));
    }
    #pragma endscop
}
