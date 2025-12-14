/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!-44577);

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = 524287;
                                var_21 |= var_14;
                            }
                        }
                    }
                    var_22 = var_11;
                    var_23 |= ((197 ? (var_16 >= 1653073467) : ((42 ? (arr_1 [i_0 - 3]) : (arr_3 [i_1])))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                var_24 = (var_4 >= 85);
                var_25 = (var_18 < 6);
            }
            var_26 = var_14;
            var_27 = var_14;

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_28 -= (((((arr_13 [i_0 - 1] [i_0 - 1] [i_7]) || var_14)) ? (~-1086434599) : (arr_1 [i_0])));
                var_29 = ((+(((arr_14 [i_0 + 1] [i_0 + 2]) ^ var_4))));
                var_30 = ((var_14 ? (80 * 65535) : var_5));
            }
        }
        var_31 = (((arr_17 [i_0 + 2] [0] [i_0] [i_0]) ? (~14153749583158555153) : (((255 ? -88 : 97199626)))));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_32 = arr_30 [i_0] [i_11 - 2];
                            var_33 = ((((((arr_29 [i_11 + 2] [4] [i_10] [i_9] [i_8] [i_0 - 2]) ? 255 : (arr_19 [i_0] [i_0] [i_9] [i_0])))) ? (arr_5 [i_11 - 1]) : (var_13 + var_2)));
                        }
                    }
                }
            }

            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                var_34 = (((((arr_22 [i_8]) ? var_3 : 4292994490550996464)) == (~var_11)));
                var_35 = (((arr_12 [i_0 - 3]) / (arr_12 [i_0 + 1])));
            }
            for (int i_13 = 3; i_13 < 11;i_13 += 1)
            {
                var_36 = (arr_15 [i_0] [i_0] [11]);
                var_37 = (((~7518719094242145924) || var_9));
                var_38 = (((var_13 >= -871854728) % (arr_25 [i_13 + 2] [i_13 - 1] [i_13] [i_13 - 1])));
            }
        }
    }
    #pragma endscop
}
