/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = ((10664225433320721413 != (-13552 > -8)));
        arr_3 [i_0] = ((((((arr_1 [i_0]) < ((((var_0 != (arr_0 [i_0])))))))) - ((max(-13552, -1)))));
        arr_4 [1] [i_0] = 0;

        for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_17 = -9223372036854775806;
            var_18 |= (max(var_13, (min((arr_5 [i_1 - 3] [11] [i_1 - 1]), -13541))));
            arr_7 [i_1] [i_0] |= arr_1 [i_0];
            var_19 ^= (arr_2 [i_0] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_13 [i_1] = (min(65535, -13551));
                        arr_14 [i_1] [i_1] [i_2] [i_3] [i_1] [i_3] = (((((var_7 ? (min(-13552, (arr_11 [i_0] [i_1] [i_2] [i_3]))) : -13538))) ? -13542 : (max((max(-1, 10171208872913718793)), (arr_5 [3] [i_1 - 2] [i_3])))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_18 [2] [i_1] [i_0] [i_3] [i_3] = (((((min((arr_16 [i_4] [i_4]), 3796174634)) <= (min((arr_12 [i_4] [i_3 - 1] [i_2 - 1] [i_1 - 1] [i_0]), 2700263983)))) ? (max((max(-13520, 12161297156281032903)), 13544)) : var_7));
                            var_20 = (min(var_20, 65532));
                        }
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            arr_23 [i_1] [i_3 - 2] [i_1] [i_1] [i_0] [i_1] = (min(1826, (max((arr_12 [i_0] [i_5 - 3] [i_2] [i_1] [i_1]), (~var_12)))));
                            arr_24 [i_5] [i_1 - 2] [i_1] [i_3] [i_5] = ((!(arr_17 [i_0] [i_0] [i_1] [5] [i_0] [i_5 - 1] [i_5])));
                            arr_25 [i_1 - 2] [i_2] [i_1] = (arr_21 [i_0] [i_5] [i_2] [i_3 - 1] [i_5] [i_3]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_28 [i_0] [i_0] [i_6] = var_0;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    {
                        var_21 = var_13;
                        var_22 = arr_8 [i_7] [i_8] [i_7] [i_7];

                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            var_23 |= ((369574620 ? (arr_30 [i_0] [i_6] [i_7]) : ((((!(arr_21 [i_0] [i_6] [i_7] [1] [3] [i_9])))))));
                            arr_36 [i_0] [i_9] [i_7] = arr_10 [i_9 + 2] [i_6] [i_6] [i_6] [i_9] [i_8 + 1];
                            var_24 = (!16776704);
                            var_25 = var_7;
                            var_26 = (6285446917428518713 ^ (arr_22 [i_7] [i_7 + 2] [i_9] [i_9] [i_9]));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            arr_40 [i_7] [i_7 + 2] [i_7] = (((arr_1 [i_7 + 2]) / 13537));
                            var_27 = 50699;
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_43 [i_7] [i_7] [i_7 + 1] [6] [i_7] = ((-100952640 & ((-2147483643 / (arr_20 [i_0] [7] [i_7] [i_8 - 2] [i_11])))));
                            arr_44 [i_0] [i_6] [i_7] [i_8 + 1] [i_7] [i_6] = (arr_33 [i_6 - 2] [i_6] [i_6] [i_6]);
                        }
                    }
                }
            }
        }
        arr_45 [i_0] [i_0] = (max((arr_41 [i_0] [i_0] [i_0] [i_0] [0] [i_0]), (min(-369574600, (arr_2 [i_0] [i_0])))));
    }
    var_28 = ((var_2 <= (min(0, ((min(var_12, -1962573029)))))));
    var_29 = (max(6285446917428518717, 6285446917428518730));
    #pragma endscop
}
