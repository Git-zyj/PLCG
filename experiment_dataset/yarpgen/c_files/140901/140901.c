/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(var_6, 7589461476042836936);
    var_15 = (max((((max((-127 - 1), 1855288298)))), (min(((max(var_13, var_5))), (max(var_2, var_4))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_16 = var_12;
            arr_6 [i_0] [i_1] = var_10;

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_17 = 18446744073709551615;
                var_18 = (min(var_18, var_6));
            }
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_15 [i_0] [10] = (!var_3);
                    var_19 = -1291590526;
                    var_20 = var_2;
                }
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        arr_21 [i_5] [i_5] [i_6] = ((-7589461476042836936 ? var_11 : (~11537)));
                        var_21 |= var_9;
                        var_22 = (var_8 ? -var_10 : -115);
                    }
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        var_23 = (~var_1);
                        var_24 = var_6;
                    }
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_25 ^= var_3;
                        var_26 = (min(var_26, (~var_3)));
                        var_27 = var_12;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_28 = 110;
                        var_29 = 1;
                    }
                    var_30 = var_1;
                    arr_30 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = var_4;
                    arr_31 [i_0] [i_5] = var_6;
                    var_31 = var_10;
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_32 = (~var_9);
                    var_33 -= var_3;
                    arr_35 [i_0] [i_1] [i_3] [i_1] = (~219);
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_42 [i_12] [i_12] [i_12] = var_3;
                            var_34 = (!-307587056);
                            arr_43 [i_12 + 1] [i_0] [i_12] [i_0] [i_0] = var_12;
                            var_35 = -32767;
                            var_36 = 13904614368683717730;
                        }
                    }
                }
                var_37 = var_8;

                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    arr_46 [i_1] = (~4294967295);
                    arr_47 [i_3] = (var_4 ? var_8 : (~102563487));
                    var_38 ^= (!var_12);
                    arr_48 [i_0] [i_3] [5] [i_3] = (~var_0);
                }
            }
        }
        arr_49 [i_0] = (min((min(var_6, var_12)), ((max(((min(var_9, var_4))), 18446744073709551615)))));
    }
    #pragma endscop
}
