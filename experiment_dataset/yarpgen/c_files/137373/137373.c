/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (5 >= var_13);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_9))));
        var_21 = ((((!(13 != 13))) ? ((((arr_0 [i_0] [i_0]) || 4020280747334468635))) : 18116798632634665190));
        arr_3 [i_0] = ((((45665 << (31 - 21))) <= ((((!(arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_22 = (max(var_22, 10));
        var_23 = 19878;
    }
    #pragma endscop
}
