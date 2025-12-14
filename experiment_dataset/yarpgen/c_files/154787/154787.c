/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(var_5, (~62256));
    var_13 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~var_6);
        arr_4 [i_0] = 212;
        var_14 = 38;
        arr_5 [i_0] [i_0] = ((((18913 ? 1 : 0))) ? (212 % 74) : ((var_10 ? var_0 : (arr_2 [i_0] [i_0]))));
        arr_6 [i_0] = var_4;
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = ((~((((41018 ^ 956873806) >= (((arr_8 [i_1] [5]) ? 956873806 : var_9)))))));
        var_16 = ((956873806 ? (((((arr_0 [i_1] [i_1]) < var_0)))) : (((arr_0 [i_1] [i_1]) ? var_1 : (arr_0 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = (min(212, (((((956873787 >> (43 - 38)))) ? 956873806 : 53))));
        var_17 = (~956873806);
        var_18 = (((arr_2 [13] [i_2]) ? ((-956873816 ? -44 : 11361)) : ((~((956873806 ? 44 : -1))))));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        arr_18 [i_3] [i_3] = (max((min((((arr_11 [i_3]) ? var_2 : 59)), (arr_9 [i_3 + 2] [i_3]))), -4));
        arr_19 [i_3] = (956873806 <= 250);
    }
    var_19 = -25146;
    #pragma endscop
}
