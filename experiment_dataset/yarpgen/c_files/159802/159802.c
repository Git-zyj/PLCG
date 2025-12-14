/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max(1, (min(var_1, (min(var_1, var_8))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_15 = 96;
        arr_2 [7] [i_0] = (var_4 ? ((max(var_3, (arr_0 [i_0 + 1])))) : ((~(arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 *= 8191;
        var_17 = (((((~(arr_4 [i_1])))) ? var_8 : ((((min(var_10, var_9))) ? (min((arr_4 [4]), var_12)) : 1))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_7 [i_2] [i_2 - 1] = (5752687930508173990 ? 8191 : ((57338 ? 2214835692337363236 : 1)));
        var_18 = (min(var_18, (((!(arr_3 [i_2] [i_2 - 1]))))));
    }
    #pragma endscop
}
