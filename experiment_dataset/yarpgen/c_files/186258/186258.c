/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 30923;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (((arr_4 [i_1] [i_2 - 2] [i_2 + 2]) > 0));
                    arr_9 [4] [i_1] [i_1] [i_2 - 2] = (!(arr_7 [i_1] [i_0]));
                }
            }
        }
        var_17 &= -34613;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_18 = (!170);
        var_19 = ((58815 > ((37228 ? 101 : 47024))));
    }
    #pragma endscop
}
