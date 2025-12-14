/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(min(var_16, var_12))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = 0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = var_12;
                        var_21 = var_1;
                    }
                }
            }
        }
        var_22 ^= (~65219);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_15 [i_4] = (~((-(min(var_18, var_18)))));
        arr_16 [i_4] = (~61);
        var_23 = var_9;
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_24 = ((!(arr_10 [i_5 - 1] [i_6 + 3] [i_6 - 3] [i_6])));
                        arr_26 [i_8] [i_6] [i_6] = ((-(max((arr_21 [i_6 + 3] [i_5 + 1]), (arr_21 [i_6 - 2] [i_5 - 2])))));
                    }
                }
            }
        }
        arr_27 [i_5] [i_5 + 1] = ((max(var_5, 195)));
        var_25 = var_0;
        arr_28 [1] [i_5] = (arr_17 [i_5 - 2]);
    }
    #pragma endscop
}
