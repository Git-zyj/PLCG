/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_6;
    var_11 = (max(var_11, (((!9876593413329625806) - (max(17310639792920693357, (!var_6)))))));
    var_12 = 8570150660379925807;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (arr_0 [i_0])));
                var_14 = (~(max(0, var_3)));
            }
        }
    }
    #pragma endscop
}
