/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (min(var_4, (min(var_16, var_5))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 -= ((~(((~var_6) ? var_7 : var_0))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 -= arr_1 [12] [12];

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_20 -= (((arr_2 [i_0]) | (arr_5 [i_0 + 3] [i_3] [0])));
                        var_21 = ((((arr_10 [i_0] [i_0] [i_0 - 1] [i_2] [i_0 - 1]) > (arr_2 [i_1]))));
                    }
                    var_22 = ((-1 ? var_1 : (((!((((arr_7 [i_1] [i_1]) ? var_2 : (arr_10 [i_0] [i_0] [i_0] [i_2] [i_0])))))))));
                    var_23 = (arr_8 [3]);

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_24 -= ((!(arr_9 [i_0] [i_0] [i_4])));
                        var_25 ^= (var_12 - var_2);
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_26 -= ((~(((arr_1 [i_0 - 1] [i_1]) | (arr_1 [i_0 - 1] [i_0 - 1])))));
                        var_27 = var_16;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [10] [i_2] [i_1] = (~-6913091874185722533);
                        var_28 = ((-1804392625 < (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [i_0])));
                        var_29 = var_1;
                        arr_19 [i_0] [i_0] [12] [i_2] [i_0] = (arr_2 [i_0 + 1]);

                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_30 += (arr_1 [7] [i_0 + 2]);
                            var_31 = (4294967295 | var_12);
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_32 = (var_8 ? (arr_17 [i_0] [i_0 + 4]) : var_4);
                            var_33 = (((arr_16 [i_0 + 4] [i_0 + 3] [i_0] [i_0 + 1]) ? (arr_3 [i_6]) : 48330));
                            arr_24 [i_0] [i_2] [i_2] [i_2] [i_0] [i_2] = (~103);
                            arr_25 [i_8] [i_2] [0] [i_2] [i_2] [i_2] [0] = ((~(arr_8 [i_0 + 3])));
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_34 = (arr_9 [i_9] [i_9] [6]);
        var_35 = var_10;
        var_36 += 9606688288532145288;
    }
    #pragma endscop
}
