/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = ((((!(((137438953471 ? 0 : var_9))))) ? (((((var_6 ? 7 : var_7))) ? var_10 : -3)) : ((((-5621431889808169164 < var_6) > ((max(191, var_5))))))));
        arr_3 [i_0] = (((var_4 / var_2) || (((var_10 ? (-5621431889808169185 * var_9) : var_7)))));
    }
    var_11 = (!2783527831);
    var_12 = (!8073350975992010188);
    var_13 = ((1 ? 74 : 20));
    #pragma endscop
}
