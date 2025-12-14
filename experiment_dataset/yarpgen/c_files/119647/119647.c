/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_16 + var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [9] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_2] [i_1] [i_2 - 2] [i_3] &= (((arr_5 [i_3] [i_1] [i_2 - 2]) ? (var_16 * var_7) : (arr_8 [i_2 - 1] [i_3] [i_2 - 2])));
                        var_20 = (max(var_20, (!4294967295)));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = (((arr_4 [i_2 - 2] [i_2]) ? (arr_4 [i_2 - 1] [i_3]) : (arr_4 [i_2 + 1] [i_3])));
                        arr_14 [i_0] [i_1] [i_1] [i_3] [i_0] [i_2] = ((arr_4 [i_0] [i_2 + 1]) + (arr_4 [i_0] [i_2 - 1]));
                        var_21 = (min(var_21, (((((arr_7 [i_0] [i_2] [i_2] [i_3]) << (var_10 - 227040170270564185)))))));
                    }

                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        arr_17 [i_1] [i_2] [i_1] [i_1] = -0;
                        var_22 = (((arr_8 [i_4 + 3] [i_1] [i_4 + 3]) ? (arr_8 [i_4 + 1] [i_1] [i_4 - 1]) : (arr_8 [i_4 + 3] [i_1] [i_4 + 2])));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [5] [i_1] [i_1] = arr_8 [i_0] [i_1] [i_0];
                        var_23 -= (1 + 125);
                        var_24 = (arr_4 [i_2 - 2] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_1] = (((arr_7 [i_0] [i_1] [i_2 - 2] [i_1]) ? 3923793402893790839 : (arr_10 [i_2 - 1])));
                        var_25 = (arr_8 [i_2 - 1] [i_1] [i_2 + 1]);
                        var_26 = 4294967268;
                        var_27 |= (arr_11 [i_2] [i_2 - 2] [i_1]);

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_28 = ((((var_5 % (arr_2 [i_2]))) & (~4294967285)));
                            var_29 = (((arr_24 [i_1] [i_1] [i_2 - 1] [i_6]) ? (arr_18 [i_1]) : (arr_18 [i_1])));
                            var_30 = (((arr_15 [i_1] [i_2 + 1] [i_1]) ? (arr_4 [i_2 - 1] [i_2]) : (arr_18 [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_31 = (min(var_3, ((~((var_12 ? var_11 : 7676476644031889649))))));
    #pragma endscop
}
