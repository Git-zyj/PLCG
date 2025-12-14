/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (+(((arr_3 [i_0] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0]))));
                    arr_6 [i_0] [i_0] [i_2] [i_1] = var_11;
                    var_21 = 99;
                    arr_7 [i_1] [1] = var_18;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] = ((~((((((1 ? -1448253379 : var_8))) < (max((arr_1 [i_0]), 1)))))));
                        var_22 = (min(((~(arr_4 [i_0 + 1] [13] [i_2]))), (arr_4 [i_0 - 1] [i_0 - 1] [i_2])));
                    }
                }
            }
        }
        arr_12 [i_0] = (~3993032172);
    }
    var_23 = var_7;
    #pragma endscop
}
