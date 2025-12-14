/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_6, (((-(var_4 ^ 8))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 &= (var_1 < var_2);
        arr_2 [i_0] = 5;
        var_12 = ((~((min((min(18639, var_0)), (var_3 <= -7222991088213005518))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [7] &= (~7);
        arr_6 [i_1] [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] = min((min(var_8, 18446744073709551603)), (var_4 / -1014));
        var_13 = (min(((var_0 ? var_7 : (((min(var_5, var_8)))))), (var_3 > var_8)));
        var_14 &= (min(234, var_9));
    }
    #pragma endscop
}
