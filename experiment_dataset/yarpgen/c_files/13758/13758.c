/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] = (min((!5), ((((var_16 * (arr_4 [i_2] [i_1] [3]))) << (var_15 + 39)))));
                    arr_7 [12] [i_1] [24] = (arr_0 [i_0 - 1] [i_1]);
                    var_18 -= (((max(1, (((arr_3 [10] [8]) ? (arr_2 [19] [i_1]) : var_12))))) ? (arr_5 [i_0 - 3] [20]) : 459364088);
                    arr_8 [17] [i_0] [i_1] [2] = (arr_1 [16] [i_1]);
                }
            }
        }
    }
    var_19 = min(((((var_10 ? var_13 : var_11)))), ((((max(var_16, var_10))) | (min(var_8, var_4)))));
    #pragma endscop
}
