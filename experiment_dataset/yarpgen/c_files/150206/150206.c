/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 = (-((((min(var_13, 608927613933870700))) ? (~-22395) : ((var_0 ? var_3 : var_15)))));
    var_20 = (max(var_20, ((((((max(var_7, -22391))) > ((-1 ? 1703734461 : var_6))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (min(var_21, ((max(var_13, (arr_2 [i_0]))))));
        arr_3 [i_0] = (((((((28963 ? 63 : 4515668939847198750))) ? (arr_2 [i_0]) : 6189642643982058191)) + ((((((var_4 ? var_7 : (arr_2 [i_0])))) ? var_5 : -var_15)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((max(2681988809, 3890)));
        arr_7 [i_1] |= var_6;
        var_22 = (max(var_22, (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_23 = (max(var_23, (((min(1304846258, -6202380661461078332)) - (((-(arr_5 [i_2]))))))));
        arr_12 [i_2] = var_4;
        arr_13 [i_2] [i_2] = var_11;
    }
    var_24 = ((-var_5 ? 62663310 : var_15));
    #pragma endscop
}
