/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((((arr_5 [i_0] [i_1]) % var_10)) | ((((arr_2 [i_1]) | var_17)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_2 - 1] [i_1] [i_4] [i_4] = (var_14 && var_1);
                                var_19 = (!204234940);
                                var_20 = ((-(arr_11 [i_0] [1] [i_2 - 1] [i_3] [i_2] [i_2])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_21 = var_14;
            var_22 = ((-(arr_0 [i_5 - 3])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_23 *= ((-14892 ? (arr_2 [i_5 - 2]) : 480));
                            arr_25 [i_0] [9] [i_5] [i_0] [i_5] [i_6] [i_0] = 204234940;
                        }
                    }
                }
            }
        }
        for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_24 = (((arr_11 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 3] [i_9 - 3]) ? (((((arr_8 [i_0] [11] [i_0] [i_0]) && -9060)))) : var_4));
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_25 |= (arr_8 [i_0] [i_9] [i_10 + 2] [i_11]);
                        arr_34 [i_0] [i_10] [i_9] [i_0] = ((((-(arr_30 [i_11] [i_10] [i_9] [i_0]))) + (arr_29 [i_9 - 1] [i_9 - 1])));
                    }
                }
            }
        }
        for (int i_12 = 3; i_12 < 11;i_12 += 1) /* same iter space */
        {
            var_26 = var_15;
            var_27 = 5528354062518064638;
        }
        for (int i_13 = 3; i_13 < 11;i_13 += 1) /* same iter space */
        {
            arr_39 [i_13] = (((arr_21 [i_13 - 3] [i_13 - 3]) * 1345779313));
            var_28 = 0;
        }
    }
    var_29 = ((var_12 >> (var_8 - 19894)));
    #pragma endscop
}
