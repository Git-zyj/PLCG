/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(((max(32256, 12921))), -var_12))) ? (max((((1 ? -20074 : var_3))), var_14)) : (((var_11 ? (max(var_9, 20079)) : -1933))));
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 ^= (max(((max((var_3 && var_1), (((arr_5 [i_2] [i_2]) && var_12))))), (max((arr_2 [i_1 - 1]), (((arr_7 [i_0] [i_1 - 1] [i_1]) ? (arr_1 [14] [i_1]) : var_0))))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = (min(((!(((var_13 ? var_11 : -20070))))), (((max(var_3, -12905)) == (((4294967295 ? (arr_6 [i_2] [i_1]) : -1933)))))));
                }
            }
        }
    }
    #pragma endscop
}
