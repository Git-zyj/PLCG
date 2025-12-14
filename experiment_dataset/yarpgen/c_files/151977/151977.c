/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((-(((~0) ? 32739 : var_3))));
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (max(((0 ? (arr_5 [i_0 + 1]) : 1)), 32749));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 += ((((var_9 / (max(var_0, (arr_3 [i_0] [i_1])))))) * var_15);
                                var_23 = var_15;
                            }
                        }
                    }
                }
                var_24 *= (var_1 && var_0);
            }
        }
    }
    #pragma endscop
}
