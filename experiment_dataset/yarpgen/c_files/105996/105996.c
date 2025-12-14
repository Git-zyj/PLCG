/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (44837 ? (min((!28705), ((var_5 ? var_18 : 44837)))) : ((min(var_11, ((-1942994021 ? 1942994020 : var_2))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = 1942994021;
        arr_2 [i_0] = (((arr_0 [i_0] [13]) ? (arr_0 [i_0] [i_0]) : (((max(184246090, -1942994021))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [1] = ((((max((-2147483647 - 1), (arr_5 [i_1])))) ? (((!(!384)))) : ((((arr_1 [i_1]) == (arr_1 [i_1]))))));
        var_21 = var_2;
        var_22 = (max(var_22, ((max((arr_0 [i_1] [i_1]), (((((4222670647 ? 2147483647 : 1))) ? (69 / 1028853662415253819) : (((0 ? 1942994021 : -1319562178222715077))))))))));
    }
    #pragma endscop
}
