/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 *= 1;
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (arr_2 [i_1]);
                    var_12 *= 1;
                    arr_8 [i_0] [i_0] [10] [i_2] |= 1;
                    arr_9 [i_0] [i_1] [i_1] = (arr_3 [i_1]);
                }
            }
        }

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_13 [i_0] [4] |= (((((arr_10 [i_3]) << (1 - 1))) == 1));

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_26 [i_5] [i_0] [i_0] = (arr_23 [i_0] [i_3] [i_4] [i_5] [i_5]);
                            var_13 &= (arr_4 [i_0] [i_3]);
                        }
                    }
                }
                var_14 = (arr_25 [i_4]);
                arr_27 [i_3] [i_0] [i_3] [i_0] = arr_23 [3] [i_3] [i_3] [i_3] [i_3];
                arr_28 [i_0] [i_0] [i_4] [i_4] = ((1 * ((((((arr_6 [i_3] [i_3]) / (arr_3 [i_4]))) == 1)))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                arr_32 [i_0] = (arr_17 [i_7] [i_3] [i_0] [i_0]);
                arr_33 [i_7] [i_7] = (arr_6 [i_0] [i_0]);
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {
                arr_37 [i_0] [i_0] [i_3] [i_8] = ((1 % (((arr_22 [i_8] [1] [i_8] [i_3] [i_3] [i_3]) << 1))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {

                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        arr_45 [i_8] [i_8] [i_9] [i_9] [i_8] [i_0] = (((arr_30 [i_0] [i_8] [i_3] [i_8]) - (arr_43 [i_0] [i_10] [9] [i_9] [i_10 + 1] [i_3] [i_10])));
                        var_15 = (min(var_15, (arr_42 [i_0] [0] [i_9])));
                        arr_46 [0] [i_8] [i_10 + 2] = (arr_6 [i_3] [i_3]);
                        var_16 = (arr_14 [5] [i_9] [1] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_50 [i_0] [i_3] [i_8] [i_9] [i_9] [i_11] = 1;
                        var_17 = (min(var_17, (arr_24 [i_8] [i_9] [14])));
                        arr_51 [i_0] [i_3] [i_0] [i_11] = (((((arr_0 [i_0]) * (arr_47 [10] [1] [1] [i_9] [i_9]))) - (arr_49 [i_0] [i_3] [i_8] [i_9] [i_11])));
                        var_18 = (max(var_18, ((((((arr_0 [i_11]) % 1)) << ((((arr_17 [i_0] [i_3] [5] [i_0]) == (arr_12 [i_0] [i_3] [i_0])))))))));
                    }
                    var_19 = (arr_10 [1]);
                    var_20 = (max(var_20, (arr_43 [i_0] [i_0] [i_0] [i_3] [11] [i_8] [i_8])));
                }
                var_21 += (arr_34 [0]);
            }
        }
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_22 = (max(var_22, ((((arr_18 [i_12] [1] [i_12] [i_13] [i_13]) == (arr_22 [i_13] [i_13] [13] [i_13] [i_12] [i_13]))))));
            var_23 = (max(var_23, (arr_34 [i_12])));
            var_24 *= 1;
            var_25 = arr_18 [i_12] [i_13] [i_12] [i_13] [i_12];
        }
        arr_57 [i_12] = (1 == ((1 + (((arr_44 [14] [i_12]) - (arr_15 [i_12] [i_12] [i_12] [i_12]))))));
        arr_58 [i_12] |= (((arr_41 [i_12]) << (1 == 1)));
    }
    var_26 = (((var_3 % var_1) / 1));
    #pragma endscop
}
