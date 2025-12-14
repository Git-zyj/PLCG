/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1941055282;
    var_17 = (min(var_17, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((+(min((max((arr_4 [i_1] [i_1]), 0)), (arr_1 [i_1 + 1]))))))));
                var_19 *= (((arr_4 [i_0] [2]) ? (1 - 2353912013) : -28));
            }
        }
    }
    #pragma endscop
}
