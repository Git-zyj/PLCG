/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_6;
                arr_7 [i_0 - 2] = (max((arr_1 [i_0 + 3]), (min(var_5, 31))));
            }
        }
    }
    var_12 = -105;
    var_13 = ((!((min(320295082, var_3)))));
    #pragma endscop
}
