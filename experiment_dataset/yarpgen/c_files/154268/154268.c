/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_12 -= ((-0 ? var_2 : ((-(arr_2 [8])))));
        var_13 -= (((((min(var_4, (arr_1 [i_0 - 2] [i_0 + 1]))))) == var_8));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 |= var_3;
        var_15 = (min(var_15, var_10));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 = -var_8;

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_17 = var_6;
                            var_18 += (arr_0 [i_2]);
                            var_19 = (max(var_19, (arr_2 [i_1])));
                        }
                    }
                }
                var_20 ^= (((arr_11 [i_3] [i_2] [i_2] [i_3]) > var_4));
                var_21 = (((arr_14 [11] [i_1] [i_2] [i_3] [i_3]) - (arr_9 [14] [1] [1] [6])));
                arr_15 [i_1] [i_1] = var_6;
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
            {
                var_22 = var_2;
                arr_18 [i_1] [i_2] [i_2] [i_1] = (((((var_3 ? (arr_12 [i_1] [i_2] [2] [i_1] [i_2] [i_6]) : var_9))) ? (((arr_13 [i_1] [i_1] [i_1] [i_6] [i_6] [i_6]) ? (arr_14 [i_6] [11] [i_1] [i_1] [i_1]) : var_0)) : (arr_14 [1] [i_1] [1] [i_2] [i_6])));
                var_23 ^= (arr_2 [i_2]);
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                arr_21 [i_1] = (!var_0);
                arr_22 [i_2] [6] [i_7] [i_2] &= ((((((arr_6 [i_1]) ? 1420743730 : (arr_16 [i_1])))) <= (arr_12 [3] [3] [i_1] [3] [3] [i_1])));
                arr_23 [i_1] [i_2] [i_1] = ((-var_6 ? (arr_8 [i_1] [i_1] [i_1]) : (arr_9 [i_1] [i_2] [i_2] [i_1])));
                var_24 = ((var_2 ? (~var_8) : var_10));
                var_25 = (max(var_25, var_2));
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_26 *= arr_19 [i_8];
            arr_28 [i_1] = (((arr_24 [i_1] [i_1] [i_1]) ? var_9 : (arr_26 [1] [i_8])));
            var_27 = (max(var_27, (arr_5 [i_1] [i_1])));

            for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_28 = (arr_8 [i_9 - 1] [i_1] [i_1]);
                arr_32 [i_9] [i_1] [i_1] [1] = (((arr_17 [i_1] [i_1]) / (arr_2 [i_9 - 1])));
                var_29 = (min(var_29, var_2));
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_30 = ((var_4 && (arr_24 [i_10] [i_10 - 1] [i_10])));
                arr_36 [i_1] = 1;
                arr_37 [i_1] [i_8] [i_1] = (!-127);
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                arr_40 [i_1] [i_1] = (((((arr_10 [i_1] [i_11] [i_1] [i_1] [i_1]) ? -114 : (arr_6 [8]))) % (var_10 ^ var_2)));
                var_31 = (var_7 - -3738814874194370347);
                arr_41 [i_1] [i_8] = ((arr_3 [i_11]) ? (arr_7 [i_1] [i_1] [i_11]) : -1420743730);
                var_32 ^= (((arr_30 [i_8] [i_11] [4] [i_8]) + (arr_39 [6] [i_8] [i_8])));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_33 = (min(var_33, (((~(arr_7 [i_1] [i_8] [i_12]))))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_34 = var_6;
                            var_35 ^= 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 12;i_16 += 1)
                    {
                        {
                            arr_54 [i_1] [i_1] [i_12] [i_1] [i_1] = ((var_6 > (arr_13 [i_16 + 3] [i_16 + 2] [i_1] [i_16 - 3] [i_16 - 2] [i_16 + 1])));
                            arr_55 [i_1] = (((arr_45 [i_1] [i_16 + 2] [i_16 - 3] [i_16 + 3] [i_1]) == (arr_2 [i_16 + 2])));
                        }
                    }
                }
                var_36 -= (((~var_11) ^ (((1 ? 1420743761 : -114)))));
            }
        }
        for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
        {
            var_37 -= (((arr_5 [i_1] [i_1]) << ((-32752 ? var_2 : (arr_26 [i_1] [i_17])))));
            var_38 = 1;
        }
    }
    var_39 -= -var_1;
    #pragma endscop
}
