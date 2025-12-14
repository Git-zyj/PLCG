/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((var_10 * var_11), var_6));
    var_15 = (max(var_15, var_4));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((((1 ? (arr_1 [17] [i_0]) : (arr_0 [i_0 - 1])))) ? (((((37442 ? 28094 : (arr_0 [i_0])))) + (arr_1 [i_0 - 1] [i_0]))) : (((max(37450, (min(37442, 95))))))));
        var_16 ^= (28112 ^ 161);
        var_17 = (max(((min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1])))), (max(1, (arr_1 [i_0 - 1] [i_0])))));
        var_18 = (((min(var_7, 3538190267339215388)) >= 3491815064383719461));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((28080 - (min(1655163570736276642, 376848940))));
        arr_6 [4] &= ((!((((arr_0 [i_1 - 1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1]))))));
        var_19 += (max(28084, ((2925915025 ? (arr_3 [2]) : 65535))));
        arr_7 [i_1] [0] |= ((!(1090877178 + 255)));
        var_20 |= min(((((arr_3 [6]) ? var_3 : var_8))), ((65535 ? 0 : -30174)));
    }
    var_21 = (~var_11);
    #pragma endscop
}
