/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(((-(((arr_0 [i_0]) ? (arr_4 [i_0] [15] [15]) : (arr_3 [i_1]))))), (~1)));
                var_15 &= (((arr_4 [1] [1] [1]) + (((-30537 ? var_11 : 248)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_16 += (~-8);
                                var_17 &= (arr_12 [i_4] [i_4]);
                                var_18 = ((((((1 ? var_0 : 4)) ? 93 : 67))));
                            }
                        }
                    }
                }
                var_19 += ((9 >> (98 - 95)));
                var_20 = (--240);
            }
        }
    }
    #pragma endscop
}
