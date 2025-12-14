/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [11] [i_3] [i_0] [i_2] |= (((((var_5 >= var_6) * ((0 ? 4326541945772436360 : (arr_4 [i_0] [i_1]))))) << (((max((((4326541945772436360 ? (arr_7 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3]) : var_3))), (((arr_4 [i_2] [i_2]) ? (arr_3 [i_2] [i_0] [i_0]) : var_8)))) - 3918724054439899204))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [5] = ((!(~2713298678512163236)));
                        }
                    }
                }
                var_20 &= 15733445395197388379;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    var_21 = (+(((-3919968474816420111 + var_4) ? var_15 : -14911)));
                    var_22 = (((var_3 && (arr_16 [i_4] [i_4] [i_4]))));
                }
            }
        }
    }
    var_23 = (var_13 && var_6);
    var_24 &= (max((((((var_6 ? var_16 : var_4))) ? var_17 : (min(var_16, 97)))), var_18));
    #pragma endscop
}
