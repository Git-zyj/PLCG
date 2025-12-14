/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((var_8 ? var_13 : (arr_1 [i_0])));
        var_14 = (min(var_14, (((((arr_0 [i_0]) * var_10))))));
        arr_4 [i_0] = ((((((var_3 ? var_10 : -7833945439442848251))) ? var_12 : 0)));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_15 *= ((var_13 << (((min(((127 ? (arr_0 [i_2]) : var_2)), (arr_2 [i_1]))) + 1129379600))));
                arr_11 [i_1 + 1] [i_1 + 1] [i_1] = 0;
            }
        }
    }
    #pragma endscop
}
