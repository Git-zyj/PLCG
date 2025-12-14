/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_20 = 6444078719515741596;
        var_21 = (((!var_12) ? var_11 : var_11));
        arr_2 [i_0 + 2] = ((-6444078719515741592 ? 10 : -11));
    }
    var_22 = ((~(((!(((var_16 ? var_0 : 10))))))));
    var_23 = (((((((8958290629771608473 ? 18446744073709551596 : var_6))) ? ((-8958290629771608474 ? 8958290629771608467 : var_19)) : var_3))) ? var_6 : var_3);
    var_24 &= var_15;
    #pragma endscop
}
