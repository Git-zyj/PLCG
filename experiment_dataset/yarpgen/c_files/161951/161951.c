/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (min(32640, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_17 = (((arr_0 [i_0] [i_0]) & ((var_14 ? 185011307 : var_10))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        var_18 ^= ((1816763053572573568 ? 44 : 11));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [i_1] = (var_3 ? (arr_5 [i_1] [2]) : (arr_5 [i_1] [i_2]));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = (arr_8 [i_0] [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
