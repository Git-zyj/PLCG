/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (~(max(var_11, var_13)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = ((+((((arr_2 [i_0 + 2]) <= var_9)))));
                    var_19 ^= var_8;
                    var_20 = (arr_1 [i_0]);
                    var_21 = var_15;
                }
            }
        }
    }
    var_22 = var_2;
    var_23 = (max(((var_14 ? var_4 : (65970697666560 % 183))), var_8));
    var_24 = var_3;
    #pragma endscop
}
