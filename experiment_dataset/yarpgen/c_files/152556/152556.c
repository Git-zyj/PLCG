/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = (min(((-(arr_3 [i_0]))), (((((((arr_3 [i_0]) - var_5))) ? (((arr_3 [i_0 - 1]) ? var_10 : (arr_2 [i_0] [i_0 + 2]))) : (arr_0 [i_0 - 2] [i_0 + 2]))))));
        var_21 *= (arr_2 [i_0] [i_0 + 2]);
    }
    var_22 = 127;
    var_23 = 47956;
    var_24 = (min(var_24, var_5));
    #pragma endscop
}
