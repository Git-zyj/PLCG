/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(186, 199));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-(arr_0 [i_0 - 1])));
        var_12 = var_5;
        arr_4 [i_0] = ((((arr_2 [i_0 - 1] [i_0 - 1]) || var_1)));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_13 = (min(((var_9 ? ((max((arr_5 [1]), var_2))) : (arr_6 [i_1]))), var_6));
        arr_7 [i_1 + 2] [i_1] = (!68);
        var_14 = min((((!(arr_5 [i_1])))), (max(((~(arr_6 [i_1]))), 1)));
    }
    var_15 = ((-22839 ? 2147483647 : 0));
    var_16 = (var_7 == var_2);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_17 = ((-(min((arr_12 [8] [i_3] [i_3]), ((var_0 ? (arr_10 [i_2] [i_2 - 1] [i_2]) : var_6))))));
                var_18 = (min(var_18, 93));

                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_19 = (arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 += (max(1836429909380150782, (((~(arr_14 [7] [7] [i_4] [i_4]))))));
                                var_21 += ((-4026531840 >> ((((~(arr_14 [i_4] [i_2 - 1] [1] [i_5]))) - 20556))));
                                var_22 = ((0 >> (-4199 + 4205)));
                            }
                        }
                    }
                    arr_22 [i_4] [i_4] [18] [i_2] = ((-99 & ((((min((arr_20 [i_2] [i_2] [i_2] [i_3] [i_4]), (arr_17 [i_2 - 1])))) ? 0 : 125))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_2 - 1] [2] [i_7] [i_2] |= (max(-4212, -32757));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_23 = (min(var_23, -5360));
                                arr_33 [i_7] [i_8] [i_9] = ((((268435444 ? (-2147483647 - 1) : 1))) ? var_0 : (arr_17 [i_7]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
