/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [0] [0] &= (min((max((arr_2 [i_0]), ((var_9 & (arr_0 [i_1]))))), 3593153992));

                for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    arr_7 [20] [0] |= (3593153992 * var_2);
                    var_20 = var_13;
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] = ((((((701813297 ? 14865259437862131582 : (arr_8 [i_1] [i_0])) >= ((((arr_2 [i_3]) ? var_8 : (arr_5 [i_0] [i_1] [i_3] [i_1])))))))));
                    var_21 = ((min(-2832, (arr_10 [i_3 + 1] [i_1] [i_3 - 1]))));
                }
                for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_22 = var_7;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_23 = 1;
                        arr_19 [i_0] [i_0] [i_4] [i_1] = (arr_5 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 1]);

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_24 = (16691220661642467547 || 16691220661642467547);
                            arr_22 [i_1] [i_1] [i_5] [i_5] [i_6] = (((~-96) ? (arr_18 [i_0] [i_4 + 1] [i_5] [13]) : (((arr_14 [i_4 + 1] [i_1] [i_4]) + (arr_1 [i_1])))));
                            var_25 = ((-105 ? ((var_13 << (var_13 - 7879547148667668077))) : -12));
                        }
                        arr_23 [i_1] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1] [i_4] = 127;
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_26 = max((arr_0 [i_7 + 1]), (arr_0 [i_7 + 1]));
                        var_27 = (min(var_27, ((((((1 >> (-25215 + 25234)))) ^ (((max(1, var_11)) | -25207)))))));
                        var_28 = ((((((arr_9 [i_4 + 2]) ? (arr_16 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 + 2]) : (arr_16 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 1])))) ? ((min(var_12, -25215))) : (((arr_16 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 2]) ? (arr_16 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 + 2]) : (arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 - 1])))));
                        arr_26 [i_1] [i_1] [i_1] [i_1] = ((((((~(arr_5 [i_7 - 1] [i_4 + 1] [i_4 + 2] [i_4]))) + 2147483647)) >> (((((arr_5 [i_7 + 1] [i_4 + 2] [i_4 + 2] [i_1]) ? (arr_5 [i_7 - 1] [i_4 + 2] [i_4 - 1] [i_4]) : (arr_5 [i_7 - 1] [i_4 - 1] [i_4 + 1] [i_4]))) - 37050))));
                    }
                    arr_27 [i_0] [i_1] [i_1] [i_1] = ((((!(arr_13 [18]))) ? (arr_14 [i_0] [i_0] [i_4]) : (((((62718 && (arr_5 [i_0] [i_0] [0] [i_0]))) ? var_1 : (!49))))));
                    var_29 = (1 * 2817);
                }
                var_30 = (arr_9 [i_0]);
                arr_28 [i_0] [i_1] [i_1] = (((arr_17 [i_1] [i_0] [i_0] [i_0]) && var_14));
            }
        }
    }
    var_31 |= var_1;
    #pragma endscop
}
