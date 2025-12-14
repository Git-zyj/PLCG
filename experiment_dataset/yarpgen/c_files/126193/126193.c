/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [8] |= (arr_2 [i_0]);
        var_14 = (((!(((~(arr_0 [i_0])))))) ? ((((min(65527, 4437502966456000036))))) : (max(6, (arr_0 [i_0]))));
        var_15 = (((((min((arr_0 [i_0]), 32767)))) || (((arr_2 [i_0]) > (arr_0 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_16 = 0;
        var_17 = (max((arr_1 [i_1 + 1] [i_1 - 1]), ((((arr_4 [i_1] [i_1 - 1]) >> (((arr_4 [i_1] [i_1 - 2]) - 26)))))));
    }
    var_18 ^= (var_12 ? 1 : (32750 & var_11));
    #pragma endscop
}
