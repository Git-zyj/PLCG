/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = ((!(((-1 ? 67108608 : 1)))));
                                var_10 *= (((var_9 * var_0) ? (((((2199023255551 ? (arr_10 [i_1] [8] [23]) : (arr_15 [1] [10] [i_2] [i_1] [i_0])))) ? (arr_4 [i_0] [i_0] [i_0]) : (~76733025))) : (((-(!-6973))))));
                                var_11 = (~((((max(1, var_3))) << (((~1) + 10)))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] = (((1 ? (arr_13 [i_5] [5] [i_5] [i_0] [i_0] [23] [i_0]) : (arr_9 [i_0]))));
                    arr_21 [i_0] [i_1] [i_1] [i_0] = var_7;
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_12 = ((2634658273 ? ((((arr_27 [21] [22] [i_0] [i_7 - 1] [i_8] [i_0]) ? 1 : (arr_27 [i_0] [i_1] [i_0] [19] [i_8 + 1] [16])))) : (((arr_26 [i_0] [i_7 + 2]) ? var_6 : 18893))));
                                var_13 = ((10 ? 1660309023 : 119));
                            }
                        }
                    }
                    var_14 = ((!(((((0 <= (arr_9 [i_0]))) ? (arr_19 [i_1] [i_1] [5] [i_1]) : ((((arr_22 [i_0] [i_1]) && var_8))))))));

                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        arr_35 [i_0] [i_1] [i_1] [i_0] = 21;
                        arr_36 [i_0] [i_0] [i_6] [i_9] = (min((~-85), ((~(arr_24 [i_0] [i_1] [i_6])))));
                        arr_37 [i_9] [i_0] [i_0] = (min((min(((((arr_34 [10] [10] [i_0] [i_1]) > (arr_17 [2] [i_1] [i_6] [6])))), ((-1 + (arr_28 [i_0]))))), -18446741874686296065));
                        var_15 = var_4;
                    }
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    arr_40 [i_0] [i_0] [i_10] = -39;
                    var_16 -= ((((((arr_30 [i_0] [i_0] [i_1] [14] [i_1] [0]) ? (arr_12 [i_0] [i_0] [0] [i_10]) : (arr_6 [i_0] [1] [i_10]))) + ((min(372570880, 0))))));
                    var_17 = 0;
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_43 [i_0] = var_6;
                    arr_44 [i_0] [i_0] [i_11] = (((arr_4 [i_0] [3] [i_11]) ? (min(6131557049521754785, 8)) : (((arr_4 [i_11] [i_1] [i_0]) ? (arr_4 [1] [i_1] [i_11]) : (arr_4 [i_11] [i_1] [i_0])))));
                }
            }
        }
    }
    var_18 = ((var_7 * (min((min(10512867719454672583, 18446741874686296056)), (!var_8)))));
    #pragma endscop
}
