/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 *= (min(73, (((arr_3 [2]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                var_12 = ((((((-(arr_2 [i_1] [10])))) ? (arr_1 [i_0] [i_1]) : (arr_2 [i_1] [i_0]))));
                arr_4 [i_1] [i_0] [5] = (((min(1, 6857272236317423412))) ? (arr_3 [i_0]) : 268435456);
                arr_5 [i_0] = (((min(1110163684, (arr_1 [i_1] [i_0]))) + ((((((0 ? 65535 : (arr_1 [11] [i_0]))) + 2147483647)) << (((((((arr_1 [1] [11]) ? (arr_1 [i_0] [i_1]) : -6104)) + 14976)) - 5))))));
            }
        }
    }
    var_13 = (max(var_13, var_1));
    #pragma endscop
}
