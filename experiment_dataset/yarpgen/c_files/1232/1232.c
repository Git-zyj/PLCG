/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = ((((((((~(arr_2 [i_0] [i_0])))) || (var_7 ^ 2047)))) << (var_10 >= var_9)));
        var_19 = ((((-(arr_3 [i_0] [i_0]))) <= (var_1 || 15382962650668353217)));
        arr_4 [i_0] = ((4374559232014683000 ? (arr_0 [i_0]) : 1));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_20 = (~var_11);
        arr_8 [i_1] [i_1] = 24576;
    }
    var_21 = var_8;
    var_22 |= var_13;
    #pragma endscop
}
