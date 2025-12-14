/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_14, (26 || 48)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_4 [i_0]) - (arr_4 [i_0])))) ? 30795 : (max((arr_1 [i_2]), var_9))));
                    var_17 = (((((min(var_6, 71))) ? ((16435233910709522526 ? 14387662278481473301 : 4160028778573619587)) : 2733489698)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 ^= min((((!var_6) ? (arr_13 [i_0] [i_1] [i_2] [i_0] [16] [i_0] [i_4 + 1]) : (max(16435233910709522520, var_2)))), (((((162 ? var_3 : var_4)) + ((min(var_3, var_6)))))));
                                var_19 ^= ((((min(((14387662278481473287 ? 715615957 : 16435233910709522511)), 0))) ? ((((min((arr_4 [i_1]), 16805))) ? (max(562932773552128, 16435233910709522547)) : (((var_3 ? -31702 : (arr_9 [i_4] [17] [i_4] [1])))))) : ((((((2011510163000029081 ? (arr_11 [i_0] [i_1] [5] [i_3] [i_4]) : 208))) ? 4160028778573619610 : (((-11 ? 51 : 28))))))));
                                arr_15 [i_0] [i_0] [i_2] [i_4] [i_4 + 1] [i_4] = max(4194303, ((var_8 ? (arr_7 [i_4 - 1] [i_4 + 2] [i_4 - 2]) : (arr_13 [i_0] [i_3] [i_4 - 2] [2] [i_0] [i_3] [i_0]))));
                                arr_16 [i_4] [i_2] [i_3] [i_3] [i_3] = (max(4059081795228078329, -20269));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
