/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (23536 * 2998081473);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (!13093008643066855400);
                    arr_10 [i_2] [i_2] [i_2 - 1] [3] = (((((arr_5 [i_0] [i_0] [10]) ? var_8 : (arr_7 [i_2 + 1]))) - ((((arr_2 [i_1 + 2]) ? 23536 : var_2)))));
                }
            }
        }
        var_18 = var_13;
        var_19 = (arr_7 [i_0]);
        var_20 += ((var_2 ? ((var_15 ? 10031498681190458003 : (arr_7 [i_0]))) : (arr_2 [i_0])));
    }
    var_21 = (max(var_21, var_8));
    #pragma endscop
}
