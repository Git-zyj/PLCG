/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_11 = ((((max(var_3, 15821))) ? ((min(7, var_10))) : (((var_7 - 23568) ? ((min(var_5, (arr_1 [i_0])))) : -1704130166))));
        arr_3 [i_0] [i_0] = 23568;
        var_12 |= ((((max(var_9, (arr_0 [i_0] [i_0 + 2])))) ? ((520043951 ? (arr_2 [i_0 + 2]) : var_10)) : ((var_6 ? var_4 : (arr_2 [i_0 + 1])))));
    }
    var_13 |= var_0;
    var_14 = (min(var_14, (min(var_6, var_2))));
    #pragma endscop
}
