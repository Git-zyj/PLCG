/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2] [i_3] = ((max((((arr_0 [i_3 + 1] [i_1]) ? (arr_3 [i_0] [i_1] [i_3 - 1]) : var_3)), (((arr_3 [i_1] [i_2] [i_3]) ? var_6 : var_3)))));
                            var_10 = ((var_9 - (((var_1 ? var_3 : var_3)))));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_11 = (min(((((var_0 || var_8) >= (!var_2)))), ((-(var_4 & var_2)))));
                                arr_11 [i_2] [i_2] [i_2] [i_2] = (((!var_5) ? ((~(arr_9 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1]))) : (((var_1 < ((min(var_7, var_3))))))));
                                arr_12 [i_0] [i_3] [i_4] = (((((arr_7 [i_4] [i_4] [i_2] [i_4]) << (var_6 - 145))) / ((((min(var_0, 11663))) ? var_6 : var_3))));
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                var_12 = (max(((((var_9 + var_6) << ((((-(arr_9 [i_0] [i_1] [i_2] [i_2] [i_5]))) + 47))))), ((((((arr_7 [i_0] [i_1] [i_1] [i_5]) ? (arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] [i_0]) : var_6))) ? var_5 : (arr_2 [i_5])))));
                                var_13 -= var_2;
                                arr_15 [i_0] [i_5] [i_3] [i_2] [i_0] [i_0] = (((((var_7 ? var_4 : (!var_0)))) > ((var_3 ? (((var_4 ? var_2 : (arr_2 [i_0])))) : var_2))));
                            }
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] = ((-(((arr_6 [i_0] [i_0] [i_1] [i_3 - 1] [i_3 - 1] [i_3]) ? 611720963 : ((((arr_5 [i_0] [i_1]) == var_7)))))));
                        }
                    }
                }
                var_14 = ((var_6 ? (((arr_4 [i_1] [i_1] [i_0]) << (((min(var_1, 82)) - 55)))) : var_5));

                /* vectorizable */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    arr_19 [i_1] = ((!(var_2 < 5454320233830243348)));
                    var_15 = ((!(((2 ? var_1 : var_5)))));
                }
                var_16 = var_2;
            }
        }
    }
    var_17 -= min((((!var_9) ? (var_9 && var_7) : var_4)), ((5 ? var_8 : -377844893)));
    #pragma endscop
}
