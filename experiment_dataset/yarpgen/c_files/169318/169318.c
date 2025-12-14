/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_6;
    var_17 = ((((max((var_3 != var_8), (18895 * 16703688921539996358)))) ? (((46641 << (46671 - 46659)))) : ((((var_1 << (var_11 - 13769))) & 46641))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = ((min((min(var_3, 1)), 131)));
        var_20 = ((((max((arr_2 [i_0]), (arr_1 [i_0])))) || ((min(((2115992948 ? (arr_1 [i_0]) : (arr_0 [i_0]))), var_12)))));
    }
    var_21 = ((var_1 ? ((min((var_15 | var_8), (var_10 | var_4)))) : ((((min(var_6, var_10))) ? var_12 : (min(-526054519312213884, var_2))))));
    #pragma endscop
}
