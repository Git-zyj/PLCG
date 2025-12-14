/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_0));
    var_11 ^= ((var_4 ? (min((max(3954736569, var_8)), var_4)) : (min(4, ((min(var_1, var_1)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 ^= ((((((min((arr_1 [i_0]), 8435))) << (((arr_0 [i_0]) - 2268613166))))) ? (min((((arr_0 [i_0]) >> (-12600 + 12628))), (arr_0 [i_0]))) : ((60897 ? 1 : (-2147483647 - 1))));
        var_13 = (max(12233, (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] = ((((min((arr_3 [i_1 + 1]), (arr_3 [i_1])))) - (max(9509069674670985054, (arr_2 [1] [1])))));
        var_14 ^= (((min((arr_3 [i_1 - 1]), (arr_2 [i_1] [i_1]))) <= ((((arr_3 [i_1 - 1]) ? (arr_2 [i_1] [i_1]) : 9223372036854775798)))));
    }
    var_15 = max(1, (var_5 && var_1));
    var_16 = var_0;
    #pragma endscop
}
