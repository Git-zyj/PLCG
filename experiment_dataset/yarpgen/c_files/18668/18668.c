/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [1] = -var_1;
        var_11 = (min(var_11, var_1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((var_3 & var_7) ? (~1) : (~var_1))))));
                    var_13 ^= (~-16333);
                }
            }
        }
    }
    var_14 = (!-2077830624);
    #pragma endscop
}
