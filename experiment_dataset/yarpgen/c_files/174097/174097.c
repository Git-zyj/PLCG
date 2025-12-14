/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((2305843009180139520 ? (max((var_14 ^ var_12), var_16)) : var_13));
    var_20 &= ((min(-1, 0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (((-(-32767 - 1))));
                arr_5 [i_0] [i_0] [i_0] = var_3;
            }
        }
    }
    #pragma endscop
}
