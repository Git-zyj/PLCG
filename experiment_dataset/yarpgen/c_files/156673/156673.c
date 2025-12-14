/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 *= (((((arr_2 [i_0]) < ((-32741 * (arr_0 [i_0]))))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] = var_1;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = var_3;
        var_17 ^= ((2 >= ((~(arr_3 [i_1 + 1] [i_1 + 2])))));
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_12 [i_2] = 104;
        var_18 = arr_2 [i_2];
    }
    var_19 = ((((max((192 + var_14), 3364285961))) ? (max(((25883 ? var_7 : 192)), (var_14 < 10770953860833319655))) : ((-2 ? 124 : 1))));
    var_20 = (max((max(-2, (max(255, 9223372036854775807)))), -543489825));
    #pragma endscop
}
