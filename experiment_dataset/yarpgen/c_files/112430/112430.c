/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_10 = (arr_10 [i_0] [i_0] [i_2] [i_0] [i_0]);
                            var_11 = 1;
                        }
                    }
                }
                var_12 = (max(var_12, ((((((~var_5) ? -4858 : (arr_4 [4] [i_1]))) << (var_4 + 14501))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_13 = 0;
                            var_14 = 3124033568;
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_1] = ((((((min(7670216794957768603, 65528))) ? (1701537228 / 65533) : (max(var_1, var_6))))) ? ((((min(950931522, 1410154258))))) : ((((((arr_15 [i_0] [11] [i_1] [0] [i_1]) ? var_4 : var_4))) ? (((var_4 ? (arr_0 [i_0]) : var_3))) : (min(238, var_0)))));
            }
        }
    }
    var_15 = ((!3124033580) ? var_6 : (((1024 && (!-65506)))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                var_16 = ((((((arr_18 [i_6]) ? -var_7 : (var_2 / var_5)))) ? 17799456094026211406 : (((var_7 ? 30652 : var_7)))));
                var_17 = (min(3960499105, 251));
            }
        }
    }
    #pragma endscop
}
