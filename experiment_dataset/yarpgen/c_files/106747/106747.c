/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [8] [i_0 + 2] &= ((var_17 ? (((((var_13 ? (arr_0 [i_0]) : (arr_0 [i_0 + 1])))) ? var_4 : var_7)) : var_7));
                    arr_10 [i_0] [i_1 - 1] [i_1] [i_2] = (-((((arr_3 [i_0] [i_1] [i_2 + 2]) >= var_15))));
                    arr_11 [i_2] [i_2] [i_2] [i_0] = (((((-(-55 != 14820248264237597125)))) ? (max(((((arr_2 [16]) ? (arr_6 [i_0 + 2]) : var_2))), var_4)) : ((((!((((arr_0 [i_0]) ? var_15 : var_5)))))))));
                }
            }
        }
    }
    var_18 = (max(1920870537, 52));
    var_19 -= (min((((min(var_1, var_9)))), 52));
    #pragma endscop
}
