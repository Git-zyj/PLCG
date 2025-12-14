/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_15 = (((arr_1 [i_2]) ? (arr_7 [i_0] [i_0 - 1] [i_3]) : (arr_4 [i_1 + 1] [i_1])));
                            var_16 = (min(var_16, (~var_8)));
                            arr_16 [i_4 + 2] [i_3] [i_3] [i_0 + 1] = ((26 << (764152138 - 764152134)));
                            arr_17 [i_0] [i_0] [i_3] [i_2] [i_3] [i_0] = var_13;
                        }
                        var_17 = 5;
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_18 = ((-((~(arr_12 [i_0] [1] [12] [1] [12] [i_5])))));
            var_19 = 9530951689624439242;
            var_20 = (((arr_7 [i_0 + 1] [1] [i_0 - 1]) >= (((~(arr_9 [i_0] [1]))))));
        }

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_21 = -1227346634;

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_22 = (((arr_5 [i_0] [10] [i_0 - 1]) << (arr_3 [i_0 + 1])));
                var_23 &= (((~var_12) && (((~(arr_5 [i_6] [i_6] [i_6]))))));
            }
        }
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    arr_32 [i_10] [i_10] [7] [7] = ((((((var_7 & (arr_14 [1] [i_9] [i_10] [1] [1] [1]))))) ? var_2 : var_0));
                    arr_33 [i_9] [i_9] [i_9] = ((((-1227346630 ? (((min(var_9, var_9)))) : (4257549635 / var_6))) << (((~var_4) + 55))));
                    var_24 = (((arr_20 [i_8]) ? (min((arr_14 [i_10] [i_10] [i_9] [i_9] [i_9] [i_8]), var_2)) : ((var_7 >> (arr_3 [i_10])))));
                    var_25 = (arr_29 [i_8]);
                    var_26 = min((((-(arr_25 [i_10] [6] [i_10])))), (arr_14 [12] [12] [12] [i_8] [i_9] [5]));
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            arr_37 [1] = (((((arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_11]) | 1227346634)) * (!7892502280946922284)));
            arr_38 [i_11] = (((arr_12 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [12] [i_11]) ? (arr_23 [i_8] [i_8 + 1]) : ((((var_10 || (arr_2 [i_8])))))));
            var_27 = 0;
            arr_39 [i_8] = ((arr_2 [i_8]) ? ((-127 ? -122 : 4294967294)) : (((var_4 << (14 - 14)))));
        }
        arr_40 [i_8 + 1] = ((((((var_7 ? 6 : var_11)) ? -33 : (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (((arr_28 [i_8]) + 2039505572))))))));
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
    {
        var_28 = ((var_9 ? (arr_42 [i_12] [6]) : (((((var_9 ? (arr_41 [i_12]) : var_6))) / var_2))));
        arr_43 [i_12] = ((((max((min((arr_42 [i_12] [5]), 84001174)), (arr_42 [i_12] [i_12])))) ? (3801314858 + var_4) : (((min(var_13, var_1))))));
        var_29 = (1612268599 > 32);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        arr_46 [i_13] = (var_5 < (arr_45 [i_13] [i_13]));
        var_30 = (arr_45 [i_13] [i_13]);
        var_31 = (arr_41 [i_13]);
        var_32 = ((39 ? 3 : -124));
    }
    #pragma endscop
}
