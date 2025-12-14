/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_15 = (var_14 ? (arr_3 [i_1 - 1] [i_1] [i_0 - 3]) : (arr_4 [i_1 - 1]));

            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                var_16 += (((arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 3]) ? (arr_7 [i_0 - 3] [i_0 - 2] [i_0 - 2]) : (arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 1])));

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_17 += (arr_14 [i_0] [i_1 - 1] [i_2 + 1] [i_3] [i_2 - 2]);
                        var_18 = (((arr_3 [i_0 + 2] [i_0] [i_1]) ? var_1 : var_7));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_2 - 4] [i_3] [i_0] = var_0;
                        var_19 = (min(var_19, var_4));
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        arr_22 [i_0] = ((((((arr_5 [i_0]) ^ var_9))) ? (var_6 || 1203080556616484191) : ((((arr_13 [i_3] [i_3] [i_2 - 4] [i_3] [i_3] [i_1 - 1] [i_1 - 1]) && var_9)))));
                        var_20 *= (((arr_12 [1] [i_3]) % (arr_7 [i_6 + 1] [i_1 - 1] [i_0])));
                    }
                    var_21 += (((27710 * 226149455929552152) && (((5184368080763086496 ? 18446744073709551615 : -1306997516)))));
                    arr_23 [i_1] [i_0] = (arr_18 [i_0] [i_1] [i_2] [i_3] [i_0 - 3]);
                }
            }
            var_22 = (arr_14 [i_0] [i_1] [i_1] [i_0] [i_0 + 1]);
            var_23 = var_9;
        }

        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            var_24 = ((30397 % ((-(arr_0 [i_0])))));
            var_25 = (max(var_25, ((((arr_17 [i_0 - 3] [i_0 - 1] [i_7 + 2] [i_7 - 3] [i_7 + 3]) - var_0)))));
            arr_26 [i_0 - 2] [i_0] [i_7 + 3] = var_2;
        }
        var_26 = ((arr_10 [i_0] [i_0 + 1] [i_0 - 1]) && 267386880);
    }
    var_27 ^= var_3;
    #pragma endscop
}
