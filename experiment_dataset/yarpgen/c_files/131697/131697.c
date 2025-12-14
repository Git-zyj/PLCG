/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((1 ? ((16705774740529807859 * ((0 ? -1 : 9640402688098236617)))) : var_2));
    var_18 = var_16;
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [7] = ((((min((min((arr_1 [i_0]), var_14)), (arr_1 [i_0])))) ? ((((18727 >= ((var_1 ^ (arr_0 [i_0]))))))) : (((arr_1 [i_0]) | (max(-64, var_13))))));
        arr_3 [9] [i_0] = 0;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((-(((18014398509481983 <= (arr_1 [i_1]))))));
        arr_7 [i_1] [i_1] &= ((+(((16705774740529807859 ^ 0) | (arr_1 [i_1])))));
    }
    #pragma endscop
}
