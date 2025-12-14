/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_2 [1])));
        arr_3 [i_0 + 1] = (max(24673, (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1])))));
        var_19 = (min(var_19, ((max((((~((-24673 ? -24674 : 27497))))), (((~224) ? (~31) : 0)))))));
        var_20 = (((~-1549904772) ? (((-var_6 ? (((-24673 ? 1 : var_5))) : (-4179651795391887650 & 0)))) : (max(var_14, (max(var_13, (arr_2 [i_0 - 2])))))));
    }
    var_21 ^= 3567381579;
    #pragma endscop
}
