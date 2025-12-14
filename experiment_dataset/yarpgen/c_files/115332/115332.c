/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((min(var_8, var_0))), ((-77 - (var_13 + var_2)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((min((~131), 4)));
        var_16 = (max(var_16, (((145 > ((~((min((arr_0 [i_0]), -16))))))))));
        var_17 = (min(((-63907 / (min(1601, 2233230249)))), (((!(arr_0 [i_0]))))));
        var_18 = (max(var_18, (((-(--424035889))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_19 = (~var_12);
        var_20 = (min(var_20, var_11));
    }
    #pragma endscop
}
