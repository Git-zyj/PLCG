/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_10, var_14));
    var_16 = (min((min(127, var_10)), var_12));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_17 = (arr_2 [i_2]);
                        var_18 = (arr_4 [i_2]);
                    }
                }
            }
        }
        var_19 = (max((arr_7 [i_0] [i_0]), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_20 = (arr_4 [i_4]);
        var_21 = (min(var_21, (arr_0 [13])));
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            arr_19 [i_5] [i_5] = min((arr_17 [i_5] [i_5] [i_6 + 1]), (min((arr_17 [i_5] [i_5] [i_6 - 2]), 34681)));
            arr_20 [i_5] [15] = min((arr_14 [i_5 - 1] [i_5 - 1]), (arr_14 [i_5 + 1] [i_5 - 1]));
        }
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            var_22 = (max(((min(-2147483641, 63751))), (min((max((arr_16 [i_5] [i_7]), 1590770169)), (min((arr_23 [i_5] [i_7 - 2] [i_7 - 2]), (arr_14 [i_5] [i_7])))))));
            var_23 = (min((max((arr_14 [i_7 - 1] [i_5 + 1]), (arr_14 [i_7 - 1] [i_5 + 1]))), (min((arr_14 [i_7 + 1] [i_5 - 1]), (arr_14 [i_7 - 2] [i_5 - 1])))));
        }
        arr_24 [i_5] [i_5] = (max((min((arr_16 [i_5] [i_5 - 1]), (arr_21 [i_5 + 1]))), (arr_21 [i_5 - 1])));
        var_24 = (max((min((arr_16 [i_5] [i_5 + 1]), (arr_14 [i_5 - 1] [i_5 - 1]))), (min((arr_16 [i_5] [i_5 + 1]), -32213))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = 63741;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_11] [i_10 + 3] [i_9] [1] [i_8] [i_8] = (arr_10 [1] [i_10] [i_10] [i_10 + 3]);
                        arr_40 [i_8] [i_9] = (arr_14 [i_8] [i_8]);
                        var_25 = -450929768;
                        var_26 = 1;
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        var_27 = 65535;
                        arr_44 [i_8] [i_9] [i_10] [i_9] = (arr_36 [i_10 + 2] [6] [i_10]);
                        arr_45 [i_12] = arr_36 [i_9] [i_9] [i_10];
                    }
                    arr_46 [i_9] [i_10] = (arr_36 [i_10 + 4] [i_9] [1]);
                    arr_47 [i_8] [i_8] [i_8] [i_9] = (arr_0 [i_10 + 3]);
                }
            }
        }
    }
    var_28 = 237;
    #pragma endscop
}
