/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [7] [i_1] [i_0] |= 0;

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        var_11 *= 9;
                        var_12 += (arr_9 [i_0] [i_1] [i_1] [i_3 + 1]);
                        var_13 = ((~(!255)));
                        var_14 -= 251;
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_4] = (max((((~(0 & 0)))), (arr_2 [i_0])));
                        var_15 = (min(var_15, (((226 ? (((~14) & ((~(arr_10 [i_4] [i_4] [9]))))) : 11)))));
                        var_16 = (arr_5 [i_1]);
                    }
                    var_17 += ((!((((arr_9 [i_0] [1] [i_1] [i_1]) ? 254 : (arr_11 [i_0] [i_1] [i_2 + 1] [i_1]))))));
                    var_18 -= (53027 >> 0);
                }
            }
        }
    }
    var_19 += var_5;
    #pragma endscop
}
