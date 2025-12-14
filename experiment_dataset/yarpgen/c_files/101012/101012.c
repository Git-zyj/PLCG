/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 10066766621825168476;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [i_1] = -1;
                    arr_12 [i_1] [i_1] [i_2 + 3] = 0;
                    var_18 = 10066766621825168476;
                }
            }
        }
    }
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_19 [i_3] [i_4] [i_4] = ((-(~1)));

                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    var_20 *= (0 ? var_2 : 63946);
                    var_21 = (!(((4027884621 ? ((264072591 ? 8379977451884383140 : 0)) : ((var_7 ? var_2 : 2599157037))))));
                }
                var_22 = (max(var_22, 3369889273473811179));
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_23 = 2220624929627453020;
                            arr_29 [i_3] [i_4] [i_6] [i_7] = ((~(arr_3 [i_3])));
                        }
                    }
                }
                var_24 = 1299980915;
            }
        }
    }
    var_25 = var_15;
    #pragma endscop
}
