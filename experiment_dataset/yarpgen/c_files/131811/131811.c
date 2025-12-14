/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (!8476)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_15 = (min(var_15, var_12));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 = (max(var_16, ((((arr_6 [i_1 - 1] [i_1] [i_2] [i_0 - 1]) ? (arr_6 [i_1 - 1] [i_1] [i_1 - 1] [i_0 + 4]) : (arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_0 + 1]))))));
                            var_17 = (min(var_17, (arr_2 [i_1] [i_0] [i_1])));
                        }
                        var_18 = (((arr_4 [i_1 + 2] [i_0 - 2] [12] [i_0 - 2]) ? 0 : (arr_3 [i_0 + 4] [i_0])));
                        var_19 = (min(var_19, 1));
                        arr_12 [i_1] [i_1] [i_2] [i_3] = (((arr_11 [i_0] [5] [i_0] [i_0 + 4] [i_0 + 2] [i_1 + 2]) & (arr_11 [i_0] [i_0] [i_0 + 2] [i_0 + 4] [i_0 + 1] [i_1 + 2])));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, ((min((((-(arr_6 [8] [7] [i_0 + 3] [i_1 + 1])))), (((((arr_3 [i_0 + 2] [i_5]) ? (arr_1 [i_1 + 2]) : 64)) / (var_10 / 5))))))));
                        var_21 = (+-1703178969);

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_22 = max(39535, 56);
                            var_23 = ((((((arr_1 [i_0]) - (arr_13 [i_6] [i_2])))) ? ((((arr_3 [i_2] [i_0 - 1]) && (arr_5 [i_0 - 1])))) : ((min((arr_6 [i_0 - 2] [i_1 + 2] [i_1 + 2] [i_1 + 2]), (arr_6 [i_0 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2]))))));
                            var_24 = (--0);
                            arr_18 [i_0 - 2] [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_5] [i_6] = (arr_17 [i_0] [4] [i_0] [i_0 + 3] [14] [i_0 + 3]);
                        }

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_25 = ((-(min((arr_13 [i_0] [i_2]), -var_6))));
                            var_26 = (max(var_26, -60));
                            arr_22 [i_1] = (min((((!(0 && -9223372036854775797)))), (((-6308737274142645986 > var_0) ? (((!(arr_5 [9])))) : var_8))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_27 = (((!-1099511627776) == (min((((arr_17 [i_8] [i_5] [1] [i_1] [i_1] [i_0]) ? (-127 - 1) : (arr_24 [6] [i_0] [i_1] [i_1] [3] [i_5] [i_8]))), ((var_12 ? (arr_5 [i_0]) : (arr_15 [4] [i_1] [14] [i_5] [i_8])))))));
                            arr_25 [14] [15] [i_1] [i_1] [i_8] [i_1] [i_1] = (arr_14 [7] [7] [15] [i_5]);
                            var_28 = (min(var_28, (arr_1 [i_0 - 2])));
                        }
                    }
                    arr_26 [i_2] [i_1] [i_2] = (min(3113220951, (736227736 && var_4)));
                    arr_27 [i_1] = ((~((((arr_20 [i_2] [i_2] [i_1 + 2] [i_1] [9] [i_0] [9]) ? var_10 : var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
