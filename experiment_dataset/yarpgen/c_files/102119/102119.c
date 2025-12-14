/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = ((-(var_19 * 199)));
        var_21 = min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), ((((arr_0 [i_0] [i_0]) ? 72 : (arr_0 [i_0] [i_0])))));
        var_22 = (~3450);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_3 [i_1]);
        arr_8 [i_1] = (((--240) <= (((arr_6 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : 159))));
        var_23 = max(((~(arr_3 [i_1]))), (((arr_3 [i_1]) ? var_15 : (arr_4 [i_1] [i_1]))));
        var_24 = (((((5236821643252676274 ? 41337 : 0))) ? (!2836221303721981779) : -96));
    }
    var_25 = min(var_18, var_10);
    #pragma endscop
}
