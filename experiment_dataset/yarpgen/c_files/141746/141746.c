/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ^ ((((var_5 > var_2) != (var_1 | var_0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((var_4 > 1) && ((((var_8 + 2147483647) >> (var_2 - 1857323113))))));
        var_16 = var_7;
        var_17 = ((((((var_12 + 2147483647) >> (190 - 165)))) ? (var_6 | 1) : 65521));
        var_18 = (((((-1 + 2147483647) >> (var_13 - 153))) <= ((((arr_2 [i_0] [19]) == var_7)))));
        var_19 = (max(var_19, ((((arr_0 [i_0]) <= (arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (max(var_6, (((arr_2 [i_1 - 3] [i_1 - 1]) ? 65500 : (arr_1 [i_1 - 3] [19])))));
        var_20 &= (min((-2147483647 - 1), (((1 | 87) ^ 1576588568))));
        var_21 = (max((140737421246464 | var_7), (arr_0 [15])));
        var_22 = ((((~(arr_1 [i_1 + 1] [i_1 + 1])))) ? (((var_0 == (var_12 != 1)))) : var_9);
    }
    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] [12] = max(((-((-(arr_7 [i_2]))))), -255);
        arr_10 [17] = ((((min(((1 ? (arr_8 [i_2 - 2]) : 1)), -1738788532))) ? (arr_8 [i_2]) : (~var_3)));
    }
    #pragma endscop
}
