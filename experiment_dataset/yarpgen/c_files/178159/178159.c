/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((var_14 ^ var_5), (var_8 / 11458649474653717793)));
    var_18 = (~var_6);
    var_19 = (min(6785565538435610822, 8191413005562087759));
    var_20 = var_1;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (arr_4 [i_1] [i_1] [i_0]);
            var_21 |= (((~(arr_0 [5]))));
        }
        var_22 -= (((arr_1 [i_0]) & (arr_1 [i_0])));
        arr_6 [0] &= (arr_1 [6]);
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_23 *= (max((arr_3 [i_2] [i_2 + 1] [12]), (((!(~var_6))))));

        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_17 [i_2] [10] [16] |= var_15;
                arr_18 [i_2] [i_2] [2] [i_3] = (((var_11 + 2147483647) << (((arr_4 [i_2] [i_3] [1]) / -289178412))));

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_24 ^= -var_3;

                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        arr_25 [i_2] [i_3] [i_5] = (arr_14 [0] [i_3] [i_2]);
                        arr_26 [i_2] [i_2] [i_4] = (arr_21 [i_5] [i_3] [i_4] [i_5] [i_2]);
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_25 &= (arr_3 [i_2] [i_7] [i_3]);
                        var_26 |= (arr_23 [i_4] [8]);
                        arr_29 [i_2] [i_3] [i_4] [10] [i_2] = ((~(~11458649474653717793)));
                        var_27 = 33079;
                    }
                    var_28 *= var_5;
                }
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_34 [i_2] = (((~3523331034) != (((arr_20 [i_2]) ^ (arr_32 [17])))));

                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_37 [i_2] [i_2] = (arr_13 [9] [i_9] [i_8]);
                    arr_38 [i_2] [i_2] [i_8] [i_9] = (((arr_16 [i_2] [i_2 + 2] [i_2] [i_3 + 2]) << (arr_10 [10] [i_2 - 3] [3])));
                    var_29 = (min(var_29, 8191413005562087759));
                }
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_30 = ((~(arr_14 [i_2] [i_3] [i_2])));
                            var_31 = (min((max(var_5, (arr_43 [i_2 + 1] [i_3] [i_3 + 2] [i_2] [8] [i_11] [i_12]))), (arr_42 [i_2])));
                            var_32 = max(((max((max(-8508161291695405570, -4358264583065924669)), -524702704))), 16367560498035820051);
                        }
                    }
                }
                arr_47 [i_2] [i_3] [2] = (arr_15 [9] [i_3]);
            }
            arr_48 [4] &= (max((max((((!(arr_9 [i_3])))), (min(var_0, (arr_0 [i_2]))))), ((max((min(1949884553, var_1)), var_6)))));
        }
        var_33 *= ((max(12118690706790796427, (1981524394 <= 1981524394))));
        var_34 = -1949884554;
    }
    #pragma endscop
}
