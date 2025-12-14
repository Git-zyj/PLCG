/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [4] |= (max((((arr_0 [i_0]) ? ((65535 ? 8046468298897100327 : 4294901755)) : (((65540 ? 145019191 : 1))))), ((((!(arr_0 [i_0])))))));
        arr_5 [i_0] = ((~((-5765678874598324003 ? (arr_3 [i_0]) : 65539))));
    }
    var_11 = var_9;
    var_12 = -117;
    var_13 -= var_10;

    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_14 = (((((var_10 ? (arr_0 [i_1]) : -33))) ? (arr_2 [i_1]) : (((!(-9223372036854775807 - 1))))));
        var_15 = var_9;
        var_16 ^= ((!(arr_7 [i_1 + 1])));
        var_17 += ((!(arr_2 [16])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (max(var_18, (((4294901761 ? 2705138286761458232 : 57269)))));
        var_19 = (max(var_19, (arr_8 [i_2])));
    }
    #pragma endscop
}
