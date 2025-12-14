/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_9, ((var_12 ? ((var_4 ? var_10 : var_2)) : 1543159318480119797))));
    var_16 = (~var_14);

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_17 = (~var_4);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (min(var_0, var_2))));
                                arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] = 1543159318480119803;
                                arr_15 [i_0] [i_2] [i_2] [i_2] [i_0] = (1543159318480119794 ? -1543159318480119792 : 20563);
                            }
                        }
                    }
                    var_19 -= arr_10 [i_0];
                    arr_16 [i_0] [i_0] [10] &= (((((!7066777974247676710) ? (var_5 < var_6) : var_8)) / (arr_13 [i_0] [i_0] [i_1 - 3] [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_2] [i_2] [i_6] = 11379966099461874911;
                                var_20 = ((~((var_5 ? (arr_3 [i_0]) : var_9))));
                            }
                        }
                    }
                    var_21 += (arr_0 [i_0 + 1]);
                }
            }
        }
        arr_22 [i_0] = ((((((var_4 ? var_14 : 3935707491493897363))) ? 10019109028795384277 : var_5)));
        var_22 = var_6;
        var_23 = (max(var_23, (arr_7 [i_0] [i_0] [9])));
    }
    #pragma endscop
}
