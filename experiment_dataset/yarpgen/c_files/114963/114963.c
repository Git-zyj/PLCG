/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (~var_4)));
    var_16 ^= var_7;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(var_9, (min((arr_0 [i_0 + 1]), 518259532230906703))));
        var_18 = (min((((arr_1 [i_0 - 1]) ? (min((arr_0 [i_0]), (arr_1 [i_0 - 1]))) : var_0)), var_4));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1 - 1] = (!3985287230);
        arr_6 [i_1] [1] &= (arr_4 [i_1 + 1]);
        var_19 = (max(var_19, ((min(var_10, (max((arr_1 [19]), var_8)))))));
        var_20 = (min(var_20, ((min((((arr_3 [i_1 - 2]) + (arr_3 [i_1 + 1]))), (((arr_3 [i_1 - 2]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 2]))))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_9 [i_2] [i_2]) % ((((arr_9 [i_2] [i_2]) || var_1)))));
        arr_11 [i_2] = ((((min((arr_0 [i_2]), (arr_0 [i_2])))) ? (~var_13) : (arr_0 [i_2])));
        var_21 -= (((var_2 ? 6044868498928664186 : (min(9223372036854775807, 132120576)))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_22 = ((-var_1 ? (((min(var_4, 32766)))) : var_13));
        var_23 = (((var_5 + 9223372036854775807) << ((((((min(14385474571388830280, (max(var_9, 1))))) + 15833)) - 33))));
    }
    var_24 = var_14;
    #pragma endscop
}
