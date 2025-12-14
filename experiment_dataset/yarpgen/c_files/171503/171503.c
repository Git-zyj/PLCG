/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (55 == var_3);
        arr_4 [i_0] = arr_2 [i_0 + 1];
    }

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = arr_5 [i_1 - 1];
        var_14 -= ((arr_2 [i_1]) & ((((~10714) ? ((1 ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 1]))) : (arr_0 [i_1 - 1] [i_1])))));
    }
    var_15 |= ((((min(var_10, 0))) || var_12));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_16 -= (arr_9 [i_2]);
        var_17 -= ((!(arr_8 [i_2] [i_2])));
        arr_10 [i_2] = ((var_3 ? 1 : var_2));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                {
                    var_18 -= 1;
                    var_19 ^= 4294967295;
                }
            }
        }
        var_20 = (min(var_20, ((min((~-3836386964305244399), (arr_11 [i_3]))))));
        var_21 += (max(4294967295, -17003));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_26 [i_3] [i_3] [i_3] [i_3] = (((arr_12 [i_3]) << ((((min(4380, 4380))) - 4380))));
                        var_22 -= ((101 ? 20132 : 8646911284551352320));

                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            var_23 += ((1 ? var_7 : (arr_18 [7] [i_8] [i_9])));
                            var_24 *= (((((((arr_15 [9] [i_3] [i_7] [i_7]) || (arr_15 [i_7] [i_7 + 2] [i_7 + 1] [i_7 - 1]))))) != 3997376563));
                            arr_29 [i_9] [i_6] = var_3;
                            arr_30 [i_3] [i_6] [i_7 + 3] [i_8] [i_6] [i_9] [i_8] = var_1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
