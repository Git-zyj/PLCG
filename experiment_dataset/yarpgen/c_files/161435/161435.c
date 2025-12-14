/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((0 ? (arr_2 [i_0] [i_0]) : 45)) != ((var_17 ? var_3 : (arr_2 [i_0] [i_0])))));
        var_18 -= ((-(arr_0 [i_0])));
    }
    var_19 = 1;
    var_20 = (((min(((var_10 ? var_17 : var_13)), ((min(1, var_10))))) % var_1));
    var_21 = (((((~((1 ? var_13 : 1))))) && var_3));
    #pragma endscop
}
