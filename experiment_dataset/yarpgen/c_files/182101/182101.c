/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(119, (max((min(var_8, 18446744073709551612)), (((var_13 ? -59678804358328258 : -28056)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [1] &= ((~(arr_2 [i_1])));
                    var_20 ^= (((arr_5 [i_0 - 2] [i_1] [1] [0]) ? (((3642467490 ? 1 : var_1))) : 3661288133));
                }
            }
        }
        var_21 = (min(var_21, (arr_7 [i_0 + 2] [i_0 - 1])));
        var_22 += var_2;
        arr_9 [i_0 + 2] |= ((!((((arr_0 [i_0]) ? -24043 : var_1)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_23 = ((4935006801950762674 ? 2597168250624601764 : (arr_10 [11])));
        var_24 = (max(var_24, 8673494887444212761));
    }
    #pragma endscop
}
