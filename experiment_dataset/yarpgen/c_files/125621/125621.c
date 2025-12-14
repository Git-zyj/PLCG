/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0 - 1] [i_1]);
                var_19 = 11315589626465088217;
                var_20 = (arr_3 [i_0 - 1] [i_0] [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] = 7131154447244463398;
        var_21 = (arr_6 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_22 = 11315589626465088217;
        arr_12 [i_3] [i_3] = -1474544036;
        var_23 = 11315589626465088217;
    }
    var_24 = var_3;
    #pragma endscop
}
