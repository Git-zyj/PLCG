/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((~((var_14 ? var_11 : 0)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (1 && 1);

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] = (min((arr_9 [i_2]), 5294258280190785837));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_21 = 4666112670708867815;
                            var_22 = (min(var_22, var_17));
                            var_23 = (max(var_23, (arr_7 [i_0] [i_2])));
                            var_24 = ((1 * (((arr_7 [i_2 + 2] [3]) - (arr_7 [i_2 + 4] [i_3])))));
                            arr_15 [i_4] [i_0] [i_2] [i_0] [i_0] = (93 > 149);
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_25 = (max(var_25, ((((185 ^ 93) ? (min((arr_4 [i_2 - 2]), var_11)) : (arr_4 [i_2 - 2]))))));
                            arr_19 [i_0] [4] [i_0] [i_3] [3] [i_0] [i_5] = 247;
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_26 = (max(var_26, -var_13));
                            arr_23 [i_0] = (arr_20 [i_0] [i_1] [i_1] [i_1] [i_1]);
                            var_27 = (max(var_27, var_2));
                            var_28 = var_13;
                        }
                        var_29 = (max(var_29, var_3));
                    }
                }
            }
            var_30 = (max(var_30, ((min(((var_9 ? 71 : (arr_3 [i_1]))), ((max((arr_3 [i_1]), (arr_3 [i_1])))))))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_28 [i_0] [i_7] [i_0] = ((((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7] [i_0]), var_18)))) * (min(var_16, (arr_25 [i_0] [i_0]))));
            var_31 = (((var_13 + 9223372036854775807) >> (var_1 + 2544744375773119239)));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_32 = var_2;
            var_33 = (min(var_33, (((-((var_0 ? (!var_2) : (((arr_5 [i_0] [i_8]) ? 1 : 1)))))))));
            arr_31 [i_0] [i_0] [i_0] = (min((max((min(var_8, var_6)), ((79 ? var_8 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_8] [1] [i_8]))))), var_5));
        }
        var_34 = (max(var_34, (arr_7 [i_0] [i_0])));
        var_35 = (max(var_35, (((3 ? ((1 ? 1 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_18 [i_0] [i_0] [i_0] [i_0] [12]))))));
    }
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        var_36 = 254;
        var_37 = (max(var_37, (arr_32 [i_9])));
        var_38 = ((((min(-4666112670708867816, var_6))) ? (-2147483647 - 1) : 1659));
        arr_35 [i_9] = 1;
        var_39 = (min(var_39, (((var_4 > (((!(arr_34 [i_9 - 2] [i_9 + 1])))))))));
    }
    var_40 = (((~9223372036854775789) * (((122 <= 238) ? (((1 ? var_6 : var_2))) : (var_14 | 1)))));
    #pragma endscop
}
