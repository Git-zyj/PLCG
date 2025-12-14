/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (~var_9);
    var_19 |= ((~((var_14 ? (max(-5747156051903211592, var_4)) : var_14))));
    var_20 |= (min(((((((var_10 ? var_3 : -21552))) == var_13))), 5747156051903211591));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 = (((arr_1 [i_0]) ? var_15 : -5747156051903211592));
            arr_5 [i_1] [i_1] [i_0] = var_6;
            var_22 *= (arr_4 [i_0] [i_1] [i_1]);
        }

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_23 = 2251799813685247;
            var_24 = (((arr_0 [i_0]) & 1457605699933301807));
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_25 = (arr_4 [i_0] [i_0] [i_0]);

            for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_26 = 13306;
                var_27 = (min(var_27, (((((arr_13 [i_4]) & (arr_0 [i_0])))))));
                var_28 = var_15;
                var_29 ^= (arr_2 [i_0]);
                var_30 = (arr_0 [i_0]);
            }
            for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_31 = (((((arr_12 [i_3] [i_3] [i_3] [i_0]) == var_9)) ? -0 : 18446744073709551615));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_32 = (arr_10 [i_3] [11] [i_7]);
                            var_33 *= ((-(arr_0 [6])));
                            arr_22 [i_3] [i_3] [i_5] [i_6] [13] [i_7] = var_17;
                            var_34 *= var_1;
                        }
                    }
                }
            }
            arr_23 [i_3] [i_3] = (((arr_4 [i_0] [i_3] [i_3 - 1]) & var_10));
            var_35 = (min(var_35, (((46 ? 15 : (-1 & 1626143582))))));
        }
        var_36 = (((((1 & (arr_21 [i_0] [i_0] [i_0] [2] [i_0] [i_0])))) ? (arr_8 [i_0]) : (arr_9 [7] [i_0])));
    }
    #pragma endscop
}
