/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((((min(0, 891042434))) ? (((arr_0 [i_0]) ? ((var_1 ? var_7 : 10)) : 18446744073709551615)) : (min(16, -0))));
                var_14 = ((17 ? ((((!(arr_4 [i_0]))))) : (max((arr_2 [i_1 - 1]), 18446744073709551597))));
                var_15 = (((min((arr_3 [i_0]), (arr_1 [i_0]))) << 2));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [2] [i_2] [i_2] [i_3] [i_2] [0] |= ((min(var_0, (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? var_8 : 0)))) != ((((min(1, var_8))) ? ((min(var_3, 125))) : var_0)));
                                var_16 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
