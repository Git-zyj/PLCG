/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [10] = (min(1, ((255 ? 192 : 1))));
                arr_5 [i_0] [i_0] [i_1 + 2] = 1;
                arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] = (((((~228) + 2147483647)) << (((-4 + 6) - 2))));
                arr_7 [8] [i_1] = (!81349950);
                arr_8 [i_0] = (~-19);
            }
        }
    }
    #pragma endscop
}
