/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-(((~var_7) ^ -116)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min(var_13, var_10));
        arr_4 [i_0] = (((((((var_6 >> (var_2 - 54))) > 6116))) >> (var_2 - 45)));
        arr_5 [i_0] = (var_2 ? var_2 : ((var_4 ? -723865849 : ((6116 ? var_9 : var_3)))));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] [10] = 65280;
        var_14 = 252;
        arr_9 [i_1] = var_4;
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_13 [16] = ((var_5 ? (+-21443) : 6116));
        var_15 = (max(var_15, var_6));
        var_16 &= ((((((1152921487426977792 ? var_6 : 63)) + -var_4)) != (((((65528 ? var_7 : -4409))) ? var_5 : -var_1))));
        var_17 = (max(var_17, -1152921487426977792));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = 4294967280;
        arr_17 [i_3] = ((-113 - ((7300620646068570261 ? var_1 : -var_0))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_20 [i_4] = -5360087440614537985;
        arr_21 [i_4] = 125;
    }
    var_18 = (!var_8);
    var_19 = var_10;
    #pragma endscop
}
