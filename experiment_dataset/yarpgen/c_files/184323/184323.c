/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((((max(var_2, var_10))) ? (5342613623228757388 && var_12) : (max(var_0, 227)))))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_14 = (min((arr_2 [i_0]), var_8));
        arr_3 [i_0] = 26;
    }

    /* vectorizable */
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_15 = ((~((var_3 | (arr_4 [i_1] [i_2])))));
            var_16 = (((-127 - 1) >= ((~(arr_4 [i_1] [i_1])))));
            var_17 |= (~((-(arr_4 [i_1] [i_1]))));
        }

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_18 = (((var_1 ? (arr_8 [i_1 + 2] [i_3] [i_3]) : (arr_7 [i_3]))) >= (var_10 == var_7));
            var_19 = arr_7 [i_1];
            arr_10 [i_3] [i_3] = (~var_3);
            var_20 = (((((~(arr_8 [i_3] [i_1] [i_1])))) ? ((((arr_7 [i_3]) == var_8))) : -var_6));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_13 [i_4] = ((~(arr_12 [i_4])));

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_16 [i_4] = ((~(arr_14 [i_5 + 1] [i_4] [i_5 - 1])));
            var_21 = (arr_14 [i_4] [i_4] [i_5]);

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_19 [i_4] [i_4] [i_6] = ((43 ? -var_8 : (!187)));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_22 = var_5;
                    var_23 = arr_20 [i_7] [i_5 - 1] [i_5 + 1] [i_7];
                }
                arr_24 [i_4] [i_4] [i_4] [i_4] = (((110 ^ (arr_21 [i_4] [i_4] [i_5] [i_4] [i_4] [i_6]))));
            }
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_24 = (arr_17 [i_4] [i_4] [i_4]);
            arr_28 [i_4] [i_4] = -9223372036854775801;
        }
    }
    var_25 += ((~(((40 < var_1) | ((min(68, 1)))))));
    var_26 = (min((~69), var_4));
    #pragma endscop
}
