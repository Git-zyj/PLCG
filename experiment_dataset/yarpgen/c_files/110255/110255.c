/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (min(var_4, (min(var_3, var_1))))));
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_12 -= (min(((max(var_8, var_4))), (min(3932344672, 492368596))));
                var_13 = min((max(var_5, var_5)), ((min((arr_1 [i_0] [i_1 - 1]), var_2))));
            }
        }
    }
    #pragma endscop
}
