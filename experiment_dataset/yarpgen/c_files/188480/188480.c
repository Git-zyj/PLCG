/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 *= (((arr_0 [4]) ? (max(((243 ? (arr_1 [0] [i_0 + 1]) : var_1)), (((!(arr_0 [16])))))) : var_6));

        for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_8 [i_0 + 1] [i_0] [i_0] = (arr_2 [i_0]);

                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_16 = (max(217, (((-4294967291 << ((((var_5 ? var_8 : (arr_2 [i_0]))) - 8050)))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 = (max((((-(arr_7 [i_0] [i_1] [i_3] [i_1])))), (arr_10 [i_0])));
                        var_18 = (((min((((243 ? 243 : 250))), var_14)) & (217 <= 12)));
                        var_19 += (((((arr_0 [i_1]) ? var_4 : var_3))) ? ((max((arr_0 [i_1]), var_1))) : (((arr_0 [i_1]) & (arr_0 [i_1]))));
                        var_20 = (min(var_20, (((-((-(max(83, 4294967281)))))))));
                    }
                    var_21 = 20;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_22 = ((var_14 >> (4294967286 - 4294967242)));
                    var_23 = var_7;
                    var_24 = (max(var_24, (((~(arr_13 [i_1 + 2] [i_1 - 2] [i_1 + 3] [i_1]))))));
                    var_25 = (~48124);

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_26 |= (((arr_16 [i_0] [i_1] [i_6]) / (~var_10)));
                        var_27 *= (~14);
                    }
                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        var_28 = 3484682699;
                        var_29 = ((arr_5 [i_0] [i_5 + 1]) ? (arr_5 [i_0] [i_5 - 1]) : var_13);
                    }
                }
                for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_30 = (~4);
                        var_31 = (arr_22 [4] [i_1] [i_1] [i_1] [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_32 = ((((min((arr_18 [i_0 + 1] [i_0 + 1]), (arr_18 [i_0 + 1] [i_0 + 1])))) ? 243 : (min((arr_18 [i_0 + 1] [i_0 + 1]), var_3))));
                        arr_31 [i_0] [i_1] [i_1] [i_8] [i_10] = (min((max((arr_15 [i_0 + 1] [i_0 + 1] [i_8 - 1] [i_10] [i_10]), var_12)), 4));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_2] [i_0] [i_11] = (((~var_14) / ((((arr_28 [1] [19] [i_8 + 2] [i_11] [i_11]) ? (arr_28 [i_0] [i_1] [i_8 - 1] [1] [i_11]) : (arr_15 [i_2] [i_2] [i_8 - 1] [i_8] [i_11]))))));
                        var_33 = var_7;
                    }
                    var_34 = -4294967284;
                }
            }
            var_35 = (max(var_35, (13 == var_5)));
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 19;i_12 += 1) /* same iter space */
        {
            var_36 = (max(var_36, (((var_11 <= (8 <= 234))))));
            var_37 = (!(arr_24 [i_0] [i_12 - 2] [i_12]));
        }
        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            arr_42 [i_0] = var_6;
            var_38 = (min(((min(var_8, (max((arr_13 [i_0] [i_0] [i_13] [i_0]), (arr_4 [i_0] [i_0])))))), ((((max(3367135242, 217))) ? (((var_11 ? (arr_28 [i_0] [i_0] [13] [i_13 - 1] [i_0]) : var_8))) : (min(var_7, var_14))))));
            var_39 = (64054 << 7);
        }
        var_40 ^= (arr_1 [12] [12]);
    }
    var_41 = (max(8, ((((max(15, 2))) ? (!15) : var_9))));
    var_42 = min((max(217, 36)), (((((var_3 ? 1822065118 : var_9))) | var_0)));
    #pragma endscop
}
