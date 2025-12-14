/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (min(var_13, ((min(var_12, var_7)))));
        var_14 = var_5;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 &= ((!((((var_3 - var_11) >> (((max(18446744073709551615, var_3)) - 18446744073709551554)))))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_16 = var_1;
            var_17 -= var_7;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            arr_12 [15] &= ((~(arr_3 [i_3 + 4] [i_3 + 2])));
            var_18 -= ((~((~(arr_8 [i_1] [i_1] [i_1])))));
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            arr_15 [i_1] [i_1] [8] = 0;
            var_19 = ((var_5 + (((var_12 ^ -28807) ? (min(13796723510879640377, (arr_1 [i_1] [i_4]))) : ((((arr_10 [i_1] [i_1] [i_1]) | (arr_14 [i_1]))))))));
        }
    }
    var_20 = (min(var_6, (((var_1 < 6501) / var_2))));
    #pragma endscop
}
