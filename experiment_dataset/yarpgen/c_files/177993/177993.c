/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (-2147483647 - 1);
        var_20 = 4212831223;

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_21 = (!10);
            arr_6 [0] [i_1 + 1] = ((((min(1, 1)) ? 9 : ((17096 ^ (arr_1 [i_0]))))));
            var_22 = ((var_10 ? (18008 + var_1) : ((+(((arr_2 [i_0] [i_1]) + 101))))));
        }

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = var_7;
            var_23 += (min((arr_9 [i_2] [i_0]), (var_7 ^ var_6)));
        }
    }

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_4 - 1] [i_3] [i_6] = ((~(((((min(-205357332968492047, 101))) && var_7)))));
                        arr_24 [i_3] [i_5] [i_3] = var_1;
                    }
                }
            }
        }
        var_24 = ((16777200 / (((((-(arr_22 [i_3] [i_3] [i_3 + 2] [i_3 + 2])))) ? var_4 : var_11))));
        var_25 = ((((((((var_9 / (arr_8 [i_3])))) ? (((arr_22 [i_3 + 1] [0] [i_3] [i_3]) ? (arr_22 [i_3] [i_3] [2] [i_3]) : var_14)) : (-9549 ^ var_9)))) ? (!9223372036854775806) : (arr_13 [i_3 + 1])));

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_26 *= var_7;
                            arr_37 [i_3] = (arr_17 [i_3] [i_10] [i_8]);
                            var_27 = var_0;
                        }
                    }
                }
            }
            var_28 = (!16777195);
            arr_38 [i_3] [i_7] [i_3] = ((!((min((arr_9 [i_3 + 1] [i_3 - 1]), (arr_28 [i_3 + 2]))))));
        }
    }
    #pragma endscop
}
