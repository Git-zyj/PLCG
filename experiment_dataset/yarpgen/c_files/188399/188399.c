/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min(var_16, 15267)), (-2147483625 > var_11)));
    var_21 += ((-43 ? var_2 : -43));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_22 += (arr_2 [i_0 - 1]);
        var_23 += var_4;
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_24 += 15240;
        var_25 += 65528;
        var_26 += ((33839 ? (1 >= -36) : (((1 == (arr_5 [i_1] [i_1]))))));
    }
    var_27 = (min(-16425, 140));
    #pragma endscop
}
