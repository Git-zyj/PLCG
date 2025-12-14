/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 += (((arr_2 [i_1] [i_0]) + (max((arr_3 [i_0 - 1] [i_0 - 2]), (arr_3 [i_0 + 1] [i_0 - 1])))));
                arr_5 [i_0] [i_1] [i_1] = (-6906085473252239752 / 50);
            }
        }
    }
    var_13 = (((((0 ? var_8 : var_3)) ^ (1 * 0))));
    #pragma endscop
}
