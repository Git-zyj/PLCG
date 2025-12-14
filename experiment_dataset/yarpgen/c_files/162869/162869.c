/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (((((-(var_1 >= 6633757070371747464)))) ? ((((((var_0 ? var_4 : 6633757070371747449)) < (arr_0 [i_0]))))) : 469229564));
        var_13 += ((~((((arr_1 [2]) == (arr_1 [4]))))));
        arr_2 [i_0] = ((-(((66 - 17444) ? (((var_11 + (arr_1 [i_0])))) : ((2048 ? 66 : 11812987003337804152))))));
        arr_3 [i_0] = (max((-2063 * 241), (((arr_1 [i_0]) & 140))));
    }
    var_14 = ((16 ? -2049 : 2070));
    #pragma endscop
}
