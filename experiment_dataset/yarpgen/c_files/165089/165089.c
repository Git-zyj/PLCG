/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_17 = 10814610550914438628;
        arr_4 [i_0] = (((arr_1 [i_0] [i_0]) ? var_9 : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (arr_7 [i_1]);
        arr_9 [i_1] = (min((min(51947, 58)), (((!(~0))))));
        var_18 = ((18446744073709551614 ? 13 : -86));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        var_19 = (~((-(arr_11 [i_2 + 1]))));
        var_20 *= (arr_11 [i_2 + 3]);
        var_21 *= (var_1 / var_4);
        arr_12 [i_2] = ((!((((~18382418476060601571) ^ (((min(var_14, var_12)))))))));
    }
    var_22 = 24;
    #pragma endscop
}
