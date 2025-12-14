/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (4208097907 - 178);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = var_14;
        var_18 = ((((arr_0 [i_0]) ? (arr_0 [2]) : var_0)));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_19 = (((arr_1 [i_1 + 1] [i_0 - 1]) != (((arr_3 [i_1 + 1] [i_0]) % (arr_1 [i_0] [i_0])))));
            var_20 = 7599686811060854308;
            var_21 = (((3979388540560831552 << (18446744073709551615 - 18446744073709551615))));
            arr_4 [i_0] = ((-(arr_1 [i_0 + 2] [i_0 + 1])));
        }
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = 178;
            arr_9 [i_0] [i_2] = (((arr_2 [i_0 + 1] [i_2]) % (((arr_6 [i_0] [i_2]) ? 75 : var_10))));

            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                arr_14 [i_0] [i_0] [i_2] [12] = (~0);
                arr_15 [i_0] [i_2] [i_0] [i_0] = (-1765559191 % 17082);
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_22 = (arr_18 [13] [i_0] [i_0]);
                var_23 = (((((arr_13 [i_4] [i_2] [i_4] [7]) ? 61440 : var_4))) ^ ((178 ? var_5 : 18446744073709551590)));
            }
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                var_24 = 225;
                arr_21 [3] [i_0] [i_5 + 1] = (322433311 == 63823);
            }
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                arr_24 [i_2] [i_0] [i_0] [i_2] = 1;
                var_25 = 1;
            }
            arr_25 [i_0] [i_0] = ((arr_12 [i_0] [i_0] [i_2 + 3]) + (var_15 > 9223372036854775807));
        }
        arr_26 [i_0] = ((var_14 ? (((arr_6 [i_0] [13]) ? 2147483647 : 61440)) : ((61447 ? var_15 : 25411))));
    }
    #pragma endscop
}
