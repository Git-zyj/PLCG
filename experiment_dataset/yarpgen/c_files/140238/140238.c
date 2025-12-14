/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((+(min((((arr_1 [i_0] [10]) - (arr_0 [i_0]))), ((~(arr_1 [5] [i_0])))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_17 = ((-(arr_3 [i_0] [7] [i_1 - 3])));

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_18 = ((((arr_7 [0] [i_1] [i_0]) >= (arr_1 [i_0] [i_1]))));
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_7 [i_4] [3] [i_0]);
                        }
                    }
                }
                arr_13 [i_0] = (arr_9 [i_0] [i_1 - 2] [i_2 - 1] [i_0] [i_2 + 1]);
            }
            arr_14 [i_0] [12] |= (-(arr_6 [10] [i_0] [10] [i_0]));
            arr_15 [i_0] [15] = (((arr_6 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]) | (arr_6 [i_1 + 1] [i_1 - 2] [1] [i_1 - 1])));
            arr_16 [i_0] = (((arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 3]) <= (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_19 += ((((83 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_6 [14] [i_0] [14] [14]))) / (78 || 21)));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_20 ^= (max(((min(0, (arr_6 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 - 1])))), (arr_6 [i_6 + 2] [i_6 + 1] [i_6 - 1] [i_6 - 1])));
                            arr_26 [i_5] [i_5] [i_6] [i_7] [17] [i_0] [i_5] = (max(1147953033, ((((((arr_9 [i_0] [i_7] [11] [i_0] [i_0]) ? (arr_3 [i_0] [i_5] [i_0]) : 255)) >= (arr_7 [i_0] [i_0] [i_0]))))));
                        }
                    }
                }
            }

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_21 = (max(var_21, -3327687076));
                arr_29 [i_0] = (arr_18 [i_0] [i_0]);
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (((((((arr_17 [i_0]) ? (arr_1 [i_10] [6]) : (arr_21 [1] [i_10] [4] [3])))) <= (((arr_21 [i_0] [i_10] [i_0] [i_0]) ? (arr_17 [7]) : (arr_3 [8] [8] [i_10]))))))));
            var_23 ^= (((~0) & (arr_23 [6] [i_10] [i_10] [i_10] [i_10] [3])));

            for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
            {
                var_24 = ((!((((arr_28 [1] [1] [i_11] [i_11]) ? 5718530417955112735 : 2147483647)))));
                arr_34 [i_0] [7] [i_10] [i_0] = (arr_19 [i_0] [i_0] [i_11] [i_10]);
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
            {
                var_25 = (min(var_25, (arr_5 [12] [i_0] [i_0])));
                arr_38 [i_0] [i_0] [i_0] = (((arr_30 [i_0] [i_0] [i_0]) >> (((arr_2 [i_10] [i_12]) - 13573))));
                arr_39 [i_0] [i_0] [i_0] = (9223372036854775807 - 562949953421312);
            }
        }
        arr_40 [i_0] [i_0] = (-((4577583832767760764 + (-2147483647 - 1))));
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        var_26 -= 9198;
        arr_44 [i_13] [1] &= (arr_42 [6]);
    }
    var_27 |= 21023;

    for (int i_14 = 4; i_14 < 17;i_14 += 1)
    {
        var_28 = ((~(min((arr_46 [i_14 + 1]), (arr_46 [i_14 - 3])))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                {
                    var_29 ^= ((-(arr_46 [i_16])));
                    var_30 = ((63401788 ? (29 - 0) : (arr_47 [i_16])));
                }
            }
        }
    }
    #pragma endscop
}
