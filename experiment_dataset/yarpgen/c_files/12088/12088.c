/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(19, var_4))) ? ((-((14384692109980269769 ? 1 : var_0)))) : var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_0 [i_0]), (min((var_6 & -100945500), (arr_1 [i_0] [i_0])))));
        var_11 = ((18446744073709551603 ? -2186 : (~12)));
        arr_3 [i_0] = var_8;
        arr_4 [i_0] = (~var_2);
    }
    var_12 = ((((!(((var_3 ? var_5 : var_0))))) || -var_5));
    #pragma endscop
}
