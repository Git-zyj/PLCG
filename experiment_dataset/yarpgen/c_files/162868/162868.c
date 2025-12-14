/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= -var_10;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] &= var_0;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_15 += ((2571895307 & (arr_0 [i_0])));
            var_16 = (min(var_16, (arr_0 [i_0])));
            var_17 = (!-var_8);
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_19 [8] [i_2] [i_3] [i_2] [10] = (arr_8 [i_2] [6]);
                            arr_20 [i_5] [i_5] [12] [12] [i_0] [i_0] &= var_4;
                            var_18 = (min(var_18, var_12));
                        }
                    }
                }
            }
            arr_21 [i_2] [i_2] [i_0] = var_12;

            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_19 += var_0;
                            var_20 = (min(var_20, (arr_9 [i_8] [i_7 - 3] [i_7] [i_7])));
                            var_21 = (min(var_21, ((max((arr_17 [i_0] [i_2] [i_6] [i_7]), (max(var_13, (((arr_22 [i_8] [i_6]) ? (arr_17 [9] [9] [i_6] [i_6 - 1]) : var_12)))))))));
                            var_22 *= (min((arr_23 [i_0] [i_8] [i_6 + 1]), (max(((30 ? var_3 : 62022)), (arr_29 [i_0] [i_7] [i_6 - 1] [i_6 - 1] [i_8] [i_6] [i_6])))));
                            var_23 += (var_3 <= (((var_13 && (((~(arr_22 [i_0] [i_0]))))))));
                        }
                    }
                }
                var_24 = (((((max(2523550302488855184, 49117))) || 0)));
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_25 ^= (max((!-var_5), 16419));
                arr_33 [i_2] [i_2] [i_2] [i_0] = (arr_6 [i_2]);
            }
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_26 = (max(var_26, (((var_6 ? (arr_7 [i_0] [i_0] [i_0]) : 0)))));
            var_27 = (((-(arr_35 [i_0] [i_10]))));
        }
    }
    var_28 = var_7;
    var_29 *= (~var_2);
    #pragma endscop
}
