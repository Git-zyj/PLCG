/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_2 ? var_14 : var_0)) * ((8191 ? 0 : 1))))) ? (((max(13, 22057)))) : ((var_10 ? ((4028 ? 20 : var_7)) : var_8))));
    var_17 = (!2305702271725338624);
    var_18 = (!var_9);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(((((((var_8 * (arr_1 [i_0])))) ? var_14 : ((((arr_0 [i_0] [i_0]) && var_1)))))), 15221953834273805678));
        var_20 |= min((((!(arr_0 [17] [i_0])))), (arr_0 [i_0] [i_0]));
        arr_2 [i_0] = (((arr_1 [i_0]) >> (((arr_1 [i_0]) ? 1 : (arr_1 [i_0])))));
    }
    #pragma endscop
}
