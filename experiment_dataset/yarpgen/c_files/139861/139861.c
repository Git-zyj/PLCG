/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = ((((max((arr_1 [i_0] [i_0]), ((1023 ? 1 : -1951980306))))) ? var_16 : (((var_6 / (arr_1 [i_0] [i_0]))))));
        var_19 *= 14679873850630625787;
        arr_2 [i_0] [i_0] = var_15;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((((((arr_3 [i_1]) || ((min(var_7, (arr_3 [1]))))))) << (((arr_3 [i_1]) + 30250))));
        arr_6 [i_1] [i_1] = max(1, (arr_4 [5] [i_1]));
    }
    var_20 = var_8;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 = ((var_10 ? (arr_8 [2]) : ((((min((arr_7 [i_2]), var_12))) ? 1 : 1011332159))));
        var_22 = (((arr_7 [i_2]) ? ((((arr_8 [14]) ^ var_4))) : (((((var_1 ? var_1 : var_14))) ? var_6 : ((1538224254 ? var_11 : var_9))))));
    }
    var_23 = (((((var_15 >= var_2) ? var_0 : var_8)) - var_8));
    #pragma endscop
}
