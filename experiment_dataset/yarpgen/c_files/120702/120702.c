/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((max(var_0, (max((arr_5 [5] [5]), -4765419492478494711)))));
                arr_8 [i_0 - 3] [i_1 - 1] [i_1] = (arr_2 [i_0]);
            }
        }
    }
    var_16 = var_3;
    var_17 = (min(var_3, var_4));
    #pragma endscop
}
