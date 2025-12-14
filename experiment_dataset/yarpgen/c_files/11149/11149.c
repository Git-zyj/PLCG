/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 = ((-((((arr_0 [i_0]) >= 0)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 *= ((2244571893 ? (arr_3 [i_0] [i_1]) : (arr_1 [i_0])));
            var_18 += 3830;
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_19 = ((~((((((arr_4 [i_0]) ? (arr_0 [i_2 + 3]) : (arr_3 [i_0] [i_2]))) < (!0))))));
            var_20 = (max(var_20, (((1 ? 0 : 10)))));
        }
        var_21 = (~18446744073709551615);
        var_22 = (max(var_22, (~26611)));
    }
    var_23 = (!26611);
    #pragma endscop
}
