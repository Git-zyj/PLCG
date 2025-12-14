/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((((((arr_1 [i_0]) ^ (arr_1 [i_0])))) ? (max((((!(arr_2 [i_0] [i_0])))), var_8)) : (~var_7)));
        var_14 = var_7;
    }
    var_15 = 0;
    var_16 = (((52519 ? (31 || var_6) : ((var_10 ? var_0 : var_4)))));
    var_17 = 23;
    #pragma endscop
}
