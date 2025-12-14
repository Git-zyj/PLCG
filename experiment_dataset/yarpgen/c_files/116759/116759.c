/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (10117362395894461352 ? (arr_0 [i_1]) : (max((51969 - var_8), (arr_2 [i_0 - 2]))));
                var_13 = var_3;
                var_14 = ((((((var_2 + (arr_0 [i_0 + 2])))) ? var_6 : var_2)) + var_5);
            }
        }
    }
    var_15 = (~4374);
    var_16 = var_2;
    #pragma endscop
}
