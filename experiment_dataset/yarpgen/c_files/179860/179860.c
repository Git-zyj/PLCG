/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_9;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = (arr_2 [i_0 + 1]);
        arr_3 [i_0 + 1] = ((+(((arr_1 [i_0 - 1]) * (arr_1 [i_0 - 1])))));
        var_17 = (min((((((var_6 ? var_6 : (arr_2 [i_0])))) / (arr_1 [i_0]))), (arr_0 [8])));
        var_18 ^= (769654340 == var_7);
        var_19 += (((max(((var_11 * (arr_0 [i_0]))), (var_0 == 769654336))) / var_8));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_20 += (((arr_5 [5] [i_1]) ^ ((var_12 ? (arr_1 [i_1]) : 0))));
        var_21 = (max(var_21, 91));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] = (arr_7 [i_2] [i_2]);
        var_22 = ((var_7 | ((min((max(var_1, var_7)), (arr_7 [i_2] [i_2]))))));
        var_23 = var_5;
    }
    var_24 = var_2;
    var_25 &= (var_3 >= var_6);
    var_26 = var_2;
    #pragma endscop
}
