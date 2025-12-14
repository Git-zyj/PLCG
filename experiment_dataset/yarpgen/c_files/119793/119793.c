/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((1917762154 >= (arr_2 [5] [5]))) ? -59 : (~221))))));
                var_15 = (max(var_15, (arr_2 [i_0] [22])));
            }
        }
    }
    var_16 = ((21486 << (((-7375324517076985006 + 7375324517076985024) - 4))));
    #pragma endscop
}
