/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_14;
        var_19 = (min(var_19, (((((((var_13 & (arr_0 [9]))) & (1065282044 <= var_5))) >= ((min((var_1 != 3229685246), ((-709 ? -731 : -22440))))))))));
        var_20 &= min(((~(arr_0 [8]))), ((10389739303962688734 ? var_14 : (max(var_11, var_11)))));
    }
    var_21 = var_9;
    #pragma endscop
}
