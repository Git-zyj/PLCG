/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 0;
        arr_4 [i_0] = ((-88 ? (((84 <= (arr_0 [i_0]))) : (arr_2 [i_0]))));
        var_20 = (((~(arr_1 [i_0 + 1]))));
    }
    var_21 = (min(var_5, (((9223372036854775807 - 76) % -9223372036854775781))));
    var_22 = var_6;
    var_23 = 880783543;
    #pragma endscop
}
