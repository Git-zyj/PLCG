/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [8] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : 0));
        arr_5 [i_0] [i_0] = ((max((arr_3 [i_0]), (-127 - 1))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_10 [i_1] = ((max(143, (min(var_6, 4294967285)))));
        arr_11 [i_1] = -129660654;
        arr_12 [i_1 + 1] = -107;
        arr_13 [i_1] = (min((((0 <= (arr_7 [i_1 + 1])))), (arr_8 [i_1])));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        arr_17 [i_2] |= ((var_5 << (~-1)));
        arr_18 [i_2] [4] = 129660659;
    }
    var_14 = 129660659;
    var_15 = (max((max(var_1, 129660659)), ((min(-32741, 1)))));
    #pragma endscop
}
