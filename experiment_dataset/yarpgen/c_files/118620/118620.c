/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 + 2] = var_7;
        var_14 = ((((!(arr_2 [9]))) ? ((100 << (3461108140 - 3461108133))) : 92));
        var_15 = ((((((var_3 >= (arr_1 [i_0]))))) - (-127 - 1)));
        arr_4 [i_0 + 1] [i_0] = (((((((min((arr_2 [i_0 + 1]), (arr_1 [i_0])))) ? ((((!(arr_0 [i_0 - 2]))))) : (var_3 - var_12)))) ? (((!(-127 - 1)))) : (1 == 65535)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_8 [11] = (((arr_5 [i_1 + 1]) % (arr_5 [i_1 + 1])));
        var_16 = (156 - var_2);
        var_17 = (~227);
    }
    var_18 = var_0;
    #pragma endscop
}
