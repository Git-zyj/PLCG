/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 = (arr_1 [i_0]);
                                var_12 = (max(var_12, ((min(((((((((min(1, (-2147483647 - 1))) + 2147483647)) + 2147483647)) << (((((arr_7 [i_0] [22] [i_2]) + 5588068473792177944)) - 25))))), ((((max((arr_8 [i_4] [8] [8] [8]), (arr_0 [i_0])))) ? (min(4266914842, (arr_8 [i_2] [13] [i_2] [13]))) : (arr_2 [i_3] [i_4]))))))));
                                arr_10 [i_1] [i_1] [14] [i_3] [i_4] = ((~((-(((-2147483647 - 1) * 33554304))))));
                                arr_11 [i_4] [i_0] [i_0] [i_4] [i_1] = ((((((min((arr_0 [i_0]), 3235839998248247086))) ? (arr_5 [i_4] [i_1] [7]) : (arr_8 [i_0] [i_0] [i_0] [1]))) - -727745465));
                            }
                        }
                    }
                }
                arr_12 [i_1] [i_1] = (-2147483647 - 1);
                var_13 = (((arr_2 [i_0] [i_0]) | 53816));
            }
        }
    }
    var_14 &= (((min(-1, -33554299)) < (!var_6)));
    #pragma endscop
}
