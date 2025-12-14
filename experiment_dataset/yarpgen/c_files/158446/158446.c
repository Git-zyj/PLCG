/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 -= (((arr_0 [11] [9]) == (!4294967295)));
        arr_3 [i_0] = (220580457 && var_14);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = ((((max(((max(1, 511))), ((2605358579 ? 3 : 2561832441))))) == (arr_0 [3] [i_1])));
        var_19 = (max(((6757911642852352963 << (var_3 - 2221522171)), (var_14 >> 2))));
        arr_6 [i_1] = 12100;
    }
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        var_20 = (arr_7 [i_2]);
        var_21 &= (!12203692850603332308);
        var_22 = 131004808;
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_11 [i_3 + 1] = ((-(-526 - 29)));
        arr_12 [8] = min((arr_10 [11]), 524287);
    }
    #pragma endscop
}
