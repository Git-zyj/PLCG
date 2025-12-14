/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;
    var_20 = 38571;
    var_21 -= (min(214, 29798));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(201, (((arr_1 [i_0] [i_0]) ? 117 : -756))));
        var_22 = (max(var_22, ((var_12 << (var_18 - 3389259478348838882)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((!((((arr_5 [i_1]) | (arr_5 [i_1]))))));
        arr_8 [17] = var_13;
    }
    #pragma endscop
}
