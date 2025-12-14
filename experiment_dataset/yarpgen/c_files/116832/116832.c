/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((var_6 ? (((((~(-2147483647 - 1)))) ? (var_2 - var_7) : -var_0)) : ((((var_5 & var_3) - var_11))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = (((((((var_7 ? var_1 : var_10))) ? (arr_7 [i_1] [i_2]) : ((max((arr_3 [i_1]), (arr_8 [i_2] [1] [i_1] [16]))))))) ? (!-6331208843787515025) : var_5);
                    arr_10 [i_0] [i_1] [i_1] [i_1] = (arr_5 [i_2]);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_14 [i_1] = (max((((~(var_10 && var_5)))), (arr_0 [i_0] [i_1])));
                        arr_15 [i_1] [i_1] [13] [13] = 1;
                        var_13 = -1796656215;
                        var_14 -= (arr_2 [i_1]);
                        var_15 = (~61055);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_16 = (arr_6 [i_0] [i_1] [i_1] [i_4]);
                        arr_19 [i_4] [i_1] [i_2] [i_1] [i_0] = 253;
                        var_17 = (arr_2 [i_0 + 2]);
                        var_18 += var_5;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_19 = (min(var_19, (((61055 ? (arr_21 [i_5] [i_1] [0] [i_5] [i_5]) : (max((arr_7 [i_0 - 1] [i_0 - 1]), 9223372036854775795)))))));
                        arr_23 [i_0] [i_1] [i_1] [i_5] [i_5] [15] = -var_0;
                    }
                    var_20 = (((((!(arr_0 [i_0 + 1] [i_2 - 1])))) + var_2));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_21 = ((-6331208843787515025 ? 61071 : 0));
                                arr_28 [i_0] [i_0] [i_1] [i_6] [15] = ((-(arr_21 [i_0 + 1] [i_1] [i_1] [i_6] [i_7])));
                                var_22 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_8, var_7));
    #pragma endscop
}
