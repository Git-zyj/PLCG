/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_15, var_10));
    var_20 ^= max((max(-2982202517366293671, var_12)), (-var_15 & var_6));
    var_21 = (min((max(var_15, (-32767 - 1))), ((max(var_16, (min(var_5, var_11)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 = min((max(4294967295, (arr_0 [i_0] [i_0]))), (((arr_0 [i_0] [i_0]) & (arr_0 [6] [i_0]))));
        var_23 -= ((255 * (((!(arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((!(arr_0 [i_0] [2])));
    }
    #pragma endscop
}
