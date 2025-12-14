/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 ^= (((-(arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = (min(((((arr_0 [i_0]) && (arr_1 [i_0])))), (((((8469 ? var_10 : -10731))) ? ((max(-5960, 57064))) : 1))));
    }
    var_19 = (min(var_19, 1038));
    #pragma endscop
}
