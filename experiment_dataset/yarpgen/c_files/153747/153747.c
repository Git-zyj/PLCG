/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 1));
    var_11 -= 28672;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [7] = var_6;
        var_12 = ((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))));
        var_13 = (min(var_13, (((((!(arr_3 [i_0]))) ? var_7 : ((-(((arr_1 [i_0] [i_0]) ? 146 : (arr_3 [i_0]))))))))));
    }
    var_14 = var_3;
    #pragma endscop
}
