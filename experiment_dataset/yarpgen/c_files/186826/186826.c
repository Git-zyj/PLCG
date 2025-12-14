/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_19 -= (((arr_5 [9] [9] [11] [i_3]) ? ((23126 ? (arr_0 [i_0]) : (((-7343209639082916858 + 9223372036854775807) << (21 - 21))))) : (arr_7 [4] [i_1] [i_1] [i_1])));
                        arr_8 [i_0] [9] [i_1] [i_2] [i_2] [i_1] = (((((min(-7343209639082916858, 7343209639082916860))) && ((max(1, 17661))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_20 |= (min((min(36681, (min(2147483647, var_13)))), ((var_18 / (((arr_0 [i_2]) % (arr_12 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5])))))));
                                var_21 = 127;
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [7] = var_17;
                    var_22 = var_13;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_23 = (min((((arr_13 [i_0] [i_0] [i_2] [i_2] [i_2 + 2] [i_6] [i_6]) ? (arr_22 [i_1] [6] [i_2] [i_2] [i_2 - 3]) : var_14)), (((arr_22 [i_0] [i_0] [i_1] [1] [i_2 - 2]) << (((arr_13 [11] [i_2 - 1] [18] [i_2] [i_2 - 1] [i_2 + 1] [i_6]) + 6590586995420773817))))));
                                var_24 = (min((arr_21 [i_2]), (arr_9 [i_2 + 1] [i_6] [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min((var_17 % 28616), (~var_10)));
    #pragma endscop
}
