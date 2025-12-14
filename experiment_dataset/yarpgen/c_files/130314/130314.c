/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_8));
    var_18 = var_4;
    var_19 &= (((((((var_1 ? 480390858 : var_16)) >> (var_8 - 167)))) ? (((var_16 || (!27)))) : var_15));
    var_20 = (max(var_20, var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_21 = ((106 ? ((38997 ? (arr_1 [i_0] [16]) : var_4)) : -var_8));
        var_22 = (max(var_22, ((((arr_0 [i_0 - 2] [i_0 + 1]) ? (((var_2 ? var_13 : var_14))) : (((arr_0 [i_0] [5]) ? (arr_1 [i_0] [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_23 = ((arr_1 [i_1 - 2] [i_1 + 1]) ? (arr_1 [i_1 - 2] [i_1]) : (arr_1 [i_1 - 2] [4]));
        var_24 &= (arr_0 [i_1] [6]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_25 = ((((((arr_5 [i_2 + 1]) / var_12))) ? (var_15 & var_16) : ((32076 ? (arr_6 [i_2]) : 3711685582))));
        arr_8 [i_2] = var_1;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_2] = ((-(arr_13 [i_4] [i_3] [i_3 - 1])));
                    arr_16 [i_2] [i_2] = ((((((arr_12 [i_2] [i_3]) ? (arr_6 [i_2]) : (arr_9 [i_2 + 1] [i_2] [i_2])))) && var_1));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_26 = (0 >= 207);
                        arr_21 [i_2 + 2] [i_2] [i_2 - 1] [6] [i_2 - 1] = var_6;
                        var_27 -= -82;
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            var_28 = (((arr_18 [i_7 - 1]) ? var_10 : (arr_14 [i_4 - 2])));
                            var_29 = (arr_7 [i_7 + 1] [i_7 - 1]);
                        }
                        var_30 -= (((arr_18 [i_3 - 1]) ? var_6 : (arr_24 [i_4 + 1] [i_3 + 1] [i_2 - 1] [i_6])));
                        arr_29 [0] = ((7 + (((16266 / (arr_20 [i_2] [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_35 [i_8 + 2] [7] [i_8 + 2] [2] [i_3] [i_2] = 2940480648705647518;
                                var_31 = (max(var_31, ((((arr_9 [i_8 + 2] [i_3 - 1] [i_2 + 1]) == ((-(arr_28 [i_8 + 3] [0] [i_4] [i_8]))))))));
                                var_32 = ((3711685600 == (arr_31 [i_3 + 1] [i_4 - 1] [i_9 - 2])));
                                var_33 = -879296232;
                            }
                        }
                    }
                }
            }
        }
        var_34 = ((arr_11 [i_2 + 1] [i_2 + 2] [i_2 + 2]) / var_14);
        var_35 = (((var_6 | 33469) > (arr_24 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 + 2])));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        arr_38 [i_10] [3] = ((-((((((arr_36 [1]) ^ var_1))) ^ ((~(arr_3 [i_10])))))));

        for (int i_11 = 2; i_11 < 17;i_11 += 1)
        {
            arr_42 [i_11] [i_11 - 2] [6] = var_2;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    {
                        var_36 = (max(var_36, (~2940480648705647521)));
                        arr_51 [i_12] [i_12] [9] [i_10] [i_12] = 9191262659736264348;
                        var_37 = var_13;
                        var_38 = ((+(((arr_43 [i_13] [i_11] [i_10]) & 21))));
                    }
                }
            }
            var_39 = arr_1 [i_11 - 1] [i_11];
        }
        var_40 = (var_2 ? 217 : ((max(32078, 190))));
        var_41 = var_16;
    }
    #pragma endscop
}
