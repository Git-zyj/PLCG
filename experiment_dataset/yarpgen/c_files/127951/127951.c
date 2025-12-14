/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [4] &= (arr_0 [6]);
        arr_5 [i_0] [i_0] = var_10;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_18 &= var_6;
        var_19 ^= 974614809;
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_20 = var_12;
        arr_12 [i_2] [i_2] = (((10491610756745864518 >> (-93 + 142))));
        arr_13 [i_2] = ((((min(var_10, (max(2137545743, (arr_3 [i_2])))))) ? 235 : ((max(((var_12 && (arr_1 [18] [i_2]))), var_1)))));
    }
    var_21 = ((!((((var_17 / var_12) * ((min(var_6, var_2))))))));
    var_22 = -48;
    var_23 = (max(var_23, 22293));
    #pragma endscop
}
