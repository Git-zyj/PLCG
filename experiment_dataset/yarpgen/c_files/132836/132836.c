/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_1, var_10));
    var_16 = var_12;
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_0;
                var_18 -= var_1;
                var_19 = (~5);
                var_20 = 26;
            }
        }
    }
    var_21 -= var_13;
    #pragma endscop
}
