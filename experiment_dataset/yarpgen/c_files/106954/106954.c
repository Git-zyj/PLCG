/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_11);
    var_13 = (var_5 << var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = 132;
        arr_3 [10] = (((arr_0 [i_0] [i_0]) ? var_6 : (arr_2 [i_0])));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (max(var_5, (((var_10 ? var_7 : (!157))))));
        arr_7 [i_1] [i_1] = (arr_4 [i_1 + 2]);
        arr_8 [i_1] = var_1;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_15 = var_8;
                    var_16 = (min(((max(222, var_8))), (((arr_14 [i_2] [i_3 + 1] [i_4] [i_2]) ^ 250))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_17 *= var_1;
                                arr_23 [i_2] [0] [i_2] [i_3] [i_4] [i_5] [i_6] = -222;
                                var_18 = (((((var_11 ? var_6 : 156)) / (arr_16 [i_6] [i_6] [i_3 + 1]))));
                                arr_24 [i_2] [i_3 + 1] [i_4] [i_6] = -1338;
                            }
                        }
                    }
                    var_19 = var_3;
                    var_20 = (var_11 && var_11);
                }
            }
        }
        arr_25 [i_2] [i_2] = var_11;
        arr_26 [i_2] = (((-(var_1 == var_4))) > (((arr_12 [i_2] [i_2]) ? ((max(var_10, var_0))) : 167)));
    }
    var_21 += var_9;
    #pragma endscop
}
