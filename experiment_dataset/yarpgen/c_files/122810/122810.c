/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = var_17;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((!(arr_2 [i_0 + 1] [i_0])));
        arr_4 [6] [i_0 - 2] = ((var_10 ? (((arr_1 [8]) / 18446744073709551607)) : (arr_0 [i_0 - 2])));
    }
    var_21 = (min((min(-3, var_16), (max(-1522234849, -12544)))));
    #pragma endscop
}
