/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 &= var_10;
    var_20 = ((47986 ? ((var_17 ? var_12 : 17560)) : 79));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_21 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = 17571;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_22 = (min(var_22, 1));
            var_23 += (arr_8 [i_2 + 1]);
        }
        arr_9 [i_1] [i_1] = (arr_6 [i_1]);
        arr_10 [i_1] &= var_12;
    }
    var_24 = (max(var_24, 4294967295));
    #pragma endscop
}
