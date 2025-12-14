/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_10;
    var_19 = (((((var_3 ? var_14 : -19493))) ? (!0) : ((var_0 ? var_6 : (((192 ? -19493 : var_12)))))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_20 -= (min((arr_1 [i_0 + 3]), -19493));
        arr_3 [i_0] = (((((arr_1 [i_0 + 3]) + -16586))) ? (arr_0 [i_0 - 1]) : ((-(arr_0 [i_0 + 3]))));
        arr_4 [i_0] [i_0] = (((((arr_1 [i_0 + 3]) ^ 1184131630))) ? ((((arr_1 [i_0 - 1]) <= -862437489))) : (((arr_1 [i_0 - 2]) + (arr_1 [i_0 + 1]))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((2147483647 ? ((min((arr_2 [i_1] [i_1]), 19492))) : 19518))) ? ((((arr_1 [i_1]) ? ((47 ? -960814178 : var_3)) : (arr_0 [i_1])))) : (min(23986, (-23986 + 576460752303423424)))));
        arr_9 [i_1] [i_1] = (arr_6 [i_1] [i_1]);
    }
    #pragma endscop
}
