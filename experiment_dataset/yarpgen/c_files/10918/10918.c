/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [10] [i_1] = 65510;
                var_20 = (min(var_20, 65506));
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
