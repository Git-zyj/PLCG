/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((((arr_7 [i_0] [i_0]) | (arr_7 [i_0] [i_0]))) / (((var_12 ? (arr_2 [i_0]) : (arr_3 [i_0])))))))));
                var_15 = ((!(arr_5 [i_1 - 1])));
                var_16 = ((!(((~(arr_6 [i_1]))))));
                var_17 = var_10;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 = (max(var_18, (arr_0 [i_1 + 1] [i_2])));

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_1] [i_3 + 2] [i_3] = (((arr_5 [i_1 - 1]) ? (arr_5 [i_1 + 2]) : (arr_5 [i_1 + 1])));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_19 = (i_1 % 2 == zero) ? ((((((arr_5 [i_4]) % (arr_9 [10] [i_1]))) ^ ((-(arr_2 [i_3 + 3])))))) : ((((((arr_5 [i_4]) * (arr_9 [10] [i_1]))) ^ ((-(arr_2 [i_3 + 3]))))));
                            var_20 = ((~((0 | (arr_1 [i_2])))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5] [i_1] [i_3 + 2] [i_2] [i_1] [i_0] = var_3;
                            arr_18 [i_0] [i_0] [i_1] = (((arr_16 [i_0] [i_3 - 1] [i_1 + 2]) ? (arr_8 [i_0] [7] [i_1] [i_3]) : (arr_10 [i_0] [i_1] [i_0] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_3] [10] = var_10;
                            var_21 = (min(var_21, (((!(((var_3 / (arr_15 [i_0] [i_0] [16] [i_0] [i_6] [i_0])))))))));
                            var_22 = ((arr_8 [i_1 + 2] [i_1 + 3] [i_3 - 1] [i_3]) ? var_9 : (arr_8 [i_1 + 2] [i_1 + 1] [i_3 + 3] [i_6]));
                        }
                        arr_23 [i_3] [1] [i_1] = ((!(((2426401287 * (arr_0 [18] [i_1 + 2]))))));
                        var_23 = (min(var_23, (((1095336070 <= (1 * 1868566008))))));
                    }
                    var_24 = (((~var_10) ? (!1023) : (((arr_19 [i_0] [i_1 + 3] [i_2] [i_2]) ? (arr_16 [i_0] [i_1] [i_2]) : var_12))));
                }
            }
        }
    }
    var_25 = (((!-var_1) ? var_1 : var_0));
    #pragma endscop
}
