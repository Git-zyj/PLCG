/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (56 != -72);
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (max(var_21, var_17));
                var_22 -= (((-53 + 2147483647) >> ((((1 ? (arr_3 [i_0 - 4]) : (arr_1 [i_0 + 2]))) - 1398786457))));
                arr_4 [1] [i_0 - 4] = var_1;
                arr_5 [i_0] [i_1] [11] = (((((1 == (arr_2 [i_1 + 1] [i_1])))) <= -736446475));
                var_23 ^= var_9;
            }
        }
    }
    #pragma endscop
}
