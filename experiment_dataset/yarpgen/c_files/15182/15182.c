/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((!((!(arr_2 [i_0]))))) ? (((2147483633 == var_9) % (arr_0 [i_0 - 1]))) : (18446744073709551615 <= 0));
        var_11 = ((0 ^ (((((!4294967295) == var_8))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1 + 1] [i_1 - 1] = (((!(arr_4 [0]))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_1 + 1] = (!0);
            arr_11 [i_1] [i_2] = (!((((arr_0 [i_1]) / var_3))));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_15 [i_3] [i_2] [1] [8] = (((arr_13 [6] [i_3] [4]) >= (arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                var_12 = (!var_3);
                arr_16 [i_1] [i_2] = ((0 ? (arr_1 [i_1 + 1] [2]) : (!18446744073709551615)));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_13 += 15;
                var_14 *= 1;
                arr_21 [i_4] [i_2] [8] [i_2] = 17732923532771328;
            }
            var_15 += (18446744073709551612 | 1125350151028736);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_16 += (!(arr_7 [i_1 + 1]));
            arr_24 [i_1] [i_5] [8] = (arr_9 [0]);
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_17 = (!var_7);
            arr_29 [i_1] [i_6] [i_6] = (!-var_2);
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_32 [i_1] [i_7] = (((arr_7 [i_1 + 1]) != 9));
            var_18 += var_2;
            var_19 *= 1;
            var_20 *= ((!(arr_7 [i_1 + 1])));
            var_21 -= 1;
        }
    }
    #pragma endscop
}
