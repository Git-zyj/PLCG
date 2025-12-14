/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 -= var_8;
                var_15 -= ((((14143 ? ((0 ? var_6 : 33)) : (((3363888878 ? (arr_4 [i_0] [1]) : (arr_2 [i_0] [i_0 + 1] [2])))))) >> ((((var_12 ? 7917 : (arr_3 [4] [i_1 + 2]))) >> 16910))));
                var_16 = 65535;
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = (min(var_17, ((max((((arr_3 [20] [20]) % (arr_1 [i_2] [i_2]))), 1023)))));
        var_18 = (arr_1 [i_2] [i_2]);
    }
    #pragma endscop
}
