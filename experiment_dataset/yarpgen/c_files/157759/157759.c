/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_4;
    var_14 = ((86 >> (-98 + 107)));
    var_15 = (((((((max(34221, 2262483118073658050))) ? (-98 * 13) : var_3))) ? ((~(0 < -651948361))) : ((((var_3 ? -19078 : -19096)) ^ var_12))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? ((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? (max((arr_1 [i_0] [i_0]), 1)) : (arr_0 [i_0]))) : (arr_0 [i_0])));
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (~((~(arr_1 [i_0] [i_0]))));
        arr_5 [i_0] = -523617139;
    }
    #pragma endscop
}
