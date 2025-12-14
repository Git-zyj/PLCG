/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((arr_1 [i_0]), (((arr_1 [i_0]) + (arr_1 [1])))));
        arr_3 [i_0] = (((arr_1 [i_0]) ? (~-7868119858301904434) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_12 |= 7291;
    var_13 = (var_0 != var_10);
    var_14 = (-var_3 ? var_0 : -4858513917625352900);
    #pragma endscop
}
