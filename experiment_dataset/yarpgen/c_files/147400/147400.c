/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = ((-(min(-1, var_3))));
        var_21 = (arr_2 [i_0] [i_0]);
        var_22 |= (!18446744073709551590);
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) ? 32020 : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_23 = (max(var_23, (((~(arr_5 [i_1 + 2]))))));
        var_24 = 32023;
    }
    var_25 = (min(var_25, ((min(((-(var_18 < var_14))), ((min(32767, ((min(var_10, var_8)))))))))));
    #pragma endscop
}
