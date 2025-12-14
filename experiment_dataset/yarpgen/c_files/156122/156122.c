/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!(((!63032) >= ((var_6 ? var_0 : var_8)))));
    var_12 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [14] [i_2] = ((((((arr_0 [i_2]) ? 1 : (arr_6 [i_0] [i_0])))) ? ((-30196 / (arr_4 [i_0] [i_0] [i_2]))) : (var_3 * var_7)));
                    var_13 -= (arr_7 [i_0] [19]);
                }
            }
        }
        var_14 = (-19 == (((arr_0 [i_0]) ? (arr_5 [0] [17] [12]) : var_6)));
    }
    #pragma endscop
}
