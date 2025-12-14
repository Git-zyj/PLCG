/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = (arr_6 [i_0 + 2] [i_2]);
                    var_16 &= (arr_1 [i_0]);
                }
                var_17 = (3050861861 * 1723053815112909215);

                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    var_18 = (max(var_18, ((((((!((((arr_8 [i_0] [i_0] [i_1] [i_3]) << (102 - 94)))))))) ^ (((arr_10 [i_0 - 1] [i_0] [i_3]) ? (((arr_6 [i_0] [i_0]) * 15954314101586610785)) : (((min((arr_5 [i_0] [i_1] [i_3] [i_0]), (arr_8 [i_0] [i_3] [i_1] [i_0])))))))))));

                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 19;i_4 += 1)
                    {
                        var_19 = (min(var_19, (arr_13 [i_0] [i_0] [i_3] [i_1])));
                        var_20 = (arr_15 [i_0 + 2] [i_3 - 3] [i_3 - 2] [5]);

                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            arr_18 [i_0] [i_4] [i_0] [i_0] [i_0 - 1] = (arr_2 [i_3]);
                            arr_19 [i_4] [i_1] [6] [i_1] [i_1] = arr_15 [i_1] [i_1] [i_1] [i_1];
                            var_21 = (min(var_21, (((1244105414 || (arr_10 [i_5 - 2] [i_3 - 1] [i_0 - 2]))))));
                            arr_20 [i_0] [i_1] [i_3] [i_4] [i_3] &= (((arr_14 [i_4 + 1] [i_4 + 1] [i_0] [i_0]) * (arr_13 [i_0] [i_0] [i_0] [i_1])));
                        }

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_25 [i_1] [i_4] [i_3] [i_1] [i_6] [i_3 + 2] [i_3] = var_5;
                            var_22 = (max(var_22, ((((arr_7 [i_3 - 1] [i_0 + 1]) <= (arr_7 [i_3 - 3] [i_0 + 1]))))));
                            arr_26 [i_4] [i_1] [i_3] = arr_10 [i_6] [i_1] [i_0];
                            arr_27 [i_4] = ((((!(arr_1 [i_0]))) ? (arr_3 [i_4] [i_0 + 1]) : (arr_16 [i_0 + 1] [i_4] [i_3 - 3] [i_4] [i_4 - 4])));
                            var_23 += (arr_7 [i_0 - 1] [i_0 - 1]);
                        }
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_24 = (((arr_8 [i_0 + 1] [i_4 - 4] [i_3] [i_3 - 3]) > (arr_8 [i_0 - 1] [i_4 - 1] [4] [i_3 + 2])));
                            var_25 ^= var_13;
                            arr_30 [i_0] [i_0 - 1] [8] [i_0] [i_0] |= (((2492429972122940831 / 2492429972122940823) < (arr_17 [i_0] [i_0] [i_3])));
                        }
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_26 = (~((((2492429972122940831 ? (arr_31 [i_0] [i_0] [i_3] [i_8]) : (arr_13 [i_0 - 2] [12] [i_0 + 2] [i_0]))))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_37 [i_3] [i_3] = (((arr_9 [i_3 + 1] [i_0]) ? (arr_15 [i_0] [i_1] [i_3 + 2] [i_8]) : (arr_6 [14] [i_9])));
                            var_27 = ((-(arr_0 [i_0 - 1])));
                        }
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            var_28 = (((((arr_39 [i_0 - 2] [i_10] [i_3] [i_8]) ^ (arr_39 [i_0 - 2] [i_10] [i_10] [i_8]))) * (((arr_39 [i_0 - 1] [i_10] [i_3] [i_8]) * (arr_39 [i_0 + 2] [i_10] [i_3] [i_10])))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] = 29250;
                            arr_41 [i_10] [i_3] [i_1] [i_3] [i_3] [i_1] [i_10] = (arr_34 [11] [i_10 + 2] [i_10 + 2]);
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_29 -= (!32767);

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_30 = (max(var_30, var_5));
                        arr_48 [i_12] [i_1] [i_1] [i_12] = (arr_36 [i_0 - 2] [i_0 - 2]);
                        var_31 = 2492429972122940831;
                    }
                }
            }
        }
    }
    #pragma endscop
}
