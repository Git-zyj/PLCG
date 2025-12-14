/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = var_7;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 -= -1;
                            var_21 ^= -8;
                            arr_8 [i_1 + 1] [17] [i_1] [i_1 + 1] [19] = (arr_5 [i_0]);
                            var_22 = (35604 ? 14200550965611758369 : -8);
                            arr_9 [i_1] [i_1] [i_0] [i_0] [i_3] = (min((~5), (((!(arr_1 [i_0] [i_0]))))));
                        }
                    }
                }
                var_23 = (((arr_7 [i_1] [i_1 + 1] [i_1 + 1]) ? var_4 : (arr_7 [20] [i_1 - 1] [i_1 + 1])));
                var_24 = (max(var_24, ((((((((((arr_0 [i_0]) ? var_15 : 6204623761860893965))) ? (arr_0 [i_0]) : (min(16775168, 6204623761860893980))))) ? (arr_7 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [i_1] [i_0] [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
