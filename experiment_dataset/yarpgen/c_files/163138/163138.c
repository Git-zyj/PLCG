/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, -5929101243179755273));
    var_20 = var_14;
    var_21 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = var_17;
            var_23 = 39009;
        }
        var_24 = ((~(~51299)));
        var_25 = ((((arr_0 [i_0]) + var_6)));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_26 -= 5929101243179755257;
            arr_8 [12] [1] = ((9223372036854775796 ? (arr_2 [i_2]) : 467613807));
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            var_27 = (1 ? -5929101243179755273 : (((-5929101243179755250 ? 0 : var_9))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_21 [i_5] [i_3] [i_3 - 2] [1] [i_3] [i_3] = -1029064398;
                            var_28 = ((!var_17) || (arr_1 [i_0] [i_0]));
                        }
                    }
                }
            }
            arr_22 [i_3] = ((1 ? 1 : 1));
        }
    }
    #pragma endscop
}
