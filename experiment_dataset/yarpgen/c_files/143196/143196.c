/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 / (max(((165706554645778227 ? 1 : 96)), var_14))));
    var_21 = (max(var_21, ((((min(9644189141880616080, var_19)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (max(var_22, 2124188728));
        var_23 = (min(var_23, ((((((((arr_0 [i_0]) ? var_7 : 144)) <= ((((arr_0 [i_0]) >= (arr_0 [i_0])))))) ? (((arr_2 [i_0] [i_0]) ^ (arr_1 [i_0]))) : ((((var_17 & 7) << (((arr_0 [i_0]) - 60764))))))))));
    }
    #pragma endscop
}
