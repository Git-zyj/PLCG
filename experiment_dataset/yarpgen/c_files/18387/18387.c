/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((((min(-495695262040474583, 1867779014))) ? var_4 : (var_2 <= 1867779043)))) ? var_7 : (((var_4 + 2147483647) << ((((((-1323558840400834513 ? var_1 : var_10)) + 98)) - 25)))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0];
        var_13 = (max((max((((15741548367037959105 || (arr_1 [i_0])))), ((var_6 ? 1867779064 : var_6)))), (arr_1 [i_0])));
    }
    #pragma endscop
}
