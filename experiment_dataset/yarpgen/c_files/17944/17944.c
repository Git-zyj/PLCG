/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((~(arr_0 [i_0]))) & (arr_2 [i_0])));
        var_13 ^= (max((var_7 % var_3), ((((arr_0 [10]) <= (var_8 < 18827))))));
        var_14 += (((((126 ? (max(var_10, 6548212160472041603)) : ((min(61378, var_6)))))) ? -3258356949405057753 : (arr_0 [14])));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_15 = (max(((var_11 ? (max(1, 6548212160472041603)) : (((min(var_9, var_1)))))), var_2));
        arr_8 [i_1] = (((((((3258356949405057752 ? var_10 : 1))) ? (((arr_0 [i_1]) ^ 1567660426)) : (arr_1 [i_1]))) ^ ((((((((arr_0 [i_1]) != (arr_4 [i_1]))))) | (max(-3258356949405057748, var_4)))))));
    }
    #pragma endscop
}
