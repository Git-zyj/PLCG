/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);
        var_18 -= (!var_10);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = (min(var_19, (((-var_6 ? var_13 : ((8181979416706314302 ? 56412 : var_12)))))));
        var_20 = (arr_2 [i_1]);
    }
    var_21 = ((((max(148, var_6))) + var_4));
    var_22 = ((((min(var_2, ((var_14 ? var_6 : 39876))))) ? ((min(((102 ? var_16 : var_14)), (((var_16 + 2147483647) >> (39884 - 39854)))))) : ((((min(var_10, var_16))) ? (((6 ? 148 : 39876))) : var_4))));
    #pragma endscop
}
