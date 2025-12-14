/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (min((max(((var_5 ? var_17 : var_4)), var_18)), -124722351));
                                var_22 = ((!((max(65535, var_18)))));
                                var_23 = (((arr_9 [i_0] [i_0] [18] [i_3] [i_4]) ? 885146422 : var_11));
                            }
                        }
                    }
                    var_24 = var_7;
                }
            }
        }
        arr_12 [i_0] = ((max((min(-885146430, -885146422), 3444))));
        var_25 = var_9;

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_17 [i_0] [i_5] [i_5] = 885146432;
            var_26 = (max(13516, 52020));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_27 = (arr_2 [i_0] [i_0]);
            var_28 = var_5;
            var_29 = (min(((max(-54, var_15))), (~var_11)));
        }
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        arr_23 [i_7] = var_3;
        var_30 = 13538;
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_27 [i_8] = (max((max((arr_6 [i_8] [i_8] [2] [i_8]), (arr_2 [11] [i_8]))), var_4));
        arr_28 [i_8] = var_15;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_31 = var_16;
                        var_32 = (arr_21 [i_9]);
                        var_33 = var_2;
                        arr_40 [i_8] [i_8] [i_8] [i_8] [i_11] [i_10] = 13538;
                        arr_41 [i_8] [i_10] = (~var_10);
                    }
                    arr_42 [i_8] [i_10] [i_10] = (min(51995, ((max((arr_29 [i_10] [i_9] [i_8]), var_0)))));
                    var_34 = max(var_10, (((var_8 ? -51988 : (arr_34 [i_10] [i_9] [i_10] [i_10])))));
                }
            }
        }
    }
    var_35 = var_15;
    #pragma endscop
}
