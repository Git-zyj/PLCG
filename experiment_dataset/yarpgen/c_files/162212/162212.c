/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((-((11324047487092216532 ? (min(7122696586617335083, 7122696586617335084)) : (7122696586617335083 | 11324047487092216532)))))));
    var_11 = ((~(max(((7122696586617335083 ? 11324047487092216532 : var_1)), (((var_0 ? var_8 : var_8)))))));
    var_12 = (min(var_12, (((((11324047487092216541 ? var_4 : (7122696586617335057 && 11324047487092216532)))) ? (max((7122696586617335074 != 11324047487092216532), var_4)) : var_6))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= (arr_1 [4]);
        var_14 = (((((var_3 || var_6) != (arr_1 [i_0]))) ? (~11324047487092216518) : (((((arr_1 [i_0]) < 7122696586617335083))))));
        arr_2 [i_0] = ((var_1 & 7122696586617335083) ? -7122696586617335110 : (max((~7122696586617335083), (max((arr_1 [i_0]), var_9)))));
    }
    var_15 = var_2;
    #pragma endscop
}
