/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (!var_11);
        var_15 *= (max((((var_14 || (((3334443446 ? var_0 : (arr_1 [i_0]))))))), var_10));
        arr_3 [i_0] = (!var_3);
    }
    var_16 |= (((((-2626239984651882515 ? var_4 : 1))) ? 271005070 : 11959222617853784879));
    #pragma endscop
}
