/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = 19130;
        arr_3 [i_0] [i_0] = var_7;
        arr_4 [i_0] = var_10;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_8 [i_1] = (min((~4067956018662149477), (min((~4067956018662149481), 4067956018662149477))));
        var_16 = arr_7 [1];
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {
        var_17 = ((min((arr_0 [i_2]), (arr_0 [i_2]))));
        arr_11 [i_2] = (arr_0 [i_2]);
    }
    var_18 = (((((((min(var_14, var_6))) ? var_10 : (min(25, var_8))))) ? 23961 : var_0));
    var_19 = var_0;
    var_20 = (-var_9 & var_10);
    var_21 |= var_5;
    #pragma endscop
}
