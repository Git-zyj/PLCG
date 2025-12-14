/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((max((var_13 != var_7), ((var_12 ? var_10 : var_11))))) ? (((var_12 >> var_3) >> var_3)) : ((min(var_6, var_0)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((var_2 ? var_2 : var_10));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    {
                        var_16 = ((var_12 ? var_7 : (var_0 | var_0)));
                        arr_10 [i_0] = var_1;
                    }
                }
            }
        }
        arr_11 [i_0] [1] = (var_11 == var_1);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_17 = (((var_2 ? var_13 : var_11)) & -var_2);
        var_18 = (~var_2);
    }
    #pragma endscop
}
