/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0 + 4] [i_0] &= (max(((((arr_1 [i_0 + 4]) > 14659))), (-1964712618 & 218448289)));
        var_18 = (arr_1 [i_0]);
        arr_5 [i_0 + 1] = (arr_1 [i_0 + 2]);
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_15 [i_3] [i_2] [9] [i_1] = ((!(((-(arr_10 [4] [i_2 - 1] [i_2 - 1]))))));
                    var_19 &= arr_8 [i_3];
                    arr_16 [i_1] [i_1] [i_1] = arr_12 [i_2 + 2] [i_2 - 1] [i_2 + 3];
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
