/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((max(59695, (~var_12)))))));
    var_16 = 32767;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((0 ? -1 : 18446744073709551602));
        arr_2 [11] = ((var_4 * (arr_0 [i_0] [i_0])));
        var_18 = (((max((arr_1 [i_0]), ((1 ? 13 : 3)))) << ((((var_14 * (arr_0 [i_0] [6]))) - 727320967))));
        var_19 -= (((-(arr_0 [i_0] [i_0]))));
    }
    var_20 |= ((~((-1 ? var_11 : ((var_14 ? 4 : 4433013272391138351))))));
    #pragma endscop
}
