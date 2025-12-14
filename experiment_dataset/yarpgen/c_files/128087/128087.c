/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [8] [i_0] [18] = (min((0 - 0), 0));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_18 -= (min(65535, 3746328642));
                    var_19 = (~0);
                }
                arr_7 [i_0] [i_0] = (!56683);

                for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] = (((arr_11 [i_3 + 1] [i_3 - 1]) ? (((((var_14 ? (arr_6 [i_0]) : (arr_3 [i_0] [i_1] [i_3]))) >= (arr_2 [i_0])))) : (!var_10)));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] = (((((arr_2 [i_0]) >= -1)) ? -var_7 : (min((min(var_8, -8900818810264388300)), (var_12 * var_3)))));
                        arr_16 [i_1] [i_0] = (min(((max(((4 ? -1 : 1)), ((-(arr_5 [5] [i_1] [i_3 + 3] [i_4])))))), ((0 ? 14 : (max(0, (arr_5 [i_0] [i_1] [i_3 + 3] [i_4])))))));
                        arr_17 [i_0] = (arr_8 [7] [i_0] [i_4]);
                        var_20 = (((32767 ? var_6 : (min(-18, 0)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_3] [i_0] = (var_11 - var_14);

                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_3 - 1] [i_3] [i_5] [i_0] = var_8;
                            arr_25 [i_0] [i_1] [i_3 + 2] [i_5] [i_6] = ((1 ? 18446744073709551615 : 6));
                            arr_26 [i_0] [i_0] = (((!87) ? ((var_13 ? -5 : var_1)) : (arr_23 [i_3 + 1] [i_3] [i_3 + 2] [i_3] [i_3 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_0] [1] = -var_6;
                            arr_30 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] = 3584;
                            var_21 = (min(var_21, (~var_5)));
                            var_22 = ((~((4412113531793212262 ? 32756 : 14))));
                        }
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_3 + 1] [i_3 + 1] [i_8] = ((var_3 ? var_6 : (arr_18 [i_3 - 1] [i_3] [i_8 - 2] [i_0])));
                            var_23 = (((arr_9 [i_0] [i_8 - 2] [i_8 + 1] [i_8]) ? (!2147483647) : var_7));
                        }

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_1] [i_3] [i_0] [14] [i_9] = (~(arr_5 [1] [18] [i_3 + 2] [i_5]));
                            var_24 = (arr_18 [i_0] [i_1] [i_3 + 3] [i_0]);
                        }
                        var_25 = (!-8900818810264388282);
                        arr_38 [i_0] = (((arr_11 [i_0] [i_3 + 2]) ? (arr_11 [i_0] [i_3 + 1]) : (arr_11 [i_0] [i_3 + 3])));
                    }
                }
                for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_26 &= (--127);

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_27 = (max(var_27, (((((min(-2103380171, 0))) ? ((var_1 ? var_3 : var_7)) : (((((10 ? 0 : 41657)) > (arr_20 [i_10 + 3] [i_1] [i_1] [i_11])))))))));
                        arr_43 [i_0] [i_1] [i_10 - 1] [i_10 - 1] = (((-((var_0 ? var_11 : var_7)))));
                    }
                }
                var_28 = ((((!(arr_2 [i_0]))) ? (((var_13 || (arr_22 [i_0])))) : ((~(arr_20 [i_0] [i_1] [i_0] [i_1])))));
            }
        }
    }
    var_29 = (5 == 1114040818);
    #pragma endscop
}
