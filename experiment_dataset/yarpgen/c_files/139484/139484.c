/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_16;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = (max((((arr_2 [i_0]) & ((min((arr_1 [i_0]), (arr_2 [i_0])))))), (min(((max((arr_2 [i_0]), -2251))), (~var_13)))));
        var_19 += ((!(arr_1 [i_0])));
        arr_3 [12] &= ((!(arr_2 [i_0 - 1])));
        arr_4 [i_0] = ((((((((arr_2 [i_0]) ? 8992905187787671574 : (arr_2 [i_0 - 1])))) ? (((max((arr_1 [i_0 - 1]), (arr_2 [i_0]))))) : (((arr_1 [4]) ? (arr_2 [i_0 - 1]) : 9453838885921880042))))) ? ((((min((arr_2 [7]), (arr_0 [i_0])))) ? (!var_1) : (((arr_0 [i_0]) << (arr_1 [i_0 + 1]))))) : (arr_0 [i_0]));
    }
    var_20 = (var_1 >= ((var_11 ? (var_14 && var_12) : var_9)));
    var_21 = ((((max((max(var_9, var_8)), (var_6 >= var_14)))) ? ((255 ? ((min(var_0, var_9))) : (var_6 & 8992905187787671567))) : ((((max(var_3, var_8))) ? (max(9453838885921880049, 3522299363864186508)) : ((min(var_1, var_2)))))));
    #pragma endscop
}
