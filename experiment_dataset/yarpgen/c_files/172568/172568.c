/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_10 -= (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 + 3])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] = (((((arr_5 [i_1] [i_0 + 2] [1]) ^ (arr_5 [8] [i_1] [i_1]))) << (arr_0 [i_0])));
            arr_7 [i_0] = (arr_4 [i_1]);
            arr_8 [i_0] = (((arr_5 [i_0 + 3] [i_0 - 3] [i_1]) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0]))) : ((var_8 ? (arr_3 [i_0]) : (arr_4 [i_1])))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_11 *= (arr_11 [i_0 - 3] [i_0 + 2]);

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_12 ^= arr_14 [i_0 + 3] [i_0 - 1] [i_0] [i_0 - 3];
                var_13 ^= arr_9 [i_0];
                var_14 = (min(var_14, ((((arr_13 [i_0] [i_2]) <= (arr_2 [i_3]))))));
            }
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_17 [i_4] [20] = ((((((arr_12 [i_0 - 1] [i_4]) * (arr_5 [i_0 + 3] [i_0 + 1] [i_4])))) ? (arr_11 [i_0] [i_4]) : (arr_14 [i_0] [i_4] [i_0 - 3] [11])));
            var_15 = var_0;

            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                var_16 &= (arr_15 [i_5]);
                var_17 -= arr_13 [i_5] [i_4];
                arr_21 [i_5] [i_4] [i_4] = var_6;
                var_18 -= arr_3 [i_4];

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_19 *= (arr_12 [i_5] [i_5]);
                    var_20 += (((arr_12 [i_6] [i_5]) ? (arr_9 [i_0 + 3]) : (arr_14 [i_0] [i_4] [i_4] [i_6])));
                    var_21 = var_5;
                    var_22 = (min(var_22, var_8));
                }
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_23 += ((-25941 ^ (arr_5 [i_7] [i_7] [i_4])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_24 = (arr_3 [i_8]);
                            arr_31 [i_0 + 3] [i_4] [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_4] = (arr_5 [i_7] [i_8] [i_7]);
                            var_25 = (arr_16 [i_8]);
                            arr_32 [i_0] [i_0] [i_7] [i_8] [i_8] [i_8] [i_4] = (arr_14 [i_0 + 2] [i_7] [i_8] [i_9]);
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_36 [i_4] [i_4] [i_4] [i_0] = ((((((arr_4 [i_0 - 1]) ^ var_0))) * (arr_23 [i_4] [i_10])));
                arr_37 [i_10] [i_4] [i_4] [i_0] = (((arr_10 [i_0]) * (arr_34 [5] [i_4] [i_10])));
                arr_38 [i_4] [i_4] [i_10] = (((arr_33 [i_0] [i_10] [16] [i_10]) ^ var_0));
                arr_39 [i_4] [5] [i_0] = (arr_22 [i_0 + 1] [i_0 - 3] [i_0] [i_0]);
            }
            arr_40 [i_4] [i_4] [i_4] = arr_27 [i_0] [i_0] [i_0 + 1] [i_0] [i_4] [i_4];
        }
    }
    var_26 *= var_8;
    var_27 = ((var_9 ? (max(var_0, var_7)) : ((((max(var_0, var_8))) ? var_1 : var_1))));
    var_28 = var_2;
    var_29 = var_1;
    #pragma endscop
}
