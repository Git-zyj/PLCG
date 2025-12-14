/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 -= (max((((arr_7 [i_1] [i_1] [18]) - (arr_7 [6] [i_3] [6]))), ((((arr_7 [i_1] [0] [4]) == (arr_12 [20]))))));
                                var_17 ^= (max(var_8, (max(-2219298, 94))));
                            }
                        }
                    }
                }
                var_18 -= ((((((var_8 && var_7) & -14533))) == (max(((max(1, 0))), ((var_9 ? (arr_5 [4]) : var_6))))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_19 -= ((-(max(var_13, -2219298))));
                                var_20 = (min(var_20, (((~((~(arr_0 [1] [1]))))))));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, 16777184));
            }
        }
    }
    var_22 |= max(((((var_3 > 13579411827636749619) ? (var_10 > var_3) : var_2))), (((!var_5) ? (((var_9 ? var_8 : 1))) : var_0)));
    var_23 ^= 7503557874251685482;
    var_24 = (min(var_24, ((-10649 ? -144466054 : 8382789040975180387))));
    var_25 = (min(var_25, var_12));
    #pragma endscop
}
