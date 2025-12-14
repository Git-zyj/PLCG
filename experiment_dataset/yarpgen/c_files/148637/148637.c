/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [21] [i_2] [i_1] [i_0] = (~(((arr_0 [11] [i_2]) ? -434953268 : 1)));
                    var_11 = (15425 ? 32353 : 434953288);
                    var_12 = 1295367777;
                }
            }
        }
        var_13 = 434953268;
    }
    var_14 = var_3;
    #pragma endscop
}
