/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((-27313 ? 8887 : 14917)));
        var_18 *= (((!-32756) ? (((-10626 >= (arr_1 [i_0])))) : (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 1;
        var_19 = ((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_4 [i_1]));
        var_20 = ((var_3 ? (arr_2 [i_1]) : (arr_2 [i_1])));
        var_21 = (arr_2 [i_1]);
        arr_7 [i_1] [i_1] = (((((-127 - 1) + 2147483647)) << (var_2 - 1028)));
    }
    #pragma endscop
}
