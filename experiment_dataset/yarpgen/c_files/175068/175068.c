/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(21, (min(-3246770771558288585, (arr_0 [i_0])))));
        arr_4 [i_0] = (((2147483647 ? 7787400202555214827 : (arr_2 [i_0]))));
    }
    var_13 = 139;

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((arr_1 [i_1]) - (arr_6 [i_1] [i_1])));
        var_14 -= 8;
        var_15 = var_6;
    }
    var_16 = var_10;
    #pragma endscop
}
