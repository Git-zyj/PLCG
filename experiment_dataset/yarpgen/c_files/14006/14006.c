/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((~var_9) ? var_8 : (~6424175926032440171)))) ? var_4 : 13444937687632792986));
    var_18 = (min(var_18, (~var_7)));
    var_19 = ((var_5 ? (!190) : var_4));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 = (arr_2 [i_0] [i_0 + 1]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_21 = (arr_3 [i_0] [i_1]);
                        var_22 = (((((arr_4 [3]) / var_12)) * -2010973788));
                    }
                }
            }
        }
        var_23 = (((arr_8 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2]) ? var_15 : ((~(arr_8 [i_0] [i_0 - 1] [6] [i_0 - 1])))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_13 [i_4] = -22;
        var_24 = (max((((~(arr_12 [i_4])))), (((max(var_10, var_11)) >> (max((arr_12 [i_4]), 1))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_25 = (((arr_15 [i_5]) % (arr_15 [i_5])));

        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_26 = (min(var_26, 213));
                            var_27 = (max(var_27, ((((arr_18 [i_8] [i_8]) >> (-21362 + 21387))))));
                            var_28 = (arr_22 [i_5] [i_6] [i_7] [i_8] [i_9 + 2]);
                            arr_25 [i_5] [i_5] [22] [i_8] [i_9] = (arr_20 [3] [i_6 - 2] [i_7] [i_5]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_29 = ((~(arr_27 [i_5] [i_6] [i_10] [i_5])));

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_30 = ((var_15 ? var_8 : (var_10 && 99582228)));
                            var_31 = (arr_28 [i_5] [i_5] [i_10] [i_11] [i_12]);
                            var_32 = (1 >= 6363);
                            var_33 &= (arr_17 [i_6] [i_11] [i_12]);
                        }
                        var_34 = (arr_15 [i_6 + 3]);
                        var_35 &= (arr_31 [i_6]);
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_36 = (arr_19 [i_5] [i_13] [i_13] [i_13]);
            var_37 = ((arr_32 [i_5] [i_13] [i_13]) || -2010973788);
        }
        var_38 = (i_5 % 2 == 0) ? (((var_15 << (((arr_31 [i_5]) - 3663035595))))) : (((var_15 << (((((arr_31 [i_5]) - 3663035595)) - 2832619224)))));
    }
    #pragma endscop
}
