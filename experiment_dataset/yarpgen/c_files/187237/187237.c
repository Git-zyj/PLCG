/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [14] = ((0 ? (max(var_13, (arr_2 [i_0]))) : var_2));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = 0;
                    var_21 = max(((min((arr_6 [i_0] [i_0 - 1]), (arr_6 [i_0] [i_0 - 1])))), (min(var_16, (arr_6 [i_0] [i_0 + 2]))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [13] [i_0] [i_2] [13] [i_0] [13] = var_18;
                        var_22 -= arr_7 [i_2] [i_2] [i_2];
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = (((0 % 65535) ? (((arr_5 [i_4] [i_4] [i_4]) - var_19)) : ((0 ? 2321655708 : 42130292))));
        var_23 = 1;
        var_24 = -28950;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_25 = ((2816192196 / ((((((arr_3 [i_5]) ? 65535 : 657373226)) ^ ((((arr_17 [i_5] [i_5]) <= (arr_0 [i_5])))))))));
        arr_18 [i_5] = (((28950 + (!-1))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_26 = (arr_16 [1]);
        var_27 = ((-((1 << (-1 + 14)))));
        arr_21 [i_6] [i_6] = arr_10 [4];
        var_28 = (min(var_28, 1));
        var_29 = ((22066 % (arr_1 [6])));
    }
    var_30 = var_1;
    var_31 *= var_0;
    #pragma endscop
}
