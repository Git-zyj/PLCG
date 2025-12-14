/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = max(var_9, 8191);
    var_21 = (((min(57361, 8205))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 -= (min((((arr_0 [i_0]) * (arr_0 [i_1]))), ((((arr_0 [i_1]) > 8194)))));
                var_23 = ((min(var_0, var_3)));
            }
        }
    }
    #pragma endscop
}
