/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_7 ? var_3 : var_2))) ? ((var_8 ? var_7 : var_7)) : ((1 ? var_10 : var_2)))) % ((((((62 ? 1 : var_0))) ? (var_6 > var_7) : var_11))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((max(1, (arr_0 [i_0 - 1]))) * (((!(arr_0 [i_0 - 1]))))));
        arr_3 [i_0] = 18446744073709551611;
    }
    #pragma endscop
}
