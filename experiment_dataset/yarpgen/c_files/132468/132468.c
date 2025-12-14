/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (((arr_1 [i_0] [9]) ? (max((arr_2 [i_1 + 2]), var_5)) : (arr_1 [i_0] [i_0])));
                arr_4 [i_0] = var_0;
            }
        }
    }
    var_21 = var_3;
    var_22 &= var_11;
    #pragma endscop
}
