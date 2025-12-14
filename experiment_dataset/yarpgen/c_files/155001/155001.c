/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (((((min((arr_0 [i_0]), (arr_4 [i_0]))))) - var_0));
                        arr_8 [i_0] [i_1] [i_0] [i_1] [i_0] = (min(((((arr_7 [i_0] [i_1] [i_3 - 1] [i_3 + 1] [i_0] [i_3]) <= (arr_6 [i_0] [i_0] [i_3 - 1] [i_2] [i_0])))), (max((arr_7 [i_0] [i_1] [i_3 - 1] [i_0] [i_0] [i_1]), var_13))));
                        var_21 *= (((((((arr_4 [i_2]) + -3844)) + 2147483647)) << ((((min(1, (arr_4 [i_3])))) - 1))));
                        arr_9 [i_3] [i_0] [i_2] [i_3 - 2] [i_2] = arr_7 [i_0] [i_1] [i_0] [i_3 + 4] [i_3] [i_3 + 1];
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (((-3870 ? 0 : -3844)))));
                        arr_13 [i_0] [i_1] [i_2] [i_0] = 3837;
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((151 + (arr_0 [i_0])));
                        arr_15 [i_0] [i_2] [i_2] [i_4] [i_0] = (((arr_2 [i_4]) - ((((arr_1 [i_0]) ? (arr_12 [i_0] [i_1] [i_2] [i_0]) : (arr_1 [i_0]))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_5] [i_0] [i_2] = ((max((arr_12 [i_0] [i_1] [i_0] [i_0]), var_9)));
                        var_23 = (116 | (arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_5]));
                        var_24 = (max(var_24, 16487813255116783907));
                        var_25 = ((((max(((0 << (52113 - 52102))), ((((arr_0 [i_0]) || 3907727037)))))) | ((((((arr_12 [i_0] [i_1] [6] [i_0]) - 87))) ? 202 : (arr_3 [i_0] [21] [i_0])))));
                        arr_19 [i_0] [i_0] [i_2] [i_5] = (i_0 % 2 == 0) ? ((min((max((min((arr_10 [i_0] [i_0] [i_5] [i_1] [i_5] [i_0]), (arr_1 [i_1]))), (arr_1 [i_1]))), (((387240269 << (((arr_12 [i_0] [i_1] [i_2] [i_0]) - 944166012)))))))) : ((min((max((min((arr_10 [i_0] [i_0] [i_5] [i_1] [i_5] [i_0]), (arr_1 [i_1]))), (arr_1 [i_1]))), (((387240269 << (((((arr_12 [i_0] [i_1] [i_2] [i_0]) - 944166012)) + 431324622))))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_24 [11] [i_6] [i_2] [i_0] = arr_23 [i_0];
                        var_26 = ((!(((arr_1 [i_0]) != ((((arr_22 [i_0] [i_1] [i_2] [i_6] [i_2]) && (arr_2 [i_1]))))))));
                    }
                }
            }
        }
    }
    var_27 = var_19;
    var_28 = (18446744073709551615 * var_9);
    #pragma endscop
}
