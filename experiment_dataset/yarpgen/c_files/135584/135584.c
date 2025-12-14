/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (max((((((min(var_9, var_2))) && var_13))), ((var_13 ? (max(var_14, var_5)) : var_4))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = var_4;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0 + 1] = (arr_1 [i_0]);
            var_17 = (~var_3);
        }
        var_18 *= var_2;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        arr_11 [13] [i_2] = (21 & 21);
        arr_12 [i_2] = (~var_11);
        var_19 = ((-(arr_7 [i_2])));
        var_20 = (max(var_20, (((((arr_2 [i_2]) ? 32767 : 13))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_21 = ((-(((!(!var_4))))));
        arr_16 [i_3] = ((((~1) ? 31569 : var_5)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_22 = (max(var_22, (arr_26 [i_3] [i_3] [i_7] [i_6] [i_7])));
                                var_23 = ((var_7 && (-78 + 6144)));
                            }
                        }
                    }

                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        var_24 ^= (((~var_5) ^ 402653184));
                        var_25 = ((((min(27962, 1))) ? var_4 : ((((var_1 ? var_7 : var_12))))));
                        arr_30 [i_4] [i_4] = (arr_0 [i_4] [i_5]);
                    }
                    arr_31 [i_3] [i_4] [i_5] [i_5] = (min(var_11, (7759557063861756105 || 7759557063861756105)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_38 [i_3] [i_4] [i_3] [i_5] [16] [i_10 - 2] [i_9] &= ((-(((((arr_33 [i_4] [i_5]) ^ (arr_20 [i_3] [i_3] [i_3] [i_3])))))));
                                arr_39 [i_3] [i_10] = (2147483648 <= 1163463794);
                                var_26 = (max(var_26, var_9));
                                arr_40 [i_10] [i_10] [i_10] = ((((var_12 < var_6) ? var_7 : (arr_27 [i_10] [i_10 + 1] [i_10 - 1] [i_10] [i_10 + 1] [i_4]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            {
                                arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = -var_10;
                                var_27 = -13;
                                arr_47 [i_3] [i_4] [i_5] = (min(76, (1 < 114)));
                                var_28 ^= 27919;
                                var_29 -= (max((arr_29 [i_3] [i_3] [i_3] [i_3] [i_3]), var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
