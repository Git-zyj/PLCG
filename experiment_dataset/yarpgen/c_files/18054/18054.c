/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = (~var_10);
    var_13 = (((~(var_6 % 4421))));
    var_14 *= (8902 <= 697169063);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (max(var_15, 8912));
        arr_2 [i_0] = (((~1) && var_8));
        var_16 = (3455526007 ? 117 : 32738);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (arr_5 [i_2] [i_2] [i_2] [i_2]);
                    var_18 = (var_9 > ((((-27432 <= (arr_6 [i_2] [i_2]))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_9 [i_3] = -4346411665699260446;
        arr_10 [i_3] = (~65532);
    }
    #pragma endscop
}
