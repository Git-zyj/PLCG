/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 11310;
                                var_15 = (((arr_5 [i_4] [i_2] [i_0] [i_0]) != var_1));
                                var_16 = (i_1 % 2 == 0) ? ((((arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 2] [22]) >> (((arr_12 [i_3 + 1] [i_3] [i_3 + 2] [i_1] [i_3 - 2]) - 3776757348))))) : ((((arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 2] [22]) >> (((((arr_12 [i_3 + 1] [i_3] [i_3 + 2] [i_1] [i_3 - 2]) - 3776757348)) - 3182937740)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_17 = ((((arr_4 [i_1] [i_2] [i_5] [i_6]) ? 67108863 : (arr_4 [i_0] [i_1] [i_5] [i_6]))));
                                arr_18 [12] [i_1] [i_2] [i_5] [i_1] = ((arr_1 [i_2]) >> (var_12 - 45613));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = 1957572728;
                                var_18 = (((arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] [i_6]) / (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
                arr_20 [i_1] [i_1] = (((((((arr_4 [i_0] [i_0] [i_1] [i_1]) >= var_13)) ? (arr_17 [i_0] [5] [22] [i_0] [i_0] [i_0] [i_1]) : (arr_14 [i_0] [i_1])))) ? ((((var_11 ? (arr_10 [i_0]) : (arr_4 [i_1] [i_0] [i_0] [i_0]))) % 2337394568)) : (arr_5 [i_0] [i_0] [i_1] [i_0]));
                var_19 = ((((~1) * (arr_6 [i_0] [i_0]))) >= ((~(arr_10 [i_0]))));
                var_20 += (1 & 1);

                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, (arr_15 [i_7] [i_0] [i_0] [i_0])));

                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        var_22 = var_0;
                        arr_26 [i_1] = 4294967295;
                        var_23 = (min(var_23, (var_14 - 1)));
                        arr_27 [i_1] = 0;
                    }
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        var_24 ^= ((-(arr_21 [i_0] [0] [i_1] [i_9 - 3])));
                        var_25 = ((((2337394561 ? var_8 : (arr_9 [i_1] [i_7] [i_1]))) >= ((((arr_9 [i_1] [i_1] [i_1]) ? (arr_1 [i_9]) : -67108851)))));
                        var_26 = (min(var_26, -67108869));
                        var_27 = (max(var_27, 3017481939));
                    }
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, (((min((arr_29 [20]), (arr_29 [16])))))));
                    var_29 = (!1);
                }
            }
        }
    }
    var_30 = (min(var_30, 0));
    var_31 = (-127 - 1);
    var_32 = (min(var_13, ((var_6 ? var_7 : var_0))));
    #pragma endscop
}
