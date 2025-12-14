/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(1, 1));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = -var_1;
        var_16 ^= (((((((arr_2 [i_0]) | (arr_1 [i_0]))) + 2147483647)) << (var_7 - 68)));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_17 -= (arr_8 [i_1] [i_1]);
        var_18 ^= (max(((((arr_7 [24]) != (arr_5 [i_1 - 1])))), (((arr_5 [i_1 - 1]) ? (arr_8 [i_1] [i_1]) : ((var_11 & (arr_7 [16])))))));
        var_19 = (arr_8 [i_1] [i_1]);
        var_20 = var_13;
        var_21 = (i_1 % 2 == 0) ? (((((((max((arr_7 [i_1]), (arr_5 [i_1])))) & (((var_12 + 9223372036854775807) >> (((arr_7 [i_1]) - 2520315718)))))) & (arr_8 [i_1] [i_1])))) : (((((((max((arr_7 [i_1]), (arr_5 [i_1])))) & (((var_12 + 9223372036854775807) >> (((((arr_7 [i_1]) - 2520315718)) - 3450064650)))))) & (arr_8 [i_1] [i_1]))));
    }
    var_22 += var_10;
    #pragma endscop
}
