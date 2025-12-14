/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 &= ((-(~var_3)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (max((min(1, (max(var_10, 281474976710655)))), 855594748719882483));
        var_13 |= (min((((arr_0 [3]) - (~1))), 178));
        arr_3 [i_0] |= (min(((+((8388607 >> (((arr_0 [i_0]) - 162)))))), (var_9 >= 1)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 63524;
        arr_8 [i_1] [i_1 - 1] = ((((((~1) ? (arr_4 [i_1]) : (arr_6 [i_1])))) ? (-35 < 17793) : (max(((~(arr_6 [i_1]))), (var_7 - var_1)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_14 = (0 - -48);
        arr_11 [i_2] = ((~(0 != 32767)));
        var_15 ^= (arr_4 [i_2]);
    }
    var_16 = var_0;
    #pragma endscop
}
