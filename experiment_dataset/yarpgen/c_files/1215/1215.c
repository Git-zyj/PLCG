/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_14 = (7680 ? 1407590876 : 15872);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (~(max((~-7681), (~960))));
            var_15 = 1407590886;
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_16 = var_1;
        var_17 &= ((1 ? (arr_1 [1]) : 1));
        var_18 *= var_6;
        arr_9 [i_2] = (((arr_7 [i_2 - 1]) ? (arr_8 [i_2 + 1]) : (arr_0 [i_2 - 1] [i_2 - 2])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = 8;
        var_19 ^= (max(((-(arr_10 [i_3]))), -7662));
    }
    var_20 = var_3;

    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_21 |= var_3;
        arr_15 [i_4] [i_4] = 24;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 = (((((arr_13 [i_5] [i_5]) ? ((-1288188592 ? (arr_16 [19]) : var_4)) : (!128))) << (var_11 - 499239009)));
        var_23 = (!126);
    }
    #pragma endscop
}
