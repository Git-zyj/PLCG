/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(((1 ? (arr_0 [i_0]) : ((var_17 >> (-9223372036854775794 - -9223372036854775804))))))));
        arr_3 [i_0] = ((((max(((var_16 ? var_9 : var_10)), (max(var_14, -8139546907488067136))))) ? ((7 ? ((max(1, (arr_0 [i_0])))) : (arr_1 [i_0] [i_0]))) : (((arr_0 [i_0]) ^ ((min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        var_19 = ((((min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? 6694 : (arr_0 [i_0]))) : (((arr_1 [i_0] [i_0]) % (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_20 *= (((arr_4 [i_1 + 1]) ? (arr_4 [i_1 - 1]) : 1));
            arr_11 [i_1] [11] [i_2 - 1] = ((((0 ? 1 : 1))) < (var_8 % var_15));
            var_21 ^= ((arr_4 [i_2 - 1]) ? (arr_4 [i_2 - 1]) : (arr_4 [i_2 - 1]));
        }
        arr_12 [i_1] = (!(((var_18 ? (arr_6 [i_1 - 1]) : (arr_6 [i_1 - 1])))));
    }
    var_22 = -var_0;
    #pragma endscop
}
