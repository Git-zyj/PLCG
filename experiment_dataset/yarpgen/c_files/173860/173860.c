/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = ((((((max(var_5, var_10)) == -var_7))) < 249));
    var_16 |= (max(var_6, 2044));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((~(((!(arr_0 [i_0]))))));
        arr_2 [11] [4] &= (arr_1 [i_0]);
        arr_3 [0] [0] = (max(((~((var_0 ? var_8 : (arr_1 [i_0]))))), 244));
    }
    var_18 ^= (((-2147483645 < var_2) ? var_0 : (((max(var_12, var_11)) + ((max(var_7, 496)))))));
    #pragma endscop
}
