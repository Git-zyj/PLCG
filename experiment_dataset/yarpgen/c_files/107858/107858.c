/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(38840, 902415701))) < 556848403));
    var_16 = min(var_4, var_2);
    var_17 &= var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = 92;
        arr_2 [i_0] = var_7;
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_19 = 964997812884527082;
            var_20 *= (var_2 - var_2);
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_21 = (max(var_21, ((min((min((max((arr_7 [i_2]), (arr_8 [i_2] [i_2]))), (-26669 < 26659))), ((min(0, var_10))))))));
        arr_10 [i_2] = (arr_5 [i_2]);
        var_22 = (max((min((arr_4 [i_2] [i_2] [2]), 1)), (arr_1 [i_2] [i_2])));
    }
    #pragma endscop
}
