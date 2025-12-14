/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] = ((((arr_1 [i_0]) ? (arr_3 [i_0]) : var_5)));
            arr_6 [i_0] = (((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 + 1])));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_11 = (min(var_11, var_2));

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_11 [i_0 + 1] = (((arr_0 [i_0 + 2]) <= (arr_0 [i_0 + 2])));
                    var_12 = var_3;
                    arr_12 [i_3] [i_3] [i_3] = 1033233962;
                    var_13 = ((var_3 ? (((!(arr_4 [i_0] [i_2])))) : (arr_4 [i_2] [i_3])));
                }
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    var_14 = var_9;
                    var_15 = var_8;
                    arr_17 [i_0] [i_2] [i_4] = (arr_0 [i_0 + 2]);
                    arr_18 [i_4] = (((arr_15 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) != (arr_16 [i_0 + 1] [i_4 + 1] [i_4 - 2] [i_4] [i_4] [i_4])));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_22 [i_0] [i_1] [i_2] [i_5] = ((var_5 ? 3975217903 : (arr_14 [20] [i_2] [i_1] [i_1] [i_1] [i_1])));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_16 = (((arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [1]) ? (arr_10 [i_6] [i_5] [i_2] [i_1] [i_0 + 1]) : var_4));
                        var_17 = var_1;
                    }
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_18 = 319749392;
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((arr_4 [i_0 - 1] [i_0 + 2]) <= var_3);
                    arr_30 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] = 18247;
                }
                var_19 = var_5;
                arr_31 [i_1] = ((((arr_28 [i_0] [i_0 - 1] [i_1] [i_2]) ? (arr_0 [i_2]) : (arr_25 [i_0 - 1] [i_1]))));
                arr_32 [i_0 + 2] [i_1] = (arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1]);
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_20 = (arr_10 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 1]);
                var_21 = (arr_27 [i_1]);
            }
            arr_35 [i_0] [i_0] [i_1] = (arr_20 [i_0] [i_0] [i_0 + 2] [i_0]);
        }
        var_22 = (arr_13 [1] [i_0] [i_0] [1]);
        var_23 ^= arr_13 [i_0] [i_0] [i_0 - 1] [6];
        var_24 = (((arr_25 [i_0] [i_0 + 1]) * (arr_25 [i_0] [i_0 - 1])));
        var_25 = ((~(((arr_2 [i_0] [i_0 + 1] [0]) ? 108086391056891904 : (arr_2 [22] [i_0] [i_0 - 1])))));
    }
    var_26 = var_10;
    var_27 = var_2;
    #pragma endscop
}
