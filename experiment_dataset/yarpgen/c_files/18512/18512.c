/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((268304384 <= 2160015433783047622) ? 65531 : (((~var_3) ? -var_7 : (min(10175143605342997724, 30))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((((var_5 ^ (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) & (((-27232 ? ((10175143605342997724 ? var_1 : -2021651489)) : (1 | 1))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_13 += ((((!((max(var_0, var_0))))) ? 1 : (104853096 & -404292105)));
                        var_14 = (min(var_14, (arr_4 [i_0] [23] [23] [i_3])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
