/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = ((var_2 | var_16) ? var_4 : var_6);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(arr_1 [i_0 - 1] [0])));
        var_21 = ((65535 ? 0 : 68719214592));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_22 = (min((min((var_18 + var_18), (((!(arr_4 [i_1])))))), 1536));
        var_23 -= (arr_3 [i_1] [14]);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_24 = (((65535 << ((((max(var_0, var_18)) - 36344))))));
        var_25 = (arr_6 [i_2] [6]);
    }
    #pragma endscop
}
