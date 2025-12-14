/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 = (((min(var_0, (arr_2 [i_0] [i_1])))) ? ((~(arr_2 [i_0] [i_3]))) : -5461);
                            var_20 = var_1;
                        }
                    }
                }
                var_21 ^= ((~((var_13 % (((arr_0 [i_0] [i_1]) ? (arr_4 [i_1] [i_0]) : 52))))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_22 = ((((~1) && (arr_4 [i_0] [i_0]))) ? (((!(((arr_11 [i_0] [i_1] [i_5]) || var_16))))) : ((~(arr_10 [13] [i_1] [i_0] [i_5] [i_6]))));
                                var_23 = (((((((((arr_15 [15] [i_1]) << (5716 - 5692)))) & (((arr_18 [i_0] [i_0] [i_4] [i_5]) ? (arr_18 [i_0] [i_1] [12] [i_6]) : var_13))))) ? ((~(~1))) : (~1)));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_24 = (((arr_18 [i_0] [i_8] [i_7] [i_8 - 2]) ? 2 : -52));
                            var_25 = (arr_13 [i_8 + 1] [i_8 - 2] [i_8]);
                            var_26 ^= 157;
                        }

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_27 = (min(5460, (arr_9 [i_1])));
                            var_28 = (min((min((((arr_9 [1]) ? 5467 : 1)), (arr_6 [i_1] [i_9]))), (~var_15)));
                            var_29 = (min(((var_3 ? (arr_19 [i_0]) : (var_3 / var_12))), ((~(arr_22 [i_9] [i_7] [i_4] [i_1] [i_1] [i_0])))));
                        }
                        var_30 = (min(var_30, (var_0 && 197761095)));
                    }
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_31 |= (arr_4 [i_0] [i_10]);
                    var_32 = 1;
                    var_33 = (min((~9), (arr_13 [i_0] [i_1] [i_10])));
                    var_34 ^= (((min((min(var_2, -32759)), (((243 ? var_5 : (arr_27 [i_0] [i_1] [i_10])))))) ^ (arr_11 [3] [3] [i_10])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_35 = (((arr_15 [i_1] [i_10]) - ((min((arr_15 [i_0] [i_10]), (arr_15 [i_0] [i_1]))))));
                                var_36 = (min(((!((!(arr_10 [i_12] [i_0] [i_0] [i_1] [i_0]))))), (!var_10)));
                                var_37 = (arr_25 [i_0] [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = ((((((~var_11) << (5464 - 5455)))) ? (((var_12 | 28120) % (4294967295 % var_11))) : (~var_3)));
    var_39 ^= ((var_7 >= ((min(var_8, (~450209873))))));
    var_40 = var_17;
    var_41 = var_3;
    #pragma endscop
}
