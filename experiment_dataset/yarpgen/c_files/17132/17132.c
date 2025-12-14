/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((28393 - 1251740234347671533) / var_4))));
    var_21 = var_3;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0] [3]) ^ ((min((arr_1 [i_0]), 1779841133)))));
        arr_4 [i_0 - 2] = -611240921;
        var_22 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = ((0 | 214) == (arr_0 [i_1] [i_1]));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_1] = (arr_5 [i_2] [i_2]);
            arr_13 [i_1] [i_1] = (arr_5 [i_2] [i_2]);
            arr_14 [i_1] [i_1] [i_2] = ((((1779841141 >> (((arr_10 [i_1] [i_2]) % (arr_9 [i_1]))))) >> (arr_6 [i_1] [9])));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_18 [i_3] [i_3] [i_3] = ((((225 ? (arr_5 [i_2] [i_2]) : -7942)) + 221));
                arr_19 [i_1] [i_1] [i_3] = (arr_1 [6]);
                arr_20 [i_3] [i_2] [i_1] = ((((((30 && (arr_10 [i_3] [i_3]))))) | (arr_17 [i_3] [i_2] [i_2])));
                var_23 = (((arr_16 [i_3]) >> (((arr_11 [i_1] [i_2]) - 29270))));
            }
            arr_21 [i_1] [i_2] = (arr_16 [i_1]);
        }
        arr_22 [i_1] = (arr_5 [i_1] [i_1]);
        arr_23 [i_1] = arr_2 [i_1] [3];
    }
    var_24 = -27959;
    #pragma endscop
}
