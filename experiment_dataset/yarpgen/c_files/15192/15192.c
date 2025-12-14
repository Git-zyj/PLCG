/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [16]);
        var_10 = (min(var_10, (~-1)));
        var_11 = (max(1152921487426977792, ((min((arr_2 [i_0]), (max((arr_0 [22]), -43)))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_12 ^= (((1 << 15) < (arr_4 [i_1])));
        var_13 = (max(((min(var_1, (arr_4 [i_1])))), ((((33554400 >> (38323 - 38312))) << (arr_2 [i_1])))));
    }
    var_14 = (min(var_14, var_2));
    var_15 &= var_6;
    var_16 = (var_0 * var_2);
    var_17 &= 11370951805537732519;
    #pragma endscop
}
