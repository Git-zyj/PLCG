/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_8 / (((16383 ? -533675148 : var_6)))));
    var_11 += (min(var_3, var_3));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_8 [i_3] [5] [i_2] = ((arr_7 [7] [i_2 + 1] [i_2] [i_1] [i_2] [i_1]) ? 5914580666505219648 : 0);
                        var_12 &= (((arr_2 [i_1 + 2]) ? (arr_5 [1] [7] [i_3 - 1] [i_2 + 1]) : (((arr_7 [2] [i_1] [2] [i_1] [i_2] [i_3 + 2]) ? var_9 : 2040))));
                    }
                }
            }
        }
        var_13 *= (((arr_6 [1]) ? (arr_0 [i_0 - 1]) : ((2297752613 ? (arr_1 [1] [0]) : (arr_0 [5])))));
        arr_9 [i_0 - 2] = arr_6 [8];
    }
    #pragma endscop
}
