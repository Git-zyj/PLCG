/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(1028402058 == 541366907)));
    var_21 = 119;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_15;
        arr_3 [i_0] [i_0] = -var_14;
        arr_4 [9] [i_0] = (((((min(var_15, var_3))) ? (((arr_1 [i_0] [i_0]) ? 107 : (arr_0 [i_0]))) : (arr_1 [i_0] [i_0]))));
    }
    var_22 = (min(((((1028402083 < var_12) ? (!var_7) : 13082))), (((!var_15) ? -var_5 : (3266565237 & 599334496)))));
    #pragma endscop
}
