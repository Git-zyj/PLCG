/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = ((2973 > (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((((((((min(var_12, var_0)) + 9223372036854775807)) >> (var_13 - 19117)))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_16 = -12886942432229492693;
        var_17 ^= -var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = ((33743 ? (var_13 ^ 529985564) : ((-127 ? var_10 : (arr_1 [i_1] [i_1])))));
        var_19 = 3596;
    }
    var_20 ^= ((((((((var_7 ? 61940 : 37))) ? var_12 : (((var_12 + 9223372036854775807) >> (53236 - 53196)))))) ? ((((max(var_5, var_1))))) : ((-6775 ? 4130182223 : 50126))));
    var_21 = var_4;
    #pragma endscop
}
