/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [0] = ((~(1844 ^ var_14)));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_17 = (~1823);
                        var_18 = (min(var_18, -7164));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_17 [i_4] = (((arr_7 [i_4 - 1] [i_0 + 1] [i_2 + 2]) || (arr_7 [i_4 - 1] [i_0 - 3] [i_2 + 3])));

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_20 [i_0 + 2] [i_4] [10] = (((arr_10 [i_5 - 1]) - (arr_10 [i_5 - 1])));
                            var_19 = ((var_7 * ((var_2 ? -99 : -1823))));
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_4] = (var_4 && var_10);
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_20 = 44482;
                            arr_24 [i_2] [i_4] = 65535;
                            var_21 = -122;
                        }
                    }
                    var_22 -= (!-2024151956);
                    var_23 = (((arr_5 [i_0 + 3] [i_1]) ? (max((arr_5 [i_1] [i_1]), 21053)) : (!43395)));
                }
            }
        }
    }
    var_24 = (16 || -2817);
    #pragma endscop
}
