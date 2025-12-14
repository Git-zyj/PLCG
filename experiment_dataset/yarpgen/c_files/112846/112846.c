/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 + 4] = (max(4424384284649527025, 1));
        arr_3 [i_0 + 4] [i_0 + 3] = var_5;
    }
    var_20 = (((((var_17 ? (var_13 + -58) : 16384))) || var_6));
    var_21 = (((15215 && 53341) ? (((4424384284649527043 && var_19) ? (max(59726, 14022359789060024572)) : var_13)) : var_10));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            {
                var_22 = ((max(var_1, (-2147483647 - 1))));
                arr_12 [i_2 - 3] [i_1] [i_1] = (arr_6 [i_2 + 1] [i_1]);
            }
        }
    }
    #pragma endscop
}
