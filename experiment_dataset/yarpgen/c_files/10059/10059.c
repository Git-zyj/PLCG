/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max(-5250762177182247710, 5250762177182247710)));
    var_12 = 4671363159960084246;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 = ((((((!(-9223372036854775807 - 1))) ? (~5250762177182247710) : 27806))) ? 645707631 : (((arr_1 [i_0 - 2] [i_0 - 2]) ? 645707631 : 0)));
        var_14 = (((((739798599 ? ((max(2048, 1501402501))) : (16575 & 5250762177182247710)))) ? ((var_0 ? ((var_0 ? 37743 : var_0)) : (min(var_5, var_0)))) : (6991915611162394840 / var_1)));
        arr_3 [3] |= (~5091);
        var_15 ^= (max(((~(arr_2 [i_0 - 1]))), (92166089 % 17832)));
    }
    #pragma endscop
}
