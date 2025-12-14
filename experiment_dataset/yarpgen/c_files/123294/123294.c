/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -1;
        var_13 = ((var_3 / ((((arr_2 [i_0]) != (1 >= 1))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = ((((arr_5 [i_1 - 3]) ? (arr_5 [i_1 - 1]) : var_3)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_14 [8] [i_1] [i_1] [9] = ((~((((((arr_11 [2] [i_2]) ? var_9 : var_5)) != var_7)))));
                    arr_15 [5] [i_2] [i_1] = var_4;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_14 = -var_1;
                    arr_22 [i_1] = (((((-(-8581 && 65535)))) * (min(536316004, 85))));
                    var_15 *= (min((!var_6), var_8));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_16 = (arr_24 [i_6] [10]);
        arr_25 [i_6] [i_6] = var_10;
    }
    var_17 = var_10;
    var_18 += (((!var_11) || ((((~var_10) - (~var_7))))));
    #pragma endscop
}
