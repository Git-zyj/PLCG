/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 0;
    var_16 = (~var_9);

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 26276;
        var_17 = var_9;
        var_18 = (max((arr_1 [i_0]), (min((max((arr_1 [i_0]), (arr_2 [i_0] [i_0]))), (0 & var_7)))));
        var_19 += (-(max((arr_0 [i_0] [i_0]), (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_1 [i_1]);
        arr_8 [i_1] = (((var_8 ? 1 : var_10)));
        var_20 &= (((arr_2 [i_1] [i_1]) << (253172739 - 253172723)));
    }
    var_21 *= ((+(max((~-23540), ((min(var_0, 1)))))));
    #pragma endscop
}
