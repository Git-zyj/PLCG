/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_11;
    var_14 = (min(var_14, ((((-((var_9 ? var_11 : var_3))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((((((0 ? -3530361800214464565 : 3530361800214464557))) ? 9223372036854775800 : ((-4276346688436950815 ? 11987623711359394947 : var_10))))) ? -4276346688436950845 : ((((5498 <= var_2) ? 20023 : 1)))));
        var_15 = ((((((((min(1, var_6)))) ^ var_9))) ? (min(0, ((var_0 ? var_1 : 128)))) : (12211716387620973190 < 1)));
    }
    #pragma endscop
}
