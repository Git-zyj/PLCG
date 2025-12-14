/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        var_19 = (max(var_19, (((1 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))));
        arr_2 [i_0] = -125;
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 *= ((((max(var_5, -103))) || ((max((arr_4 [i_1]), var_3)))));
        var_21 *= ((!(((-(min(var_1, 25)))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_22 = (max(var_22, -15018721841786629326));
        var_23 = (min(var_23, ((((109 % ((var_9 ? var_5 : var_17))))))));
        var_24 = arr_5 [i_2];
        arr_7 [i_2] = (min((arr_6 [8]), (min(-113, 124))));
        var_25 = (min(32767, ((var_11 * (var_17 * var_0)))));
    }
    var_26 -= var_15;
    #pragma endscop
}
