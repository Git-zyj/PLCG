/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = 8128;
                var_19 = (arr_4 [22]);
                var_20 = ((((12689677815265198533 + 1729433014) < -1744891946)));
            }
        }
    }
    var_21 = var_15;
    var_22 |= var_6;
    #pragma endscop
}
