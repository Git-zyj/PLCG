/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 118;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (((arr_2 [i_0]) ? 1 : ((-8803 & (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 -= ((~(arr_3 [i_2 - 1] [1])));
                    var_14 = ((~(arr_3 [i_0] [i_0])));
                }
            }
        }
        var_15 ^= ((~(arr_7 [i_0] [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_16 = (min(var_7, ((-9163246545631319314 ? (arr_10 [i_3 - 1]) : (((arr_10 [7]) ? (arr_11 [i_4]) : (arr_3 [1] [i_4])))))));
                var_17 -= (arr_10 [i_4]);
                var_18 = (((arr_4 [i_4] [i_3 + 2] [i_3 - 2]) ? ((((arr_4 [i_3 + 3] [i_3] [i_3 + 1]) << (((arr_4 [i_3] [i_3 + 2] [i_4]) - 88))))) : ((~(arr_10 [i_3 + 3])))));
            }
        }
    }
    var_19 = (min(var_19, (((~((((0 ? 3149524619 : var_0)) / var_4)))))));
    var_20 = (max(var_20, var_2));
    #pragma endscop
}
