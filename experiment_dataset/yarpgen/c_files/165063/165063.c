/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = ((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]));
        var_21 -= (arr_3 [i_0] [i_0 - 1]);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_22 -= 5735295468601725200;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_14 [i_3] [i_2] = (~2351920866);
                        var_23 = (max(var_23, (~-1)));
                        var_24 = ((~(arr_5 [i_0 - 1])));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = 4132697210;
                            var_25 = ((1943046429 ? (arr_2 [i_0]) : (arr_13 [i_3] [i_3])));
                            arr_18 [i_0] [i_0] = var_4;
                            var_26 = ((107 ? (arr_12 [i_0 - 1] [i_1] [2] [i_3 + 1] [i_4] [4]) : 14120));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_27 |= (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2]);
                var_28 = (arr_0 [i_0]);
                var_29 = (arr_2 [i_0]);
                var_30 = 14120;
            }
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            arr_25 [i_0] [i_0] |= 1;
            var_31 = (arr_11 [i_6 + 2] [i_0 - 2]);
            var_32 = ((-(arr_0 [i_0 + 1])));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_33 = (min(var_33, 28521));
                var_34 = var_2;
                arr_31 [i_8] = ((arr_10 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0 - 2]) ? (arr_27 [i_0 - 1] [i_0 - 1] [i_7]) : (arr_2 [i_0]));
            }

            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_35 = (((arr_30 [13] [i_7] [i_0]) && var_15));
                var_36 ^= (((arr_20 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? var_1 : (arr_20 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 2])));
                var_37 -= (((arr_8 [i_0 - 2] [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 - 2] [i_0 - 1]) : (arr_1 [i_0 - 2] [i_0 - 1])));
                var_38 = (~var_12);
            }
        }
    }
    var_39 = ((var_2 ? ((-13573 ? 29 : -28)) : (((max(var_15, var_17))))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                var_40 = (arr_20 [i_10] [i_11] [i_11] [i_11]);
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_41 = ((((((arr_6 [i_12 + 1] [i_12 - 1] [i_12 + 1]) + (arr_6 [i_12 + 1] [i_12 - 1] [i_12 + 1])))) ? ((var_8 ? (arr_6 [i_12 + 1] [i_12 - 1] [i_12 + 1]) : (arr_6 [i_12 + 1] [i_12 - 1] [i_12 + 1]))) : -209735255));
                            arr_47 [i_10] [i_11] [i_10] [i_13] = var_2;
                            arr_48 [i_12] = (arr_9 [i_10] [i_10]);
                        }
                    }
                }

                /* vectorizable */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    arr_51 [i_10] [i_14] = (arr_40 [6] [i_11]);
                    arr_52 [i_14] [i_11] = 538364397;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 10;i_16 += 1)
                        {
                            {
                                arr_58 [i_16] [i_15] [i_10] [i_11] [i_10] = arr_0 [i_10];
                                var_42 = (((arr_1 [i_10] [i_10]) ? (arr_12 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1]) : (arr_16 [i_10] [4] [i_14] [6] [i_16 - 1])));
                            }
                        }
                    }
                }
                var_43 = (max(209735255, 3650950801));

                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    var_44 = min(((min(((!(-32767 - 1))), ((!(arr_37 [i_10])))))), ((((max(var_1, 0))) | -1)));
                    var_45 = (!2968020575);

                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        var_46 = (max(var_46, ((min((arr_11 [13] [3]), ((((9223372036854775799 / (arr_27 [i_10] [i_11] [i_17]))))))))));
                        arr_65 [i_10] = (min(var_6, (((-32767 - 1) ? -209735255 : (min(-27, 2147467264))))));
                        var_47 = (((((arr_29 [0] [i_11]) >= (arr_4 [i_11]))) ? (arr_19 [i_18] [i_17] [i_11] [i_10]) : (arr_1 [19] [19])));
                        var_48 = (((((var_6 - (arr_60 [7] [8] [i_18])))) ? 1943046415 : (arr_60 [i_10] [i_10] [i_10])));
                        var_49 = arr_0 [i_17];
                    }
                    var_50 = (arr_40 [i_10] [i_10]);
                }
                for (int i_19 = 3; i_19 < 8;i_19 += 1)
                {
                    var_51 = ((((max(-4937197407507769835, 1))) >> (((min((~70334384439296), ((max(-7449, (arr_21 [i_19] [i_11] [i_10] [i_10])))))) + 70334384439312))));
                    var_52 = (min((min(((~(arr_4 [i_10]))), ((max(1, var_8))))), (arr_53 [i_19])));
                }
            }
        }
    }
    #pragma endscop
}
