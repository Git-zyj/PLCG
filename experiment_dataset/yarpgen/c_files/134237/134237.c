/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_10 ? (((max(var_1, var_11))) : var_6))));
    var_17 = (min(var_17, (((max((var_4 - var_1), var_11))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, (((~(arr_1 [i_0] [i_0]))))));
        var_19 ^= arr_0 [i_0];

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_1] [3] = ((!(var_13 < var_15)));
            var_20 = (((var_0 % var_9) >= var_8));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                arr_13 [i_0] [i_0] [7] [i_2] = ((var_1 != (arr_12 [i_0] [i_0] [i_3 + 1])));
                var_21 *= var_3;
                var_22 = ((((arr_4 [i_0] [4]) * var_15)));
                var_23 = (min(var_23, 248));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_24 = ((var_5 ? var_7 : (var_15 >= 250)));
                    var_25 += ((var_11 && ((!(arr_11 [12] [i_0])))));
                }
                for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_26 &= (arr_16 [i_6 + 2] [i_6 + 2] [4] [i_6] [i_6] [i_6]);
                    var_27 &= ((~(arr_15 [i_6 - 1] [i_0] [i_0] [i_6 + 1])));
                    var_28 = (min(var_28, (((var_1 ? (arr_19 [i_4] [i_0] [i_6 - 1] [i_4] [i_6 + 2] [12]) : var_14)))));
                    var_29 = 1046921800132282285;
                    arr_20 [i_2] [i_2] = (8401410899556469593 ? 57 : -82);
                }
                for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    var_30 = -12750;
                    arr_23 [i_0] [i_2] [i_4] [10] [12] [1] = (((arr_14 [i_2] [i_7 + 1] [i_7 + 1]) ? (arr_14 [i_2] [i_7 + 2] [i_7 - 1]) : (arr_14 [i_2] [i_7 - 1] [i_7 + 1])));
                    var_31 = ((((arr_18 [i_0] [i_0] [i_2] [7]) % 248)));
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    var_32 -= (-9223372036854775807 % -29214);
                    var_33 = (((var_10 * var_0) ? (119 - 133) : var_10));
                    var_34 = (min(var_34, var_11));
                }
                var_35 *= (117 - -104);
                var_36 = var_6;
                arr_26 [i_2] = 49;
            }
            arr_27 [i_2] = -57;
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 11;i_9 += 1)
    {
        var_37 = (max(var_37, (arr_24 [i_9] [i_9] [14] [0])));
        var_38 = (arr_0 [i_9]);
    }
    #pragma endscop
}
