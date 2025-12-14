/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_0;
    var_15 *= (max(var_11, (((252 > 2213409653457293543) ? (32765 > 33554431) : ((4294967287 >> (var_12 - 346041191)))))));
    var_16 = ((var_3 ? ((~(95 - 4261412854))) : 230));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = (((3210498463 ? 27249 : (arr_1 [i_0 + 1]))));
        arr_2 [i_0] = (((arr_1 [i_0 + 1]) ? var_9 : 8870815693186382998));
        var_18 = (min(var_18, 84));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_19 = 19;
        arr_6 [i_1] = ((~(min(16233334420252258069, 255))));
    }
    #pragma endscop
}
