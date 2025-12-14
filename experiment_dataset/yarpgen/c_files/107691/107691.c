/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_13;
    var_17 += (min(var_6, (((var_1 <= (min(var_5, 99)))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_18 = ((((((((arr_1 [i_0]) ? 196 : (arr_2 [i_0] [i_0 - 3])))) % (arr_1 [i_0 + 3]))) % (((min(1, 4757))))));
        var_19 = (((arr_2 [i_0] [i_0 + 4]) + (min((((arr_0 [i_0 - 2]) ? (arr_1 [i_0]) : 45691)), (arr_2 [i_0 - 1] [i_0 - 3])))));
    }
    var_20 = var_11;
    var_21 = (min(var_21, (((~(54 || var_8))))));
    #pragma endscop
}
