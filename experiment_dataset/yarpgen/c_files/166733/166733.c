/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_11 = ((((var_1 ? (arr_5 [i_1] [i_2 + 1] [i_3]) : var_3)) < (max((1192413387 > 0), var_6))));
                            var_12 = (max(var_12, (((!(((1 ? (((arr_0 [i_2]) ? var_1 : var_2)) : 2035130590))))))));
                            var_13 = (((((max(var_8, 39421))) ^ (max(-415643757, var_3)))));
                            var_14 = (max(var_14, ((max(((1 - (39424 / 1))), 1)))));
                        }
                    }
                }
                arr_8 [i_0] [i_0] [i_1] = (min((arr_4 [i_0] [7] [i_0]), 5080));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_18 [i_4] [i_5] [i_5] [i_6] = 14536;
                    var_15 = 0;
                    var_16 = -var_1;
                }
            }
        }
    }
    var_17 |= (max(var_5, var_2));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_18 = (max(((max(var_0, (arr_22 [i_7] [3] [i_8])))), (~1)));
                var_19 = (max(-1447454286, 1));
                var_20 = (min(var_20, ((55993 ^ ((((~65535) ? 3190124615 : ((max((-2147483647 - 1), 1))))))))));
            }
        }
    }
    #pragma endscop
}
