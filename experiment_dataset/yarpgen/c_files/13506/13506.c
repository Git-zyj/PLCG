/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_15 = (max(var_15, (((((((min(((((arr_3 [i_0] [i_0 - 3]) >= (arr_3 [i_0 - 3] [i_1])))), (arr_0 [i_0 + 1])))) + 2147483647)) << (((((arr_1 [i_0]) - (max(var_3, 0)))) - 11088550382180585523)))))));
                    var_16 = (arr_0 [i_2]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_17 |= ((var_9 ? (~50225) : ((((arr_3 [i_0] [i_1]) >= (arr_2 [i_2]))))));
                            arr_14 [i_0] [i_0 - 2] [i_0] [i_1] [i_2] [i_3] [i_4] = (246 % 50252);
                            var_18 = ((~(((var_12 + 2147483647) << (((var_2 + 27) - 16))))));
                            var_19 |= ((-(arr_6 [i_0 - 2])));
                            var_20 = (arr_10 [i_0 - 1] [i_0 - 1] [19] [i_0]);
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            var_21 = (min(var_21, (((-1749008944 ? 15310 : 1073709056)))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = (((arr_1 [i_2]) == -var_8));
                            arr_18 [6] [i_3] [i_0] [i_0] [i_5] [i_5] [i_3] = (((~(arr_11 [i_0]))) ^ (arr_13 [i_0] [i_0 + 1] [i_0] [15] [i_0] [i_0]));
                            var_22 ^= ((!(arr_10 [i_3] [i_2] [i_1] [i_0 - 2])));
                        }
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            var_23 = ((~(arr_12 [i_0] [12] [i_2] [i_3] [i_6 + 2] [i_6])));
                            arr_21 [i_6 + 3] [i_0] [i_0] [i_0] = (0 < 0);
                            var_24 = ((var_10 << (885036885 * 0)));
                            arr_22 [19] [19] [i_2] [i_0] [i_6] = (((var_8 + 2147483647) << (((arr_4 [i_0 - 3] [i_6 + 2]) - 1))));
                        }
                        arr_23 [i_0 - 3] [i_1] [i_0] [i_3] = (var_11 % var_10);
                    }
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    var_25 += ((((((arr_11 [i_7]) ? var_4 : (arr_11 [i_7])))) ? (((arr_11 [i_7]) << (var_11 - 2131026925))) : (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_1])))));
                    var_26 = (((((arr_10 [i_0 - 2] [6] [i_1] [i_7]) ? 40 : (arr_10 [i_7] [i_1] [i_1] [i_0]))) << (var_14 - 161)));
                    var_27 = (min(var_27, ((min((((~(arr_0 [i_0 - 3])))), ((var_10 ? (arr_0 [i_0 - 3]) : (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 2]))))))));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_28 ^= ((((-(arr_20 [i_8] [i_8] [i_8] [i_8] [i_1] [i_1] [i_0]))) == (arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [1] [i_0])));
                    arr_28 [i_8] &= (((((((arr_16 [i_0] [i_1] [i_8]) - var_14)) << (((arr_9 [i_0] [i_1] [i_8] [i_1]) + 95)))) % (((41 * (var_8 >= var_3))))));
                }
                arr_29 [10] &= (((9079250810054798108 - -1749008926) ? 123 : 15606));
                var_29 = (arr_26 [7] [i_0] [15] [i_1]);
            }
        }
    }
    var_30 = (((((((var_7 ? var_4 : var_11)) & (var_14 ^ var_10)))) ? (1726976797 ^ -15652) : ((var_6 ? var_11 : var_10))));
    #pragma endscop
}
