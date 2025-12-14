/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = (max(var_8, var_16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [4] [i_1] [i_1] = ((!((var_3 < (~var_11)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_22 = (max(var_22, var_1));
                            arr_11 [i_3] [i_2 - 1] [i_1] [i_3] = (((((min(0, (arr_10 [i_3]))) <= (((((arr_10 [i_3]) <= 0)))))) ? -88 : var_14));
                            arr_12 [i_1] [i_3] [i_3] [i_1] [4] = arr_1 [i_0] [i_3];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 11;i_6 += 1)
                            {
                                arr_22 [i_0] [i_1] [i_5] [i_5] [i_6 + 3] = var_17;
                                arr_23 [i_5] = (var_13 <= var_16);
                            }
                            arr_24 [i_1] [i_1] [i_5] = (87 & var_0);
                            var_23 = (min(var_23, ((max(((var_15 ? (5111 * -91) : -98)), 79)))));
                            arr_25 [i_0] [14] [i_5] [i_0] = 2567671522085468527;
                        }
                    }
                }
                var_24 = (((((arr_2 [i_0 + 1] [i_0 - 1]) & (arr_2 [i_0 + 1] [i_0 + 3]))) >> (((((arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ^ (arr_18 [i_0 + 1] [4] [i_0 + 1]))) - 39790))));
            }
        }
    }
    #pragma endscop
}
