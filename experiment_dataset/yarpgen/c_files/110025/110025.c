/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((max(((1 ? var_1 : var_6)), var_15))) || var_10));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 += (arr_2 [i_0]);
        var_20 = ((((24 ? 9341 : -13664)) / ((~(min((arr_2 [i_0]), -1388864022))))));
    }
    var_21 = -var_9;
    var_22 = var_4;
    #pragma endscop
}
