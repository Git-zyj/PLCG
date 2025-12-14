/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(((max((162 - 169), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))), (max((arr_1 [i_0] [i_0]), ((min(-78, (arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] &= ((((max(((var_10 ? 1 : 27844)), ((max(162, 27)))))) <= (arr_0 [i_0] [i_0])));
        var_12 ^= (max((min((min((arr_1 [i_0] [i_0]), var_2)), (~159))), (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = (max((arr_1 [i_0] [i_0]), 97));
    }
    var_13 = (max(var_2, (max(var_3, var_8))));
    var_14 = (((((var_0 ? var_6 : var_9))) ? (max((1 - var_10), (min(var_8, var_3)))) : ((((var_1 ? var_4 : var_2)) - (11765300804792762825 + 19628)))));
    var_15 = (((((var_7 + (max(255, var_5))))) + var_3));
    #pragma endscop
}
