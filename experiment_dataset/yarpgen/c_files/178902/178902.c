/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_12 & ((min(var_14, var_13)))));
    var_16 = (max(var_16, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_17 = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> 1));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_18 ^= ((((1 ? (arr_12 [i_2] [i_3] [i_1] [i_1] [i_2]) : (arr_4 [i_0]))) << (((arr_8 [1] [i_4 - 1]) + 1246119447237813501))));
                            arr_13 [i_2] [i_3] [i_3] |= ((-(1 ^ 1)));
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] [i_1] = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]) ? (arr_5 [i_3] [i_1] [i_2]) : (arr_5 [i_3] [3] [i_0])));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [10] [i_4] = (((arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_1]) ? 1 : (arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_1])));
                            var_19 = 42;
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_3] [i_3] [1] = (58760 % 1);
                            var_20 = (max(var_20, -1));
                            var_21 = (((arr_16 [i_5 - 1] [i_1] [i_2] [i_2] [i_1] [i_0]) ? (arr_16 [i_5 - 1] [i_1] [i_5 - 1] [i_5] [i_1] [i_2]) : 112));
                            var_22 = (((arr_10 [2] [i_5] [i_5] [i_5] [i_5 - 1]) ? (arr_10 [i_2] [i_2] [i_5] [i_2] [i_5 - 1]) : (arr_10 [3] [3] [3] [3] [i_5 - 1])));
                        }
                        var_23 += (((arr_2 [i_0] [i_1]) ? var_12 : (arr_16 [i_3] [i_3] [4] [i_1] [i_3] [i_0])));
                        arr_19 [i_1] [i_1] [6] [i_1] = (((((-(arr_4 [i_3])))) ? 1 : (arr_6 [i_0] [i_1] [i_2] [i_3])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_24 = (max(var_24, (((!((((arr_0 [i_0] [i_0]) ? 170 : 1))))))));
                        var_25 = (arr_20 [i_1] [i_1]);
                        var_26 += (((arr_8 [i_6] [i_6]) ? (arr_4 [i_0]) : -2056520383));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_27 = -1;
                        arr_25 [i_1] = ((-(2056520385 - 1)));
                        var_28 = (min(var_28, ((((-4511460132601077911 != -1) ? ((((!(arr_24 [i_0] [i_2] [i_7]))))) : (min(var_3, (arr_2 [i_0] [i_2]))))))));
                    }
                    arr_26 [i_1] [i_1] [2] = ((!(min(((18525 || (-9223372036854775807 - 1))), 1))));
                }
            }
        }
    }
    var_29 = (max(var_29, (((min(var_5, (~var_2))) * (-1353633772 && var_2)))));
    #pragma endscop
}
