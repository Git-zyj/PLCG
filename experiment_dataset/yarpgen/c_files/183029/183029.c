/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = var_13;
        arr_2 [i_0] [i_0] = -1;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_18 = ((var_9 << (((-723406757747746731 + 723406757747746761) - 23))));
            arr_8 [10] [i_2] [i_1] = var_16;
            arr_9 [i_1] [i_1 + 1] [i_1] = ((var_7 ? -1 : (arr_4 [i_2])));
            var_19 = var_7;
            var_20 = (arr_5 [i_1]);
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_12 [24] [i_1 - 3] [24] &= ((arr_11 [i_3 + 1]) ? (arr_3 [i_1 - 2]) : (arr_11 [i_3 + 4]));
            arr_13 [i_1] [i_1] = (((((var_15 ? (arr_0 [1]) : (arr_6 [i_1 - 2] [i_1])))) ? (arr_6 [i_1] [i_1]) : (arr_5 [i_1])));
            var_21 = 0;
        }
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_22 = 26;
                            var_23 = (max(var_23, -415253186280884019));
                            var_24 += arr_11 [i_1 - 1];
                        }
                    }
                }
            }
            arr_24 [i_1] = (((arr_1 [i_4 + 1]) ? (arr_1 [i_4 + 1]) : 0));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_25 = (min(var_25, ((var_11 ? ((var_1 ? -415253186280884019 : 1)) : 415253186280884018))));
            arr_27 [i_1] = (((arr_5 [i_1]) - (arr_5 [i_1])));

            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                var_26 = -1;
                arr_30 [i_1] [i_8] [i_1] = (((var_11 ? (arr_21 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1] [i_8] [22]) : (arr_1 [i_9]))));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_27 = (arr_31 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1]);
                arr_33 [1] [i_8] [i_1] [1] = (-2147483647 - 1);
            }
        }
        arr_34 [i_1] [i_1] = (-2147483647 - 1);
        var_28 = (max(var_28, (arr_26 [i_1] [i_1 + 2])));
        var_29 = ((-(arr_10 [i_1 - 1])));
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
    {
        arr_38 [i_11] = (arr_14 [i_11] [i_11] [i_11 - 3]);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 24;i_13 += 1)
            {
                {
                    arr_44 [i_12] = var_13;
                    arr_45 [i_11] [i_11] [i_12] = -2147483619;
                    arr_46 [i_11 - 2] [i_12] [i_12] [i_12] = ((((((arr_26 [i_11] [i_12]) ? (arr_7 [i_11] [i_12]) : 415253186280884018))) ? (arr_4 [i_11 - 2]) : (arr_1 [i_11 + 1])));
                }
            }
        }
    }
    var_30 = (max(var_7, var_1));
    #pragma endscop
}
