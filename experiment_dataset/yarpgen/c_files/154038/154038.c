/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = 1;
                    arr_6 [i_0] = var_0;

                    for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_21 = (min((((((-(arr_1 [i_0])))) + var_8)), ((min(-1, var_3)))));
                        var_22 -= ((1 ? var_9 : var_0));
                        var_23 -= 192;
                        var_24 = (min((((arr_8 [i_0] [i_2]) ? (arr_4 [i_1 + 1] [1] [i_1 + 2]) : var_12)), 64));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            var_25 = (min(var_25, var_15));
                            arr_14 [i_0] [i_0] [i_3 + 2] = ((0 ? -21343 : 64));
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_4 - 1] = (-2147483647 - 1);
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3 - 2] [i_0] [i_3] [i_3 - 2] = (arr_1 [i_0]);
                            var_26 = (min(var_26, ((((arr_7 [i_3 - 2] [10] [i_1 + 2] [i_3 - 2]) > ((-(arr_17 [i_0] [i_1] [i_2] [i_3 + 1] [i_5 + 2]))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 98;
                            var_27 = (arr_17 [i_3 - 1] [i_5] [i_5 - 1] [i_5] [3]);
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_28 = (((((-575363719 + 2147483647) >> (((arr_1 [i_2]) + 394915951))))) ? (((arr_21 [i_6 + 1] [i_1 - 1] [i_2] [i_6 - 1]) * var_8)) : (arr_21 [i_1] [10] [i_1] [i_1 - 1]));
                        arr_24 [i_0] [i_0] [i_0] [i_6] = (var_8 ? (arr_2 [i_0]) : (arr_2 [0]));
                    }
                    for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_31 [i_0] [i_0] [i_7 + 2] = ((-(arr_23 [i_0] [i_0])));
                            var_29 = ((arr_1 [i_0]) | (0 * -21362));
                        }
                        var_30 = (((-var_11 <= (arr_27 [i_0] [6] [i_1 - 2] [i_1 - 3] [i_2] [i_7]))) ? -69 : (!-21332));
                    }
                    var_31 = var_3;
                    var_32 = ((21362 * (((!(var_5 + var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
