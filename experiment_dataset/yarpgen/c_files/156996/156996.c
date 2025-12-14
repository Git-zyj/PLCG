/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_5) && ((max((~0), var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (min(1636277081, (1 - 1)));
                    var_15 ^= ((((-(~-8031852138151914447))) & (arr_7 [i_0])));
                    var_16 = (((((max(4294967295, 56702))) && (((arr_3 [3] [i_1]) && (arr_2 [i_1] [i_2]))))));
                    var_17 = var_10;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 = (arr_9 [i_3]);
        var_19 = (min(0, 0));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_16 [i_5] [i_5] [i_5] = 52614;
            arr_17 [8] &= ((max(-8031852138151914445, (arr_12 [i_4]))));
            arr_18 [i_5] = var_1;

            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_20 = (min((min(56695, ((var_7 ? var_12 : 1)))), 836485970));
                            var_21 = (max(56695, (min(var_3, (arr_8 [11] [i_4])))));
                            var_22 = var_11;
                            var_23 = -1;
                            arr_26 [i_5] = 2624036706;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_33 [4] [i_5] [i_5] [i_6] [i_9] [i_9] [i_5] = (((4294967295 >= 330483558) ? var_1 : var_3));
                            var_24 = (arr_30 [i_4] [i_5] [i_6] [i_9]);
                        }
                    }
                }
                arr_34 [i_5] = -29945;
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            arr_43 [i_5] [i_13] [i_4] [1] = (~2729);
                            arr_44 [21] [i_5] [i_11] [i_5] [i_13] = max((((var_1 ? var_7 : var_11))), (min((5387 * -2028), (var_1 - 5553636387406872117))));
                            var_25 = ((min((min(662356102, var_6)), (((var_5 ? var_11 : 56702))))));
                        }
                    }
                }
                arr_45 [i_5] = (min((((!((min(-8273, 18446744073709551602)))))), (((arr_15 [i_11]) & -8031852138151914447))));
            }
        }
        arr_46 [i_4] = (arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
        var_26 = (max(((~((var_11 ? 5051514921845116826 : 268435455)))), var_5));
        arr_47 [i_4] = (max((((((17 * (arr_42 [i_4] [4] [i_4])))) ? (arr_23 [4]) : -41573)), 82));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        var_27 = 86;
        arr_51 [i_14] [i_14] = ((!((min(var_2, (arr_49 [i_14]))))));
        var_28 = (max(var_28, ((((max((min(7, var_11)), var_11)) <= (-32767 - 1))))));
        var_29 = (min((arr_31 [i_14] [i_14] [i_14] [i_14] [14] [i_14] [i_14]), (arr_50 [i_14] [i_14])));
        var_30 = ((!(((min(var_11, 1058))))));
    }
    var_31 = var_3;
    var_32 = ((-(3609 != var_8)));
    #pragma endscop
}
