/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = 3603140864106486765;
        var_15 = 31;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_16 = (max((((((min(var_4, 31216))) + (arr_6 [i_1 + 2] [i_1 - 1])))), (max(var_13, (arr_6 [i_1 + 2] [16])))));
        var_17 = (arr_4 [i_1 - 1] [i_1 + 2]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    var_18 *= var_8;
                    var_19 &= (arr_7 [18] [18]);

                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, (arr_6 [i_2 + 1] [i_3 + 1])));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_21 = (max(var_21, (arr_19 [19] [14] [i_4] [i_5] [i_6])));
                            var_22 = (arr_15 [i_2]);
                            var_23 = (((arr_10 [i_2]) || 4294967288));
                            var_24 += (((arr_4 [i_2 + 2] [i_2 + 2]) & var_0));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [i_2] [i_2] [i_7] = (arr_5 [i_2] [i_2]);
                            arr_25 [i_4] [18] [18] [i_4] [21] [i_2] [i_4 - 1] = ((-((-(arr_12 [i_2])))));
                            var_25 = (max(var_25, (((~(arr_5 [i_2 + 1] [i_5]))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_2] [i_3] [i_2] [i_2] [12] = ((1 << (31222 - 31214)));
                        var_26 = -var_11;
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_27 = (1 % 113797159);
                        arr_31 [i_2] [i_3] [i_2] [i_2] = (((arr_19 [1] [i_3] [i_3] [i_3] [i_3]) ? (arr_4 [i_2] [i_2]) : (arr_30 [i_2 + 2])));
                    }
                }
            }
        }
        var_28 = (max(var_28, (((((((arr_26 [i_2] [i_2] [i_2] [i_2] [i_2]) >= (arr_17 [i_2] [i_2] [i_2] [0] [i_2] [5])))) / var_7)))));
        arr_32 [i_2] = (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]);
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        var_29 = (~4047877219);
                        arr_42 [i_10] [i_10] [i_12] [8] = (max((arr_29 [i_10] [22] [22] [i_10]), var_10));
                        var_30 = (max(var_30, (max(var_5, var_2))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 8;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 8;i_16 += 1)
                {
                    {
                        var_31 -= -3603140864106486772;
                        arr_53 [i_10] [i_10] [i_10] [0] [i_10] [0] = 7040;
                    }
                }
            }
        }
        var_32 = (((!(arr_5 [i_10] [i_10]))));
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 16;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            {
                var_33 &= (max(((4047877211 ? (arr_4 [i_17] [i_17]) : (arr_4 [i_18] [i_17]))), -65459));
                var_34 = (min((arr_54 [i_17]), ((((arr_55 [i_17]) != (max(var_6, -3603140864106486751)))))));
            }
        }
    }
    #pragma endscop
}
