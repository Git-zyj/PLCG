/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 |= (arr_0 [i_1]);
                    arr_8 [i_1] [i_2] = 576460752303423487;
                }
            }
        }
    }
    var_13 &= var_11;
    var_14 = (max(var_14, ((max(var_11, (~var_2))))));
    var_15 = (((((max(var_5, var_11))) ? (~var_2) : (((var_9 ? var_7 : var_3))))));
    #pragma endscop
}
