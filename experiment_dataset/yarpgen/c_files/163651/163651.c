/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = (max((max(66309865909437227, (arr_5 [i_0] [i_1 + 2]))), ((((arr_6 [i_0] [i_1 + 3] [i_2]) + (arr_6 [i_0] [i_1 + 2] [i_2]))))));
                    var_13 ^= var_9;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_14 = ((((26 <= 66309865909437227) ? 1840228707 : var_10)));
                        arr_9 [i_3] [i_2] [i_0] [i_0] = var_2;
                        arr_10 [i_0] = (((arr_0 [16]) > (arr_7 [23] [i_1 + 2] [i_1 + 2] [i_3] [i_3] [23])));
                        var_15 &= (((((~((~(arr_8 [i_0] [i_1 - 2] [i_1 - 2])))))) ? ((var_9 << (41 - 41))) : ((((max((arr_2 [i_2]), var_4))) ? ((var_6 ^ (arr_4 [i_0] [i_2] [i_2]))) : (max((arr_7 [i_0] [i_0] [i_0] [10] [i_0] [i_0]), 15))))));
                        arr_11 [i_0] [23] [22] = (~1);
                    }
                    var_16 = (min(var_16, ((~((var_2 ? (arr_4 [i_0] [i_1 + 3] [23]) : (!var_3)))))));
                    arr_12 [3] [i_1 + 2] [i_0] = (((var_9 >= (arr_4 [i_1] [i_1 + 3] [i_1 + 3]))));
                }
            }
        }
    }
    var_17 = -var_2;
    #pragma endscop
}
