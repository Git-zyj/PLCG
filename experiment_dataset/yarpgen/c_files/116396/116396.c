/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_11 ? var_15 : 3511353580)) >> (var_14 - 3762280645)));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((max((arr_1 [i_0]), (arr_0 [i_0])))), (min(var_4, 783613709))))) ? (((((var_7 ? 1 : (arr_0 [i_0])))))) : (max(0, (((1 ^ (arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((((5460621562861300625 == (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = var_11;
        var_19 |= (arr_0 [24]);
        var_20 = (min(1, ((((min(1, 296980879))) ? 1 : (arr_6 [i_1])))));
    }
    var_21 = (max((((-121 ? var_2 : var_9))), ((15 ? 1 : 18446744073709551615))));
    var_22 = ((67108862 ? 536869888 : 18446744073709551610));
    var_23 = 1396641042;
    #pragma endscop
}
