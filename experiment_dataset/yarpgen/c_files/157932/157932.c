/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((~(((!(arr_0 [3] [i_0]))))));
        var_15 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = (arr_0 [i_1] [i_1]);
        arr_4 [i_1] = (arr_1 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (((arr_5 [i_2]) >> ((((arr_1 [i_2]) < (arr_0 [i_2] [i_2]))))));
        arr_7 [i_2] = (arr_6 [i_2]);
        var_18 = ((255 ? 0 : 12));
        arr_8 [i_2] = arr_1 [i_2];
    }
    var_19 = (max(var_19, (var_1 % var_5)));
    #pragma endscop
}
