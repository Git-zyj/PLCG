/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_5);
    var_12 = (var_7 ? var_5 : (~1));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_13 = ((((~(arr_1 [i_0 + 1]))) | 2603));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [1] [i_2] [1] [i_3] [i_3] = (arr_4 [i_2 - 1] [i_2 - 1]);
                        var_14 = ((9891 ? (max(var_10, var_8)) : -628591849));
                    }
                }
            }
        }
        var_15 *= -1;
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            var_16 ^= (((arr_13 [i_5 + 1] [i_4 - 2]) ? 9891 : (arr_15 [7] [1] [i_4])));

            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_17 *= ((255 - ((775088764790979805 ? 9147141297598671080 : 1251714642))));
                    arr_22 [i_6] [i_6] [i_5] [i_6] = (arr_20 [1] [6]);
                    arr_23 [i_4] [3] [i_6] = 12424996634042887248;
                }
                arr_24 [7] [i_6] [i_6] [15] = -2418820621;
            }
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                arr_27 [i_4] [i_5] [i_8] = (arr_25 [i_8] [i_5] [5]);
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_34 [11] [i_5] = var_3;
                            arr_35 [1] [15] [15] [5] [i_8] [i_8] = var_4;
                            arr_36 [i_4] [i_5] [i_8] [i_9] [i_10] = (arr_28 [i_8] [i_4] [i_8] [14] [14] [i_4]);
                        }
                    }
                }
                var_18 *= (((arr_18 [i_4] [i_4] [i_4] [i_4]) ? ((((arr_32 [i_4] [4] [i_4] [i_5] [4] [i_5] [4]) + var_0))) : (arr_14 [i_4 - 2])));
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                var_19 = 3;
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_20 ^= (~((var_0 ? (arr_43 [i_4]) : (arr_29 [i_4] [i_4] [i_4] [i_4]))));
                            var_21 = (min(var_21, (((((((arr_33 [15] [i_5] [i_5] [3] [15]) + 0))) ? (arr_26 [i_4] [i_4 + 2] [i_4]) : 775088764790979795)))));
                        }
                    }
                }
            }
            var_22 = (~var_1);
            var_23 = (127 / 62947);
        }
        /* vectorizable */
        for (int i_14 = 3; i_14 < 14;i_14 += 1)
        {
            arr_50 [i_14] [i_14] [i_4] = 1065454578;
            arr_51 [11] = (arr_45 [i_4 + 1] [10] [i_4 + 1] [i_4] [i_4 + 1]);
        }
        arr_52 [1] [1] = 43313;
        var_24 = (-420347390 | 62943);
    }
    #pragma endscop
}
