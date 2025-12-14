/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 & (var_7 & var_3)));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = var_1;
        var_13 = (arr_1 [i_0]);
        var_14 = var_10;
        arr_4 [i_0] [i_0] = (((((1 & (((arr_2 [i_0]) & 62))))) ? -5423 : ((var_1 & (var_5 & var_6)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = (arr_6 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((25 ? 21368 : 254));
        arr_8 [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = var_0;
        var_17 = (arr_5 [i_2] [i_2]);
        var_18 &= ((var_6 & (arr_5 [i_2] [i_2])));
        arr_12 [i_2] = ((((((arr_1 [i_2]) & ((21368 ? 2648932211 : 0))))) & (var_8 & var_8)));
        var_19 *= 1;
    }
    #pragma endscop
}
