/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 = var_7;
        var_12 = (((var_10 != var_5) ? var_4 : (((~(arr_1 [i_0] [i_0]))))));
        var_13 = (max(var_13, (((min((max(0, 18446744073709551615), (arr_0 [17]))))))));
        var_14 = (max((((-(var_4 > 92)))), (min(65522, ((var_3 ? (arr_1 [12] [12]) : (arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] = ((0 ? (arr_0 [10]) : 4212473399));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_15 *= (((((((~15) > ((var_4 >> (((arr_14 [i_4] [i_4] [i_4] [4] [13] [1] [i_4]) + 5086456468305804110)))))))) != ((((min(var_5, var_6))) ? 142 : (max(3623452752, (arr_14 [i_5] [i_4] [i_2] [20] [i_2] [i_2] [i_1])))))));
                            arr_17 [i_3] = ((((arr_1 [i_3] [i_2]) ? var_2 : var_3)));
                            arr_18 [16] [6] [0] [7] [i_2] [i_1] = ((!((((arr_9 [i_1] [i_1] [i_1] [i_1]) / 90)))));
                            arr_19 [i_1] [i_1] [15] [i_4] [i_5] = (671514543 ? (((arr_5 [i_3] [i_3]) | ((var_4 ? var_4 : 8426056955499898382)))) : 4143176753);
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_6] = (((var_2 ? ((var_6 ? 4212473390 : var_4)) : (((~(arr_22 [i_6] [i_4] [i_3] [i_2] [i_1])))))));
                            arr_24 [i_1] [8] [i_3] [i_6] [1] = (~var_4);
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_27 [i_1] [10] [i_3] [i_3] [9] [9] = (max(var_9, ((var_2 ? (arr_8 [i_1]) : (arr_9 [8] [i_3] [i_2] [9])))));
                            var_16 = ((var_5 ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_8));
                            var_17 += var_9;
                            var_18 |= (((((~(arr_10 [i_1] [i_1] [1] [i_4])))) ? (arr_10 [8] [i_2] [i_3] [i_4]) : (min((arr_10 [i_7] [i_4] [i_1] [i_1]), (arr_10 [i_3] [i_4] [i_3] [i_4])))));
                            arr_28 [3] [i_7] [i_7] [15] [i_7] [8] = (min((((var_6 ? ((min(var_9, 6343))) : (arr_3 [13] [i_2])))), var_1));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_32 [0] [i_4] [i_3] [i_3] [i_8] [i_3] = var_7;
                            var_19 = var_3;
                        }
                        var_20 = (max(var_20, ((((arr_13 [16] [9]) ? ((((var_2 > (arr_10 [i_4] [i_4] [i_4] [i_4]))))) : (((((1 ? 13 : 82493906))) ? (((2608550052 ? 125 : 4212473372))) : ((var_8 ? var_2 : var_4)))))))));
                    }
                    var_21 = var_4;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_22 &= ((-var_6 ? (((-(arr_30 [9] [i_9] [i_9] [i_9] [9] [i_9] [i_10])))) : (max(var_2, ((min(var_1, var_1)))))));
                    arr_38 [i_1] [i_9] [i_9] [i_10] = ((max(var_5, (arr_35 [i_1] [19] [i_10]))));
                }
            }
        }
        var_23 *= (((~(arr_0 [i_1]))));
        var_24 = var_9;
        arr_39 [i_1] |= ((!(!var_2)));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        var_25 = var_6;
        arr_42 [14] [14] &= (arr_3 [i_11] [i_11]);
        var_26 += (((~(arr_6 [i_11] [i_11]))));
    }
    var_27 = var_8;
    var_28 = (max(var_28, var_4));
    #pragma endscop
}
