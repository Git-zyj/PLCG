/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_10));
    var_14 = var_9;
    var_15 &= var_0;
    var_16 &= (max(var_4, var_0));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [10] [8] |= (34359738367 + -1);
        arr_5 [6] [i_0] &= (((((1 ^ (arr_0 [i_0] [i_0])))) ? ((~(arr_1 [1]))) : -18446744039349813249));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 += 2097152;
                    var_18 = (arr_8 [4] [i_0] [i_1] [i_1]);
                }
            }
        }
        var_19 = (((arr_0 [i_0 - 2] [i_0 + 2]) ? (((arr_3 [i_0]) << (((arr_6 [i_0]) - 121)))) : (arr_3 [i_0 + 1])));
        var_20 = (max(var_20, ((((((((arr_7 [i_0] [i_0]) ? (arr_8 [0] [1] [i_0] [i_0]) : (arr_6 [10]))) + 2147483647)) >> (arr_2 [i_0 - 2]))))));
    }
    #pragma endscop
}
