/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0]) ? 53048 : var_18))) ? -18446744073709551615 : (!var_2)));
        arr_3 [i_0] = ((((((arr_1 [i_0] [i_0]) ? var_17 : (arr_0 [i_0])))) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : -2001565725))) : 5370));
        var_19 -= ((((((((var_13 ? -2001565712 : var_14))) ? ((34767 ? (arr_1 [i_0] [i_0]) : 0)) : var_16))) ? ((30794 ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))) : ((var_10 ? var_11 : var_3))));
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 = ((((((((112 ? var_5 : 2))) ? ((3968 ? (arr_6 [i_1] [20]) : 23463)) : ((var_10 ? var_13 : (arr_4 [i_1] [i_1])))))) ? (((var_14 ? var_17 : var_13))) : ((2341 ? (!var_8) : var_6))));
        var_21 = ((((((((arr_4 [i_1] [i_1]) ? (arr_5 [i_1]) : 2001565739))) ? -76 : (((-2118277792 ? var_16 : var_13)))))) ? ((var_4 ? (((0 ? 65535 : (arr_5 [i_1])))) : (arr_6 [i_1] [i_1]))) : (((-((var_3 ? 2368 : (arr_4 [i_1] [i_1])))))));
        arr_7 [i_1] = 1286226721;
        arr_8 [i_1] [i_1] = ((-(((56252 ? -109 : -2001565725)))));
        var_22 = (!var_1);
    }
    #pragma endscop
}
