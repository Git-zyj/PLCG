/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(943675860, var_7));
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 += var_0;
        var_17 = (min(var_17, ((((arr_1 [i_0]) >= (min(var_11, var_8)))))));
        var_18 = (min(var_18, (((0 ? 37822 : 32767)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((((~(arr_2 [i_1])))) ? (((arr_6 [i_1] [i_1]) - var_6)) : ((min(-32767, 32767)))));
        arr_8 [i_1] = (arr_3 [i_1]);
        var_19 = var_10;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 = (max(((~(arr_6 [i_2] [i_2]))), ((min(var_3, (arr_5 [i_2] [i_2]))))));
        var_21 = (min((((arr_10 [i_2] [i_2]) ? (arr_10 [i_2] [i_2]) : var_9)), (arr_4 [i_2])));
        arr_11 [i_2] &= var_1;
        arr_12 [i_2] [i_2] = (arr_10 [i_2] [i_2]);

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_22 += (((((min(var_1, var_6)) ? var_12 : (arr_6 [i_3 + 1] [i_3 + 1])))));
            var_23 = (min(var_23, var_1));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_24 ^= (arr_4 [i_2]);
            arr_19 [i_4] = (!((min(var_3, (arr_0 [i_4])))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            arr_23 [i_2] [i_2] [i_2] = (((arr_5 [i_5 - 1] [i_5 + 1]) | (arr_5 [i_5 + 1] [i_5 - 1])));
            var_25 = (min(var_25, (((((((arr_18 [i_5 - 2]) ? (arr_10 [i_5 - 1] [i_5]) : (arr_18 [i_2])))) || (arr_6 [i_5 - 1] [i_5 + 1]))))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_28 [i_2] [i_5] [i_2] [i_2] [i_2] [i_6] |= 36;
                    var_26 = (min(var_26, (!15)));
                    var_27 = (((arr_14 [i_5 - 2] [i_5 - 1] [i_5 - 1]) ? var_5 : (arr_26 [i_5 - 2] [i_6] [i_7] [i_7] [i_7] [i_6])));
                    var_28 = (arr_4 [i_7]);

                    for (int i_8 = 4; i_8 < 20;i_8 += 1)
                    {
                        var_29 = ((var_9 & (arr_17 [i_2])));
                        var_30 = (min(var_30, (((var_4 ? (arr_16 [i_6] [i_7]) : (arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                        var_31 = (arr_22 [i_2] [i_5 - 1]);
                        var_32 = ((!(arr_24 [i_6] [i_6])));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_34 [i_9] [i_9] [i_9] [i_9] [i_5 - 1] [i_2] = (((arr_16 [i_6] [i_6]) < -var_9));
                        arr_35 [i_2] [i_5] [i_2] [i_9] [i_9] = ((var_7 & ((var_6 ? var_7 : var_8))));
                        arr_36 [i_2] [i_9] [i_6] [i_7] [i_9] = var_0;
                    }
                }
                arr_37 [i_2] [i_5] [i_6] = (arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [2]);
                var_33 = (arr_33 [i_2] [i_2] [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1]);
                var_34 = (((arr_22 [i_5 - 1] [i_2]) ? (arr_22 [i_5 - 2] [i_5 - 2]) : (arr_22 [i_5 - 1] [i_5])));

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_40 [i_2] [i_2] [i_6] [i_6] [i_10] = (((arr_1 [i_5 - 2]) & var_7));

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_35 = var_12;
                        var_36 = (var_2 || var_3);
                    }
                    for (int i_12 = 3; i_12 < 21;i_12 += 1)
                    {
                        var_37 = (min(var_37, ((((arr_13 [i_5 + 1] [i_12 + 1]) ? (arr_29 [i_12 + 1] [i_5] [i_6] [i_5 - 1] [i_5 - 2] [i_6] [i_5 - 1]) : var_2)))));
                        arr_48 [i_2] [i_2] = var_13;
                        arr_49 [i_2] [i_2] [i_2] [i_10] [i_12] = ((-(arr_10 [i_5 + 1] [i_5 + 1])));
                    }
                    var_38 = (min(var_38, (!-var_5)));
                    arr_50 [i_2] [i_5] = (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    var_39 = (((-(arr_24 [i_5 - 1] [i_2]))));
                }
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                var_40 = (((var_4 || (arr_47 [i_2] [i_2]))));
                var_41 = (arr_52 [i_2] [i_5 + 1]);

                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_42 = (min(var_42, (((arr_16 [8] [i_5]) - (arr_27 [i_5] [i_5] [i_5])))));
                    arr_55 [i_2] [i_2] [i_13] [i_14] = ((var_8 ? (arr_16 [i_5 + 1] [i_13]) : (arr_16 [i_5 - 2] [i_14])));
                    var_43 ^= (((arr_25 [i_5 + 1] [i_5 - 2]) ? var_12 : (arr_25 [i_5 - 2] [i_5 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
