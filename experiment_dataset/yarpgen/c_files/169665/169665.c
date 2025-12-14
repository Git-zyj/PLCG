/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_20 &= ((arr_1 [i_1]) ? (arr_1 [i_1 - 3]) : ((~(arr_3 [i_0] [i_0]))));
                var_21 |= (((~93) ? (max((arr_0 [i_1 - 1]), 4294967272)) : -3329));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_22 = ((!(arr_7 [i_2 - 1] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    var_23 = (((arr_5 [i_3]) ? 18102 : (arr_5 [i_2])));
                    var_24 &= ((48151 ? (arr_9 [i_2 - 1]) : (arr_9 [i_2 - 1])));
                }
            }
        }
        var_25 = 30;
        arr_13 [i_2 + 1] = ((-(arr_7 [7] [i_2 + 1])));
        var_26 += (((255 + 1) && (arr_5 [1])));
    }
    var_27 -= var_15;
    #pragma endscop
}
