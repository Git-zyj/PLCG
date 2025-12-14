/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_16 = (arr_3 [i_0] [i_0]);
        var_17 = ((var_11 ^ (arr_1 [i_0 - 1])));
        var_18 = arr_0 [i_0] [i_0];
    }
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            {
                var_20 = var_12;
                arr_9 [10] [i_2 + 1] [i_1] = (arr_3 [i_1] [i_2 + 1]);
            }
        }
    }
    var_21 -= (((((max(var_3, var_12))) ? (var_15 + var_6) : (((512 | (-32767 - 1)))))));
    #pragma endscop
}
