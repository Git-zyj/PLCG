/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_6;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 += var_16;
            arr_7 [i_0] = var_2;
            var_19 = var_2;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_20 = (max(var_20, var_7));
            var_21 = var_6;
            var_22 = (122076323 & -2761);
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_4 = 4; i_4 < 12;i_4 += 1)
            {
                var_23 = ((~(arr_6 [i_4 - 1] [i_3 + 1] [i_3 + 1])));
                var_24 = (((arr_8 [i_3 + 1] [i_4 - 4]) ? (arr_8 [i_3 + 1] [i_4 + 3]) : var_15));

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    var_25 = (max(var_25, 251));

                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        arr_23 [i_0] [i_3] [i_0] [i_4] [i_0] [i_3] [i_0] = (arr_16 [i_6 - 2] [i_3 - 1]);
                        var_26 = (-21986842 / 2760);
                        var_27 = (((var_14 ? 951977414 : 671872034)));
                        arr_24 [i_3] [i_3] [i_4] [i_3] [i_3] = (arr_17 [i_0] [i_3] [i_5] [i_5]);
                    }
                    var_28 -= (((arr_5 [i_0] [i_3 + 1]) ? (arr_1 [i_3 + 1]) : var_14));
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    var_29 -= ((((var_2 ? (arr_5 [i_0] [i_0]) : -2761)) == var_15));
                    var_30 += (arr_26 [i_7]);
                }

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_29 [i_8] [i_8] [i_3] [i_0] [i_0] = (arr_19 [i_4 - 4] [i_8] [i_8] [i_4 - 4] [i_3 + 1] [i_3]);
                    var_31 = (min(var_31, (arr_21 [i_3 + 1] [i_3] [i_3 + 1] [i_4 - 2] [i_4 - 2])));
                    var_32 -= var_7;
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_32 [i_3] [i_4] [i_0] [i_3] = (arr_13 [i_3]);
                    var_33 |= ((3723876874946876030 < (((10543159935263332164 ? 122076310 : 9223372036854775807)))));
                    arr_33 [i_0] [i_3] [i_3] [i_0] [i_3] = ((~(arr_14 [i_0] [i_0] [i_0] [i_3])));
                }
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_36 [i_0] [i_0] [i_3] = (arr_34 [i_3] [i_3]);
                arr_37 [i_3] = ((((((((225 ? var_8 : (arr_21 [i_0] [i_10] [i_10] [i_10] [i_10])))) ? (arr_5 [i_3] [i_3]) : var_12))) ? ((((((-671872035 ? 65535 : 65523))) ? ((((arr_17 [i_10] [i_3] [i_3] [i_3]) ? var_14 : var_9))) : (((arr_28 [i_0] [i_3] [i_3] [i_3] [i_0]) ? var_16 : (arr_1 [i_0])))))) : (((arr_31 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1]) ? (((arr_17 [i_0] [i_3] [i_3] [i_0]) * (arr_14 [i_0] [i_3] [i_0] [i_3]))) : var_14))));
                arr_38 [i_0] [i_0] [i_10] [i_3] = (((((arr_34 [i_3] [i_3 + 1]) > (arr_3 [i_3 - 1] [i_3] [i_3 - 1]))) ? (((arr_3 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (arr_3 [i_3 - 1] [i_3] [i_3 - 1]) : (arr_34 [i_3] [i_3 - 1]))) : ((~(arr_34 [i_3] [i_3 + 1])))));
            }
            var_34 = (min(var_34, (arr_16 [i_3 - 1] [i_3 - 1])));
        }
    }
    var_35 = var_7;
    #pragma endscop
}
