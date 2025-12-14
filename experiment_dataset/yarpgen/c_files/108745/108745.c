/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_8 [i_0] = (arr_2 [i_0 - 1]);
                        var_15 = (var_11 ? -170 : (((arr_1 [i_0]) ? 33344255 : var_0)));
                    }
                }
            }
        }
        var_16 = 88;
        var_17 = -7033;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_18 = (((1 / 193) ? (max(31, ((18203402 ? -13977 : 0)))) : 0));
                        var_19 = 960;
                        var_20 = (255 * var_1);
                        arr_17 [1] [i_0] [i_5] [i_6] = (((((((!(arr_9 [i_0 + 1] [20]))) && (!27306)))) / 13977));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                {
                    var_21 = ((!((-1476325898 || ((!(arr_12 [i_8 - 1] [i_7] [i_0])))))));
                    var_22 = var_0;
                    var_23 = (((((max(62, 18310)) ? 0 : (~33344255)))));
                }
            }
        }
    }
    for (int i_9 = 4; i_9 < 20;i_9 += 1)
    {
        var_24 = (max(var_24, (((((!((max(4294967295, (arr_25 [i_9])))))) ? var_14 : (((var_7 ? (arr_23 [4]) : 33344255))))))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    {
                        var_25 = ((-(max((min(-33344255, var_1)), (!194)))));

                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 18;i_13 += 1) /* same iter space */
                        {
                            var_26 = (((arr_22 [i_13 - 2] [i_12 - 2] [i_11 - 3]) ? (arr_22 [i_13 + 4] [i_12 - 3] [i_11 - 1]) : (arr_22 [i_13 + 3] [i_12 + 2] [4])));
                            var_27 = -32751;
                        }
                        for (int i_14 = 2; i_14 < 18;i_14 += 1) /* same iter space */
                        {
                            arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] = 0;
                            arr_42 [i_9] [i_10] [i_10] [1] [i_10] = ((-((~((1543564467539683687 ? (arr_21 [i_9]) : var_12))))));
                            var_28 = (((~var_9) ? ((var_10 ? var_2 : 62)) : -70));
                            var_29 = (max((min((65535 * 4294967295), ((min((arr_15 [i_9] [i_9] [i_11]), var_2))))), (arr_25 [i_14])));
                        }
                        var_30 = (max(var_30, -var_0));
                    }
                }
            }
        }
        arr_43 [i_9] [i_9] = (min((((33344255 ? 65535 : var_9))), var_8));
        var_31 = (arr_15 [i_9] [i_9] [i_9]);
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                {
                    arr_56 [i_16] = (((max(((-(arr_1 [5]))), (arr_2 [i_16 - 1]))) << (var_12 - 39820)));
                    var_32 = ((((((arr_39 [i_16] [i_16] [i_16 - 1] [i_16 - 1] [11] [i_16 + 1]) ? 35928 : (arr_39 [i_16] [i_16] [i_16 + 1] [i_16 + 2] [i_16] [i_16 + 2])))) ? ((((!(arr_39 [1] [i_15] [i_16 + 2] [i_16 - 1] [i_16 + 2] [i_16 + 2]))))) : (max((arr_39 [8] [i_16] [i_16 + 1] [i_16 + 1] [21] [i_16 + 1]), var_14))));
                }
            }
        }
    }
    #pragma endscop
}
