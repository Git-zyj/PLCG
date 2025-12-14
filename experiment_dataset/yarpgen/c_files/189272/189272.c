/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_12 += ((var_7 ? var_6 : ((min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1]))))));
        var_13 = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_3 [i_1]);
        var_15 = var_8;
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_16 += ((var_2 <= (((arr_5 [i_2 + 4]) ? var_4 : (arr_8 [i_2 + 1])))));
        var_17 = var_11;
    }
    var_18 = var_4;
    var_19 = var_6;
    var_20 |= var_0;
    #pragma endscop
}
