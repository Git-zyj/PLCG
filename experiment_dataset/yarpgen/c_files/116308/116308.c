/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = var_12;
        var_21 = ((1157353361765248462 ? ((((6240826128554413879 & -1157353361765248478) > (((var_0 ? 3046 : (arr_0 [i_0]))))))) : (arr_1 [i_0] [i_0])));
        var_22 = (min((((((((arr_0 [i_0]) ^ (arr_0 [i_0])))) ? var_5 : (arr_1 [i_0] [i_0])))), (max(var_11, 0))));
        var_23 = 32742;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_24 = (((0 | (max(32760, 1202607348)))));
        arr_4 [i_1] = ((~((-(arr_2 [i_1] [i_1])))));
    }
    var_25 = ((((((0 ? var_16 : var_11)))) & ((((min(var_19, 418))) ? (min(1, var_10)) : var_19))));
    #pragma endscop
}
