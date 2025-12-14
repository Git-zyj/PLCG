/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (arr_4 [i_1] [14]);
                var_12 = min(1278983119, 33849);
                arr_6 [i_0] [i_1 - 4] = (~-var_0);
            }
        }
    }
    var_13 = 2671535725788746307;
    #pragma endscop
}
