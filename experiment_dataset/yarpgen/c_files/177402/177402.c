/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_3, var_4))) ? (~var_2) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((!(((-(((arr_2 [i_0]) ? 250 : (arr_1 [i_1]))))))));
                arr_5 [i_0] [i_0] [i_0] = (((-(arr_3 [i_1]))));
                arr_6 [5] &= ((20343 ? 1 : 9223372036854775807));
            }
        }
    }
    var_12 *= ((~((((max(var_5, -72641215))) ? ((250 ? var_2 : 139)) : ((min(var_1, var_8)))))));
    #pragma endscop
}
