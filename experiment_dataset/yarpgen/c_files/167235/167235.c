/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (var_10 ? var_13 : ((((max(-8437, var_8))) ? (var_11 * var_13) : ((min(var_8, -26754))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 3713035205;
        var_16 = ((((~(arr_1 [9]))) <= ((((max(30784, -195309659))) ? 365169751 : (10044 * 2)))));
        var_17 = (max(var_17, (((-10963613654020355552 || ((!(((0 ? 26744 : 6974219570463433404))))))))));
        arr_3 [i_0] &= 10963613654020355563;
    }
    #pragma endscop
}
