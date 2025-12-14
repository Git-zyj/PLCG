/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((min(43949, 1)))) >= var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] |= var_5;
        var_11 = ((var_9 ? var_9 : ((var_3 ? var_3 : var_4))));
        var_12 = (min(var_12, -var_0));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 = ((((max((var_4 - var_0), (((33551 ? 31988 : 31985)))))) ? ((32004 ? (max(41326, 3850063117)) : var_7)) : ((min(((var_6 >> (var_8 - 8332525359022105486))), (max(var_0, var_9)))))));
        arr_7 [i_1] [i_1] = (((((var_7 ? var_8 : var_9))) ? ((var_9 ? var_2 : var_8)) : (~var_1)));
        var_14 = ((24211 <= (var_6 & var_6)));
    }
    var_15 += (max(((((max(-1584362145, 41322))) ? var_4 : var_9)), (((var_2 ? (var_7 && var_2) : (min(var_1, var_3)))))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] [i_2] &= ((31984 ? 32009 : 41331));
        var_16 ^= var_0;
        var_17 = (max(var_17, (min(var_8, (max(32767, 135))))));
    }
    var_18 = var_8;
    #pragma endscop
}
