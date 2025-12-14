/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (1 && 2000075637);
        var_20 = var_17;
        arr_2 [i_0] = ((((var_5 ? var_1 : (arr_1 [i_0] [14])))));
        arr_3 [i_0] [i_0] = var_7;
        var_21 = (max(var_21, var_6));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_22 = (arr_4 [i_1] [i_1]);
        arr_7 [i_1] = (~var_16);
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_23 = (((~(arr_9 [i_2 + 1] [i_2 + 1]))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_5] [i_4] [i_5] [i_2] |= (arr_1 [i_4] [i_2]);
                                var_24 = (max(2147483631, (arr_1 [i_5] [i_3])));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_25 = var_14;
                        arr_26 [18] [i_3 - 1] [18] = ((61044 <= ((((arr_18 [i_2] [i_3 + 3] [i_4] [i_3 + 3] [i_2 + 1] [16]) && var_15)))));
                        var_26 = ((((((((arr_11 [i_2]) && var_7)) ? (8544011510061104521 && var_12) : (4616466319966641365 && 8908278658355147483)))) < 0));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_27 ^= ((~(arr_25 [i_9] [i_2] [i_4] [i_2] [i_2] [i_2])));
                                var_28 = (((((var_17 | (arr_25 [i_9] [i_8] [11] [i_3] [i_2] [i_2]))) > var_17)) ? (max(var_5, (arr_1 [i_2 - 1] [i_3 + 3]))) : ((max((arr_9 [i_3 + 2] [i_2 - 1]), var_13))));
                                var_29 = ((!((var_14 < (arr_11 [i_2])))));
                                var_30 = ((6536076257052249964 ? 208 : 8544011510061104531));
                            }
                        }
                    }
                    var_31 ^= ((-0 ? (!var_9) : ((max((arr_25 [i_2] [1] [i_4] [i_3 + 3] [i_2 + 1] [i_2]), (arr_25 [i_2] [i_3] [6] [i_3 - 2] [i_2 + 1] [i_4]))))));
                }
            }
        }
    }
    var_32 = (((-((1 ? var_6 : var_3)))) + (1 - 8544011510061104523));
    var_33 = (max(var_17, var_17));
    #pragma endscop
}
