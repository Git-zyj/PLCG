/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((var_9 ? ((((1 ? var_10 : var_6)) + var_6)) : (((-var_0 ? (var_8 / var_11) : 17281)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        var_13 = ((-(arr_5 [20] [20] [i_0])));
                        var_14 = var_10;
                    }
                    var_15 &= (((35467 << (((arr_5 [i_0] [i_0] [i_1]) - 4038900662)))));
                    arr_10 [i_0] [i_1] [i_2] = 30063;
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_16 += var_5;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    arr_20 [i_5] [i_5] [i_4] = var_10;
                    var_17 ^= (max((((!(var_10 + var_2)))), 32766));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                {
                    arr_27 [i_4] [i_7] [i_8] = 268435454;
                    arr_28 [i_8] = ((-(1573446845 / 18513)));
                    arr_29 [i_4] [i_4] [9] = var_4;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_37 [i_10] [i_10] [i_8] [10] [i_10] = ((((((((-(arr_22 [i_7])))) ? ((var_7 ? (arr_5 [i_4] [18] [6]) : 0)) : (~-23392)))) > (((var_3 == var_7) ? (((7 & (arr_6 [i_9] [i_7] [i_8] [i_9])))) : (min(0, 0))))));
                                arr_38 [i_7] [i_8] [i_10] = ((~((var_0 >> (((arr_31 [i_8 - 1] [17] [i_10 - 1] [i_10 - 1]) - 68))))));
                                var_18 = (((((max(var_10, (arr_22 [i_4]))))) ? (((!(arr_31 [i_4] [i_7] [i_8] [i_9])))) : var_3));
                                arr_39 [i_7] [i_7] [i_9] [i_9] [i_7] [i_10] [i_9] = (~var_7);
                                var_19 = (((((((0 ? 1 : 1)) + (arr_25 [16] [i_7] [i_7])))) ? ((((((-(arr_6 [i_4] [10] [i_8] [i_9])))) ? -var_2 : var_10))) : (min(var_5, 18446744073709551615))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 16;i_12 += 1)
                        {
                            {
                                arr_45 [i_4] [i_7] [i_4] [i_8 - 1] [i_4] = ((((((((0 ? var_4 : (arr_33 [i_7] [i_11])))) ? (arr_7 [i_8 + 2] [i_8] [i_8 + 3] [i_8 + 2]) : (((arr_18 [i_4] [1] [i_12] [i_12]) ? var_9 : var_4))))) ? (arr_36 [i_4] [13] [i_4] [i_4] [i_4] [i_4] [i_4]) : ((var_8 % (max(var_7, (arr_40 [i_4] [11] [i_8])))))));
                                var_20 = (arr_13 [i_8 + 2] [i_8]);
                                var_21 ^= ((!(max((0 == 4026531842), (((arr_17 [i_4] [i_7] [i_4] [i_7]) >= -5997))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = ((-var_11 && (((+(max((-2147483647 - 1), var_0)))))));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        var_23 = (min((arr_35 [15] [i_13] [5] [i_13] [i_13]), ((min((min(-6526780605406365207, var_1)), (min((arr_26 [i_13] [i_13] [i_13] [i_13]), var_2)))))));
        arr_50 [i_13] = ((((0 ? (~var_0) : (((-(arr_46 [i_13])))))) * (!var_10)));
    }
    #pragma endscop
}
