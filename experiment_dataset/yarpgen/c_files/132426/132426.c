/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((var_9 ? 1 : (!1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_9;
                arr_5 [i_0] [i_0] = (arr_1 [i_0]);
            }
        }
    }
    var_14 = 9608;
    #pragma endscop
}
