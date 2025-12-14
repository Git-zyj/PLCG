/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min(var_10, -4038957280895285633), ((max(var_6, var_10))))));
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_13 = (((24 - var_1) + (~3646026738)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 ^= (arr_3 [i_3] [i_1 - 1] [i_1 + 3]);
                                var_15 = (min(var_15, ((((var_6 ? var_9 : 1))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_16 = (max(var_16, ((var_8 + (arr_8 [i_0] [i_1 + 2] [i_2] [i_5])))));
                        var_17 *= var_0;
                        var_18 = (min(var_18, (((((1011755126 ? (arr_15 [18] [18] [i_2] [i_1 + 3] [i_5]) : 1)) + 146)))));
                        var_19 = (min(var_19, (((~(arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_5] [i_2]))))));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_20 = (max(var_20, (arr_18 [i_0] [i_0] [i_6] [i_0] [i_6])));
                            var_21 &= ((4144758501 % (arr_20 [6] [i_1 + 2] [i_2] [6] [i_1 + 2] [i_1 + 2] [i_2])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_22 = ((arr_24 [i_1] [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]) % (arr_24 [i_1] [i_0] [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 3]));
                            var_23 += (arr_8 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1]);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_24 += (((arr_24 [i_0] [i_2] [i_2] [i_2] [i_8] [i_8]) ? (arr_24 [i_0] [i_2] [i_0] [i_0] [i_8] [i_2]) : 1306388979554475801));
                            arr_29 [i_0] [6] [i_1] [i_1] [i_2] [12] [i_8] |= (((var_0 & 531925411) ? (arr_26 [i_5] [i_1 + 1] [i_2]) : (1 == 244)));
                            var_25 += (((var_6 & var_3) ? (var_6 % var_0) : ((((arr_8 [i_1] [i_1] [i_1] [i_8]) ? 3528338872 : var_9)))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_26 = (~var_0);
                            var_27 = (min(var_27, var_5));
                        }
                    }
                    var_28 = -145226368;
                }
                var_29 += (((~var_2) != ((var_10 ? (arr_3 [8] [i_1] [8]) : ((109 & (arr_4 [4] [i_1])))))));
                arr_32 [i_0] [i_0] = ((max(546257128, (2851158693 / -4192460753016494106))) == (((((arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_0]) && var_6)))));
            }
        }
    }
    var_30 *= (min(var_0, var_1));

    for (int i_10 = 1; i_10 < 9;i_10 += 1)
    {
        arr_36 [i_10] [i_10] = ((((var_3 ? 1376084301 : (arr_0 [0]))) * (arr_22 [i_10 - 1] [i_10])));
        var_31 = 189760709;
    }
    #pragma endscop
}
