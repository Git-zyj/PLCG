/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_10 = 1026610440;
        arr_2 [i_0] = (~-1);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_11 = (371821316147323371 ? -1991007524 : (arr_1 [i_1 + 1]));
        var_12 = var_3;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_13 = 1991007521;
        var_14 -= (((var_9 && 3935229186230927036) ? (((var_3 || (arr_7 [i_2])))) : (((!(arr_7 [i_2]))))));
    }
    var_15 = -1;
    var_16 = var_7;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_17 = ((3935229186230927034 ? ((-(arr_11 [i_3] [i_3]))) : -1991007531));
        arr_13 [i_3] = var_3;
        arr_14 [i_3] = (arr_12 [i_3]);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_18 = (min((((2564 - ((-(arr_15 [i_4])))))), -3599467973));
        var_19 = (max(var_19, (((((((var_3 ? 2382365892 : 62955)) ? 2234207627640832 : var_4)))))));
    }
    #pragma endscop
}
