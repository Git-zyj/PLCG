/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(var_19, (((~var_8) ^ 17))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_8 [17] [i_1] [i_1] [6] = (var_3 || 1);
                            var_21 = ((((14534890721694155894 ? 1 : 910520626)) << ((((~((38179 ? (arr_0 [0]) : (arr_7 [i_2] [i_2] [7] [7] [15]))))) + 61202))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_22 *= var_9;
                    var_23 = 3384446662;
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, 1));
                    var_25 = 19011;
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_15 [10] [10] = (~var_11);

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_19 [i_0] [4] [4] = (877379269 * 0);
                        arr_20 [i_1] [i_1] [i_6] = (-(arr_14 [i_0] [i_1] [i_7] [i_7]));
                    }
                    arr_21 [i_0] [13] [16] [i_6] = 249;
                    var_26 = (max(var_26, ((~(1 + 1)))));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_27 = (max(var_27, ((((((((!1) || -var_19)))) * (((~9) ^ var_1)))))));
                                var_28 = (min(var_28, 1));
                            }
                        }
                    }
                    arr_28 [i_0] [i_1] [i_8] = (min(var_8, ((-(var_19 <= 40)))));
                }
                arr_29 [9] [9] &= var_16;
                var_29 = (--910520653);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            {
                var_30 = (max(var_30, var_9));
                var_31 = (min(var_31, (1 <= 90)));
                arr_34 [i_11] [i_12] = 13;
                arr_35 [3] [3] = ((((((arr_5 [i_11] [i_11] [i_12] [i_12]) + 9223372036854775807)) << (((((var_4 + 2147483647) >> (var_13 + 6282386371907748111))) - 669)))));
                arr_36 [i_11] = (((((arr_6 [2] [1]) <= (arr_4 [i_11] [i_12] [i_12] [i_12]))) ? var_3 : -1626971368));
            }
        }
    }
    var_32 = var_13;
    #pragma endscop
}
