/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] |= -124;
                    var_16 = (arr_6 [2] [i_0 + 3] [i_0 - 1] [i_0]);
                }
            }
        }

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_17 = (((min(1802330817, 94)) / -2072299237));
            arr_12 [i_3] [11] [i_3] = (((((arr_7 [i_0 + 1] [i_3] [i_3] [i_3 + 1]) || var_2)) || (((2326399408 ? (arr_7 [i_0 + 1] [i_3 + 1] [i_0 + 1] [i_3 + 1]) : -55)))));

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_15 [i_0] [i_0 + 3] [i_3] [i_4] = (((((max(1475953619605771193, 1023531652)))) ? ((var_0 / ((32754 ? -1 : -119)))) : (arr_5 [i_0 + 2] [i_3] [i_0 + 2] [i_0 + 3])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((~(-1329132385 / -1))))));
                            var_19 = var_14;
                        }
                    }
                }
            }
            arr_22 [1] [1] |= ((((((arr_6 [i_3] [i_0 + 2] [i_3 + 1] [i_0 + 2]) / 1))) || ((min((1515858534 / 16148447369326713317), ((min(6, 4))))))));
            var_20 = ((var_15 ? var_8 : (arr_1 [i_3 + 1] [i_0 + 1])));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_21 = (min(var_21, 961094864));
            var_22 = ((((max((((arr_0 [9]) ? (arr_11 [i_7] [i_7] [i_7]) : (arr_20 [i_7] [i_7] [i_7]))), var_1))) || var_12));
            var_23 = arr_14 [i_0 + 3] [i_7];
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_32 [i_9] [i_8] = (arr_9 [i_8] [5]);
                        var_24 = var_3;
                        var_25 = var_3;
                        var_26 *= (((arr_27 [i_0 + 3]) / (((var_1 || (arr_21 [i_0 - 1] [i_8] [i_8] [i_10]))))));
                    }
                }
            }
            var_27 = -var_3;
            var_28 = (((arr_4 [i_8] [i_0 - 1] [1]) || ((!(arr_19 [i_0])))));
            var_29 = var_11;
            var_30 = (min(var_30, var_8));
        }
    }
    var_31 = (max(var_31, var_12));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                {
                    arr_43 [i_11] [1] [i_13] &= (121 || -65);
                    arr_44 [i_11] [i_11] [i_11] [5] = ((+((((arr_40 [i_11] [i_13 + 1]) || var_0)))));
                }
            }
        }
    }
    #pragma endscop
}
