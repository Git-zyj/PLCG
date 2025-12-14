/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-32767 - 1) ? var_13 : ((5 ? 57344 : (min(var_0, (-2147483647 - 1)))))));
    var_15 = (-(min(7575502412490440481, (((78 ? 1 : var_4))))));
    var_16 = (min(16, -24353));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (max(((min(134217724, (-38 == 1)))), (min(32767, (arr_4 [i_1 - 1] [i_1 - 1])))));
                arr_8 [i_0] [i_0] = (max(20593, (max(13835069936599266363, 62))));
            }
        }
    }
    var_17 = (138 >> (127 - 116));
    #pragma endscop
}
