/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = 48;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_1] = (arr_0 [i_0]);
            arr_6 [i_1] [4] [i_1] = (arr_3 [i_0] [i_1]);
        }
        arr_7 [i_0] = ((~((var_18 ? (arr_2 [i_0] [i_0] [i_0]) : var_16))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_21 *= (arr_0 [i_2 - 1]);

            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                var_22 = (((((arr_10 [i_0] [i_2] [i_3] [i_0]) ? (arr_9 [i_0] [i_0]) : var_12)) > 58951));
                var_23 = ((0 ? (arr_2 [i_0] [i_2] [i_3]) : ((var_17 ? var_4 : -26833))));

                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    var_24 &= ((var_9 ? (arr_0 [i_4 - 3]) : var_10));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (1 ? (arr_0 [i_3 - 2]) : (arr_10 [i_2 - 1] [i_3 - 2] [i_4 + 1] [i_4 - 2]));
                    arr_15 [i_2] = ((-((102 ? 57605694 : 57605694))));
                }
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_25 += 0;
                arr_19 [i_0] [i_0] [i_0] [i_0] = (arr_4 [2] [i_2 - 1] [i_2 - 1]);
                var_26 = (arr_1 [i_2 - 1] [i_2 - 1]);
                arr_20 [i_5] [i_0] [i_0] = var_18;
            }
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_23 [i_6] = (arr_17 [i_0]);
            arr_24 [i_0] [i_6] = ((~(arr_2 [i_0] [i_6] [i_0])));
        }
        var_27 = ((-(arr_3 [i_0] [i_0])));
        arr_25 [i_0] [i_0] = (arr_16 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_28 = (arr_13 [i_7]);
        arr_29 [i_7] = ((var_7 ? var_3 : (!-5117)));
        arr_30 [i_7] [i_7] = ((!(arr_17 [i_7])));
    }
    #pragma endscop
}
