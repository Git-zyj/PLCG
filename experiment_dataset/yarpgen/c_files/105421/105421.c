/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_9 [15] [i_1] [i_2] [i_3] = ((((((var_1 - var_1) ? ((min((arr_7 [i_1] [15] [i_1]), var_5))) : var_4))) ? ((((-2546515896606103815 - var_4) || ((var_7 || (arr_4 [i_0] [19])))))) : ((max((arr_4 [i_0] [i_0]), var_2)))));
                        arr_10 [i_3] [12] = (((arr_1 [i_2]) ? (arr_7 [i_0] [i_1] [i_2]) : ((var_0 ? var_9 : (min(2546515896606103814, 65514))))));
                        arr_11 [i_3] [5] = var_7;
                        var_11 = (max((arr_6 [i_3]), ((max(var_9, (arr_6 [i_0]))))));
                    }
                }
            }
        }
        var_12 = (max(var_12, (min((((((arr_6 [i_0]) + 2147483647)) << (((((arr_6 [i_0]) + 74)) - 22)))), ((((~0) < (~var_1))))))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_15 [2] = (((arr_14 [i_4]) ? var_6 : -11));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_13 = (((arr_8 [i_4] [i_5]) ? (arr_12 [i_5]) : (arr_14 [i_5])));
            arr_18 [17] [17] [4] = ((-113 ? 2546515896606103800 : 134217712));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            arr_22 [i_4] [i_6] = (arr_14 [i_6]);
            var_14 = ((arr_12 [i_6]) ? (arr_17 [i_4] [i_4]) : (arr_17 [i_4] [i_6]));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_15 = (arr_14 [i_4]);
            var_16 = ((-5168045602679417550 ? ((var_2 ? var_2 : var_4)) : (arr_6 [i_4])));
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            var_17 *= (((arr_24 [i_4] [i_8]) * 0));

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_18 = (-(arr_2 [i_8]));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_37 [i_8] [i_8] [i_9] [i_10] [13] = (0 <= 0);
                            arr_38 [i_4] [i_8] [i_4] [i_10] [i_11] [i_11] &= ((((-(arr_6 [i_4]))) > (arr_7 [i_4] [i_8] [i_9])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_19 = ((~(arr_36 [i_8] [i_12] [i_9])));
                            var_20 = 134217712;
                            arr_45 [i_8] [i_8] = (((arr_5 [i_13 + 1]) ? -11 : var_3));
                        }
                    }
                }
            }
            var_21 = (((((var_6 ? var_3 : 101))) ? (arr_21 [i_8]) : var_2));
            var_22 = (((arr_34 [i_4] [i_8] [i_8] [i_4] [i_8]) ? (arr_29 [i_4] [i_8] [i_4]) : (((arr_4 [i_8] [20]) ? (arr_32 [i_4] [i_4] [i_4] [13]) : -330505692))));
        }
    }
    var_23 = (-64 * -8);
    var_24 *= (max(((var_1 >> (var_9 + 2017703872214207831))), var_4));
    #pragma endscop
}
