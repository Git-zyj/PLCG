/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_4);
    var_19 = (min(var_19, var_9));
    var_20 = ((((((var_10 ? var_14 : var_17)) / (~var_16)))) ? (((15189 | 7936) / var_12)) : ((var_6 ? (max(var_2, var_2)) : var_12)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = (((~var_4) > (!1356588473)));
        var_22 = (~(arr_0 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_23 = (((((arr_1 [9] [9]) - 4947159352685765273)) > (((~(arr_2 [i_1]))))));
        var_24 = ((-1990802961 && ((var_9 >= ((6923918699540409645 ? var_4 : (arr_2 [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_25 &= (((-(var_16 || var_8))));
        var_26 &= var_10;
        var_27 -= (((((var_9 && ((!(arr_2 [i_2])))))) % (arr_2 [i_2])));
    }
    #pragma endscop
}
