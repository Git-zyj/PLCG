/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max(1, ((3112673288 ? ((var_7 ? 1182294029 : var_12)) : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 *= ((!((max(1152921504606781440, 64)))));
                            arr_11 [3] [i_0] [4] [i_3] = (((((arr_7 [i_0] [i_1] [i_2]) - ((var_2 ? var_12 : 1182294009))))) ? -0 : (min((arr_0 [i_0 - 1] [i_1 + 3]), (arr_0 [i_0 - 2] [i_1 + 1]))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_14 [4] = max(var_3, (((96 ? 2842156503 : 101))));
                                var_16 = ((!((((((max(var_10, 182)))) + (17853 | 2836354386916263078))))));
                            }
                        }
                    }
                }
                var_17 = (((!128) ^ 15));
            }
        }
    }
    var_18 = var_10;
    var_19 = var_12;

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_19 [i_5] = ((((var_12 >> 0) <= var_1)));
        var_20 ^= ((((((arr_18 [i_5] [i_5]) & (arr_17 [7])))) ? (max(1152921504606781455, 1)) : ((var_6 ? var_0 : var_6))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_21 = (max(var_21, 268435448));
        var_22 = (arr_15 [i_6]);
        var_23 = var_9;
        arr_22 [i_6] = ((65535 * (arr_17 [i_6])));
    }
    #pragma endscop
}
