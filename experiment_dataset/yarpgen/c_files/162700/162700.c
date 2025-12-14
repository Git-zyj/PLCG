/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_10 = (((arr_3 [5] [10]) <= (((((2 ? var_1 : var_8))) ? var_3 : var_0))));
        arr_4 [i_0] = (min((min(var_6, var_8)), ((((arr_1 [i_0]) <= (arr_0 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_11 = ((65530 ? 65535 : 6));
        arr_8 [i_1] [i_1] = (max((((!(arr_5 [i_1] [i_1 + 2])))), 5));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_12 += ((((((min(0, 0))) ? ((min(var_4, var_9))) : (~0))) <= ((-(arr_3 [i_2 - 3] [i_2 + 1])))));
        arr_11 [i_2] = ((!(((((arr_7 [i_2]) && (arr_10 [8])))))));
    }
    var_13 ^= (((var_6 <= 65535) <= ((min(var_2, var_3)))));
    var_14 = (max(var_14, (((0 ? 65535 : 65535)))));
    #pragma endscop
}
