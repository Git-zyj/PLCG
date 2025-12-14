/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] = (!16746);
                        arr_12 [i_1] [i_1] [i_1] [i_1] [4] [i_0] = (arr_4 [i_1]);
                        arr_13 [i_0] [i_1] [8] [i_0] = var_10;
                    }
                }
            }
        }
        arr_14 [i_0] = ((var_2 ? (((!((max(27, 12)))))) : (var_11 - 1)));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_24 [i_0] [i_0] [i_5] [i_0] [10] [i_5] = ((1 ? ((var_11 ? (var_9 - var_0) : (arr_9 [i_6] [i_6] [i_4 - 1] [i_6]))) : (arr_0 [i_0])));
                        arr_25 [i_0] [i_4] [i_5] [i_6] [10] = 4294967284;
                        arr_26 [i_4 - 1] [0] = 4294967284;
                    }
                }
            }
        }
        arr_27 [i_0] = ((min(0, 11)));
        arr_28 [i_0] [i_0] = 1275375124;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_39 [9] [i_8] [i_8] [i_9] [i_8] [13] = (var_11 | var_10);

                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            arr_43 [i_7] [i_8] [i_8] [i_8] [i_9] [i_8] [10] = (((((11 | (arr_29 [i_10])))) ? 41507 : (~var_7)));
                            arr_44 [i_8] [i_11 - 1] [i_8] = (((arr_32 [9]) ? ((var_6 ? 1 : (arr_29 [i_8]))) : var_2));
                            arr_45 [i_7] [i_8] [i_9] [i_8] [0] = 215;
                            arr_46 [16] [1] [i_10] [i_8] = var_0;
                        }
                        for (int i_12 = 3; i_12 < 17;i_12 += 1)
                        {
                            arr_49 [i_10] [i_10] [i_9] [i_12] [i_8] = -1;
                            arr_50 [12] [i_10] [4] = 26478;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                {
                    arr_55 [i_7] [i_7] [i_13] [i_14] = (arr_36 [i_13] [i_13] [i_14] [i_13 - 2] [i_13] [i_14]);
                    arr_56 [i_7] [i_13] [i_14] [i_14] = (arr_36 [i_13 - 3] [i_13 - 3] [i_14] [i_13 - 1] [i_13 + 1] [12]);
                    arr_57 [i_7] [i_7] [i_13] [0] = ((~(~1275375124)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 16;i_15 += 1)
    {
        arr_61 [1] [1] = (arr_59 [i_15 - 2] [i_15 - 2]);
        arr_62 [i_15] [10] = var_0;
    }
    var_13 = 20;
    var_14 = (!var_2);
    var_15 = var_3;
    #pragma endscop
}
