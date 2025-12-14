/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = 4294967279;
        arr_4 [i_0 - 1] [i_0] = var_1;
        var_20 = (arr_2 [i_0] [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_3] = 100;
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_3] [2] &= (((~8636820900103427027) ? 2754 : 9223372036854775807));
                        var_21 *= (arr_9 [i_1] [i_2]);
                        arr_21 [i_1] [i_2] [i_3] = (((1 / 2346811858) * (((arr_9 [i_3] [i_3]) ? (arr_8 [i_2 - 3]) : 62767))));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_22 ^= ((-(arr_18 [i_4 + 1] [i_4 + 1] [i_5] [i_5] [12] [i_5])));
                            arr_24 [i_5] [i_3] [i_3] [i_3] [i_1] = (((arr_5 [i_2 - 2]) ? (arr_16 [i_3] [1] [i_2 - 2] [i_2 - 2] [i_3]) : var_8));
                            var_23 *= (!var_10);
                        }
                    }
                }
            }
        }
        arr_25 [i_1] = ((arr_15 [i_1] [i_1] [0] [i_1]) ? var_10 : (arr_15 [i_1] [i_1] [i_1] [i_1]));
        var_24 = (arr_12 [19]);
        var_25 = (min(var_25, (arr_18 [i_1] [i_1] [i_1] [i_1] [14] [i_1])));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_33 [i_6] = ((-((max(-1729853251258137680, var_14)))));
            var_26 &= (arr_27 [i_7]);
        }
        arr_34 [1] = (arr_7 [i_6]);
        var_27 = (((((((arr_6 [i_6]) || var_3)))) % var_18));
    }
    #pragma endscop
}
