/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = ((~(arr_2 [i_0])));
        var_21 *= (!1500741415);
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_22 = ((+(((arr_3 [i_1]) % 25681))));
        arr_7 [0] &= -713908117;
    }
    var_23 = (min((min(127, var_11)), (min(-4, 142))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] = (arr_11 [i_2] [i_3] [i_2]);
                arr_14 [i_3] [i_2] = var_2;
            }
        }
    }
    #pragma endscop
}
