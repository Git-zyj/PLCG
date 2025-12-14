/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = ((var_12 ? ((var_3 ? (((min(var_4, var_12)))) : ((var_6 ? var_4 : var_0)))) : var_9));
    var_15 = (min(var_15, (((((!(!-1339064958))) ? (~-1339064962) : (min(((max(var_2, var_5))), var_7)))))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_16 = (min((min((arr_0 [i_0 + 3]), (arr_0 [i_0 + 2]))), (((arr_0 [i_0 + 3]) / (arr_0 [i_0 - 1])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = var_3;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_9 [i_0] [i_0 + 1] [i_0] [i_1] = (!1339064957);
                arr_10 [i_1] = (var_8 ? (arr_4 [i_0 - 2] [i_0 + 3]) : (arr_6 [i_0 + 3] [i_1] [i_2]));
                var_17 = (!1339064961);

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_18 = (arr_3 [i_0] [i_0 + 3] [i_1]);

                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_19 = (var_1 ? var_3 : 1339064975);
                        arr_16 [i_4] [i_1] [i_2] [i_0] [i_1] [i_0] = 1339064948;
                        var_20 = (max(var_20, var_1));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1] = 68;
                        arr_20 [i_1] = ((241 ? 1339064936 : var_8));
                    }
                    var_21 = (max(var_21, ((-(arr_12 [i_3])))));
                }
                for (int i_6 = 3; i_6 < 7;i_6 += 1)
                {
                    var_22 = ((arr_7 [i_2]) ? var_3 : (var_0 >= -1339064949));
                    var_23 = (238 ^ 1339064954);
                    var_24 = ((((!(arr_7 [i_6 - 1]))) ? (arr_7 [i_0 + 1]) : ((-733991321 ? -3088783935887234342 : 2774))));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_27 [i_0 + 2] [i_1] [i_0] [i_1] [i_7] = (~62747);
                    arr_28 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = 57939;
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_25 = (min(var_25, -var_3));

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_26 = -3088783935887234342;
                        var_27 = 52;
                    }
                }
            }
            arr_34 [i_0] [i_1] = (15 && 16808085872711791933);
        }
        var_28 = ((-(max(-1, 733991326))));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            var_29 = (((arr_35 [i_11 + 1] [i_10]) ? (arr_35 [i_11 + 1] [i_11 + 2]) : (arr_35 [i_11 + 1] [i_11])));
            var_30 = (((var_11 ? var_4 : var_0)));
        }
        arr_40 [i_10] = arr_35 [i_10] [i_10];
    }

    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_31 = ((1339064948 ? ((((min(var_8, var_11))) + (min((arr_41 [i_12]), 62767)))) : var_5));
        var_32 = (min(var_32, (((-(min(-var_2, ((max(236, 15))))))))));
    }
    #pragma endscop
}
