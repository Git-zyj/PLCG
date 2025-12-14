/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [1] |= (max((((arr_2 [i_0 - 2]) / (arr_2 [i_0 - 2]))), ((min(43, 95)))));
        var_15 = (arr_1 [i_0]);
        arr_4 [5] [i_0] = (arr_0 [i_0 + 1]);
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_16 = (max(61, -1841702674074828790));
                    var_17 = ((arr_10 [i_1] [i_2] [i_3]) < 905206254153355931);

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_18 = ((((((arr_5 [9]) >= var_10))) >> ((((var_9 ? (arr_5 [23]) : var_0)) + 1152591356))));
                        var_19 = ((~(arr_15 [i_1] [5] [i_3] [5])));
                        var_20 -= 144115188075855871;
                    }
                    for (int i_5 = 4; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_21 = (((((arr_18 [i_1] [i_1] [i_1] [i_2]) >> (((arr_17 [17] [8] [17] [i_5 + 1]) - 439589475)))) >> (((((arr_17 [i_1] [i_2] [i_1] [i_5]) >> (52 - 44))) - 1717140))));
                        var_22 = var_4;
                    }
                    for (int i_6 = 4; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_23 = var_14;
                        arr_21 [i_1] [i_1] [i_1] [i_1] = (((~((var_7 >> (67645734912 - 67645734903))))));
                        arr_22 [i_1] [i_1] = (54883 ? -7171533946929949135 : (((1 ? -2008275539 : 2047))));
                    }
                }
            }
        }
    }
    var_24 = (0 + (min(var_0, (27906142 <= 0))));
    #pragma endscop
}
