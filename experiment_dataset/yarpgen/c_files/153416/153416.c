/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = var_4;
        var_20 = (min((min(((var_1 ? (arr_0 [i_0] [i_0]) : -63)), (max((arr_0 [i_0] [i_0]), var_14)))), ((-(arr_0 [i_0] [i_0])))));
        var_21 = (min(var_21, ((((6455044886685575791 || 5450925874308971619) ? (max(0, (max(var_0, 6455044886685575773)))) : 0)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = ((-131065629 ? (arr_1 [i_1 - 1] [i_1 - 1]) : (-529774591 ^ -6455044886685575797)));
        var_22 = -6455044886685575792;
        arr_7 [i_1] [i_1] = -110;
        arr_8 [i_1] = ((-5450925874308971620 ? (((((-2147483647 - 1) > (arr_1 [i_1 - 1] [i_1 - 1]))))) : -6695317067883650321));

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                arr_15 [i_1] [i_1] [i_1] = (arr_4 [i_1]);
                var_23 -= ((((var_14 ? var_15 : 1)) / (arr_10 [i_1] [i_1])));
                var_24 = (((arr_13 [i_1 + 1] [i_1 - 1]) > (arr_13 [i_1 - 1] [i_1])));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                arr_19 [10] [i_4] = (3 ? (arr_9 [i_1 + 1] [i_1 + 1] [i_2 + 1]) : 83);

                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    var_25 *= -7447561610653215326;
                    arr_22 [i_1] [i_1] [i_1] [i_1] [i_5] = -1;
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_26 ^= (((arr_1 [i_1] [i_1 + 1]) >= (arr_21 [i_1] [i_6] [i_1] [i_1] [i_1])));
                    var_27 = (max(var_27, ((((arr_1 [i_2] [i_6]) ? -var_5 : (1 * var_16))))));
                }
            }
            var_28 = (!-7321554455229566370);
            arr_25 [i_1] [i_2] [i_2] = ((67 > (arr_5 [i_1 + 1])));
            arr_26 [i_1] [i_2] |= (arr_14 [i_1 + 1]);
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_29 = (arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
            var_30 = 127;
            var_31 = (((arr_17 [i_1] [i_7]) ? 81 : ((98 ? 0 : var_8))));
            arr_30 [i_1] [i_1] [i_1] = (((((var_6 ? (arr_4 [i_7]) : 2147483629))) ? (arr_20 [i_1 + 1]) : var_9));
            var_32 |= (arr_2 [i_1] [i_1 + 1]);
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_34 [i_1] [i_1] [i_1] = (-((((arr_17 [i_1] [i_8]) > (arr_29 [i_8])))));
            arr_35 [i_1] = ((~(var_3 + 83)));
            var_33 += -var_2;
            var_34 = (~var_15);
            var_35 = ((!(((var_15 ? 30720 : 1)))));
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                arr_50 [i_9] [i_10] [i_11] [i_10] [i_10] [i_10] = (min((max((((arr_4 [i_11]) ? -91 : -2618021156729037869)), -1425223942)), (((arr_45 [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 4]) ? (arr_9 [i_9] [i_9] [i_9]) : 77))));
                                arr_51 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_11] = ((~(!252)));
                                var_36 = (1 < (((!(((var_1 + (arr_21 [i_9] [i_11] [i_11] [i_11] [i_11]))))))));
                                arr_52 [i_11] [i_12] [i_11] = (arr_14 [i_10]);
                            }
                        }
                    }
                }
                arr_53 [i_9] [i_9] [i_10] = max((max(((((arr_40 [i_9] [i_9] [i_9]) ? 16098 : 0))), (arr_1 [8] [i_9]))), (((~(arr_12 [i_9])))));
            }
        }
    }
    #pragma endscop
}
