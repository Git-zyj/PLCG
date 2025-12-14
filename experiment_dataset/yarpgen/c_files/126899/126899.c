/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [8] &= (((((((-127 - 1) ^ 90)) | (~47))) ^ (((((var_10 ? var_2 : 15816)) > (!var_14))))));
        arr_4 [i_0] = (((arr_0 [i_0]) > -33));
        var_17 = (max((min(var_3, (arr_1 [i_0] [i_0]))), (((~(16 < 44971))))));
    }
    var_18 = -100;
    var_19 = (~20565);
    var_20 |= ((!(((492581209243648 ? 15816 : -11205)))));
    #pragma endscop
}
