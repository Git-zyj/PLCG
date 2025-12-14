/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= -8412951354312886256;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_21 ^= (min(1634525339, -53));
        var_22 *= ((var_8 * 2047) ? var_2 : (0 - 4294967268));
        var_23 -= (((((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0]))))) ^ (((arr_0 [i_0 - 1]) & 255))));
    }
    var_24 |= (var_15 ? var_2 : (var_10 % var_8));
    #pragma endscop
}
