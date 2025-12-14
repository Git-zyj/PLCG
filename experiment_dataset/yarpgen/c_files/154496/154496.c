/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((((((arr_0 [i_0] [i_0]) ? (-127 - 1) : (arr_0 [i_0] [i_0])))) ? -9223372036854775794 : ((((arr_0 [i_0] [i_0]) ? var_9 : 1)))));
        var_17 = var_3;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 ^= ((max(var_14, ((~(arr_3 [18] [i_1]))))));
        var_19 = 0;

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_1] [i_2] [i_2] = (min(((max(((~(arr_3 [i_1] [5]))), ((var_5 / (arr_3 [i_2] [i_1])))))), (((arr_6 [i_1] [i_1] [i_1]) ? (arr_6 [i_2] [i_2] [i_1]) : var_9))));
            arr_9 [i_1] &= ((~var_9) ? (arr_2 [i_2]) : (((((~127) + 2147483647)) << (((((~var_5) + 12937)) - 2)))));
            arr_10 [16] [i_2] = ((((255 ? ((max(63, var_2))) : ((max(65534, 65534)))))) ? ((~(arr_3 [i_1] [i_2]))) : ((1 ? (((arr_3 [i_1] [i_2]) - var_3)) : ((max(32, var_8))))));
            var_20 ^= ((~(~8)));
        }
        var_21 = (min(var_21, (((+(min((arr_3 [i_1] [i_1]), 34359738367)))))));
    }
    var_22 = 65534;
    var_23 = var_10;
    #pragma endscop
}
