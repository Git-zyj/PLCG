/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_22 = var_5;
            arr_4 [i_0] [2] [i_0] = (((arr_0 [i_1]) ? 7680 : (((arr_2 [10] [5] [i_0]) ? (arr_0 [10]) : 178))));
        }
        var_23 = (arr_0 [i_0]);
        arr_5 [i_0] = (((-4419653169155304895 ^ (arr_3 [i_0] [i_0 + 1]))) & ((((((arr_3 [i_0] [1]) + var_5))) ? (arr_0 [1]) : (arr_1 [i_0 + 3]))));
    }
    var_24 = var_19;
    #pragma endscop
}
