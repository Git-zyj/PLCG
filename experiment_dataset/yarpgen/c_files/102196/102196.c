/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 *= ((-(arr_0 [i_0] [i_0])));
        var_20 = var_0;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_21 -= (arr_0 [i_1] [i_1]);
        var_22 = (((((var_16 ? var_3 : (arr_3 [i_1] [i_1])))) % var_12));
        var_23 = (arr_1 [i_1 - 1] [i_1 - 1]);
    }
    var_24 = ((6594911153769411675 ? 18446744073709551615 : 1));
    var_25 = ((-(max((max(var_9, -8598)), var_11))));
    var_26 = (max(var_26, var_1));
    #pragma endscop
}
