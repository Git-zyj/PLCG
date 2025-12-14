/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_4 * (var_1 ^ 33554432))))));
    var_11 = (~var_2);
    var_12 = (min(var_12, (((((((min(var_9, 2962056887))) ? var_1 : var_3)) / ((((!2962056882) ? (1332910414 < var_3) : (-21402 && 1332910414)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (((((max(var_2, var_3)))) + (arr_2 [i_0])));
                arr_6 [i_0] [i_1] = (!var_3);
                var_14 += ((-(((arr_3 [i_1 + 1] [i_1 + 2]) ? (arr_3 [i_1 - 2] [i_1 + 1]) : (arr_3 [i_1 - 1] [i_1 + 1])))));
                arr_7 [i_1] = (((max((arr_4 [i_1 + 1] [i_1] [i_1]), var_6)) + (((((arr_3 [i_0] [i_1]) && 3676860462))))));
                arr_8 [i_1] = var_1;
            }
        }
    }

    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        var_15 = (min(var_15, (((~((var_0 << (arr_10 [i_2]))))))));
        var_16 = (max(var_16, (((~(((arr_2 [i_2 - 1]) ^ (arr_2 [i_2 + 1]))))))));
        var_17 = var_0;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_18 -= var_2;
                    var_19 ^= (arr_4 [i_3] [i_3] [i_3]);
                }
            }
        }
        var_20 = (arr_4 [i_2] [i_2] [i_2]);
    }
    #pragma endscop
}
