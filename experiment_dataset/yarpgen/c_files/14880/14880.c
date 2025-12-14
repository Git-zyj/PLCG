/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 * (((-(var_17 - 126))))));
    var_20 = (min((max(((min(var_18, 1377884802))), ((-104 ? 80 : var_2)))), 2546873961));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_21 += (((551751088000950073 ? ((((0 && (arr_1 [13])))) : (max(var_5, 21))))));
        arr_4 [7] [3] = (max((arr_0 [i_0]), 18446744073709551615));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 = (((((1133742510 ? (arr_7 [i_1]) : (((4294967263 ? 49 : -23)))))) ? (min(551751088000950073, (4287576688 > -109))) : (((((arr_6 [i_1]) <= -23))))));
        var_23 -= (((-(arr_7 [i_1]))));
    }
    #pragma endscop
}
