/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (((-(arr_0 [i_0] [i_0]))));
        arr_3 [0] &= (min(((((min(1126207241, (arr_0 [10] [2])))) ? (min(var_11, 3066577009)) : (arr_0 [i_0] [i_0]))), ((((!9424) >= (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        var_13 = ((((((arr_1 [i_1]) - (((var_7 ? var_3 : var_10)))))) ? (min((arr_5 [i_1 - 2]), (arr_5 [i_1 - 1]))) : (arr_2 [i_1 - 1] [i_1 - 4])));
        var_14 = (min(var_14, (((!(((207 ? 1228390286 : 835370836))))))));
    }
    var_15 &= 6;
    #pragma endscop
}
