/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_4;
    var_16 = (max(((24859 ? var_4 : var_9)), ((-17 ? 88 : 1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((!(((var_3 * (arr_0 [i_1]))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_18 = (min(var_18, ((((arr_10 [i_0] [i_0] [i_1] [i_2] [i_3]) ? -840399564 : var_13)))));
                        var_19 = (min(var_19, (~-89)));
                    }
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((-89 ? -435207571 : 2));
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        var_20 = (1 || 1);
        var_21 -= (max((((arr_13 [i_4 + 2]) ? var_12 : 87)), (~var_13)));
        var_22 = 100;
    }
    #pragma endscop
}
