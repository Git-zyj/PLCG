/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((var_3 * (var_15 / 33550336))) < var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_18 = (min(5830098519734357424, -3955694294840634485));
                                var_19 = (arr_6 [i_0] [1] [6]);
                                var_20 ^= (arr_6 [i_4 + 2] [0] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [i_5] [6] [i_5] [i_5] [i_6] = (~5897663189775381190);
                                var_21 = ((var_12 >= (max(((((arr_12 [2] [7] [i_5]) && var_6))), (~25)))));
                                var_22 = -2190433320960;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((-((max(var_11, var_10)))))) <= (((((var_1 << (var_10 - 24)))) ? var_9 : -22))));
    var_24 = (min(((((~var_15) ? ((2160592302453615189 ? -22 : 4294967295)) : (-16 ^ var_10)))), -1));
    #pragma endscop
}
