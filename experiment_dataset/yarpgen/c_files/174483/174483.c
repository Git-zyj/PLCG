/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (2 >= var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((var_6 ? 127 : -2147483647));
        var_13 = ((-4623506122200457870 ? 73 : var_2));
    }
    var_14 = (!var_11);
    #pragma endscop
}
