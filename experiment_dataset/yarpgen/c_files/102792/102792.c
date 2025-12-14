/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [18] &= ((max(var_16, (min((arr_0 [4]), 0)))));
        var_18 = ((arr_1 [i_0] [i_0]) & (~1));
    }
    var_19 = ((var_5 ? var_2 : (max(((526739894 ? var_13 : var_9)), var_11))));
    var_20 = (((-(var_17 + 9421874614491899897))) - (((var_17 ? var_15 : 242))));
    #pragma endscop
}
