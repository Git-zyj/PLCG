/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_13));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_21 = (455951674 + 406043449);
        var_22 = (!251);
        var_23 = (max(var_23, (arr_1 [i_0 + 3])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_24 = 3888923846;
        var_25 = (((((((((arr_4 [i_1]) ? 62926 : 3888923846)) != (((arr_2 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))))))) < 255182548));
        var_26 = 0;
        var_27 = (((((406043449 ? 406043448 : 9))) ? (((406043426 ? 25032 : 3888923892))) : (arr_3 [i_1])));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        var_28 *= 578624401703114682;

        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_29 = ((((((-9223372036854775807 - 1) ? 406043426 : 1344290744))) ? (!17302) : (arr_9 [i_3] [i_2])));
            var_30 = (arr_6 [i_2 - 2]);
            var_31 *= ((-5282 ? (((!(arr_10 [i_2])))) : 9223372036854775807));
            var_32 = (arr_8 [i_3]);
        }
    }
    var_33 = (~var_11);
    #pragma endscop
}
