/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((7 * 1023), -var_7))) ? (var_9 && var_4) : (max((var_6 + var_1), ((var_9 ? var_8 : var_10))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((~((~(arr_0 [i_0]))))) > -1023));
        arr_3 [i_0] = (((var_7 ? var_0 : (arr_1 [i_0]))));
        arr_4 [0] &= var_10;
        arr_5 [i_0] = ((((((var_7 ? (arr_1 [i_0]) : var_5)))) ? var_9 : 1023979361));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (min(var_10, (((-1023 != ((~(arr_6 [i_1]))))))));
        arr_9 [i_1] [i_1] = -var_8;
        arr_10 [i_1] = (min((~1024), var_7));
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        arr_13 [i_2] = 255;
        arr_14 [i_2] = ((arr_6 [i_2 + 2]) ? (((((1009 ? var_6 : var_1))) ? var_0 : (~var_3))) : (arr_6 [i_2]));
        arr_15 [i_2] = (arr_12 [i_2]);
        arr_16 [i_2] [12] = (arr_7 [i_2 + 3] [i_2]);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_19 [5] [i_3] = ((32767 ? 1023979361 : -32778));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_27 [i_4] [i_5] [1] [i_4] = ((~(((var_11 ^ var_2) ^ 1023979361))));
                    arr_28 [i_4] [i_4] [i_5] = (((1646276220 ? (arr_26 [i_4] [6] [i_4]) : (arr_26 [i_4] [i_3] [i_4]))));
                }
            }
        }
    }
    var_13 = var_7;
    var_14 = 59440;
    var_15 = (!-173165303);
    #pragma endscop
}
