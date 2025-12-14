/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (119 ? var_6 : (-1024 <= var_7));
    var_19 = (((-1024 ? ((min(var_10, var_13))) : (32751 ^ var_16))));
    var_20 = (((~(var_12 & var_7))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [10] [10] = ((var_13 >> ((((415165983 << (((((arr_0 [i_0]) + 2015973477)) - 11)))) - 1660663907))));
        arr_4 [i_0] = var_11;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                arr_9 [i_1] = var_12;
                arr_10 [i_1] [i_1] |= ((((((var_7 ? 221 : var_10)) >> (arr_8 [i_2]))) > var_14));
                arr_11 [9] [2] [i_1] = (max(-1, (arr_6 [0])));
                arr_12 [i_2] [10] [10] = var_2;
            }
        }
    }
    #pragma endscop
}
