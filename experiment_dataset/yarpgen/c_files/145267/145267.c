/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(var_9, 3)))) ? var_7 : ((83 ? 0 : 1943025855))));
    var_19 = (min(var_19, (((var_6 >= ((var_16 ? ((var_5 ? var_0 : -60)) : (~var_6))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);
        var_21 = (min(var_21, var_13));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = (max(8157183579046404454, (arr_7 [i_1] [i_1])));
        var_22 = ((+((((arr_5 [i_1]) - (arr_1 [i_1 + 1]))))));
    }
    var_23 = var_2;
    #pragma endscop
}
