/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_6;
    var_17 = ((((max(((var_14 ? var_9 : 123)), var_4))) ^ ((var_1 ? (((max(var_15, -12)))) : (~var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_3 + 1] [i_1] [i_3 + 2] [i_3 + 3] [i_3] = ((((!(~var_4))) ? (min(123, ((var_14 ? (arr_6 [i_2]) : (arr_0 [11]))))) : ((-(arr_9 [i_0] [5] [i_0] [i_0])))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_3 * (((arr_10 [i_3 - 1] [i_3 + 4] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) ? -5336 : (arr_10 [10] [i_3 + 4] [10] [2] [i_3 + 1] [i_3 + 1]))));
                    }
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        var_18 = (arr_11 [i_0] [i_1] [i_2] [i_4 - 1]);
                        var_19 += var_8;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_2] [i_2] &= ((570865698605578605 ? 1 : -70));
                        var_20 = var_12;
                        var_21 = var_0;
                        var_22 -= (((arr_0 [i_5 + 3]) ? (arr_8 [i_5 + 1] [i_5 + 2] [i_5 + 3]) : var_13));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_23 = ((!(arr_9 [1] [i_1] [i_2] [i_6 + 2])));
                        var_24 = (((((arr_18 [i_0] [i_1] [17] [i_6 - 1] [i_6]) | (arr_7 [16]))) & (arr_11 [i_0] [i_1] [22] [i_6 + 1])));
                        arr_24 [i_0] [i_0] [i_0] [i_1] [i_6 + 1] [i_2] &= (((arr_6 [i_6 + 3]) <= (arr_6 [i_6 + 1])));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_28 [i_6] [i_6 + 3] [i_2] [i_1] [i_6] = (((arr_27 [i_0]) & (!var_9)));
                            var_25 *= (((arr_2 [i_0] [20] [i_2]) == ((var_13 | (-32767 - 1)))));
                            var_26 &= ((!(((arr_27 [i_6]) > 39969))));
                        }
                    }
                    var_27 ^= 70;
                }
            }
        }
    }
    var_28 *= (min(-32760, (!var_5)));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_38 [14] [i_9] [i_9] [i_10 - 1] [i_10 - 1] [i_11] = (1818145272 == 1);
                            var_29 = (((arr_36 [i_8] [i_8] [i_9] [i_9] [8] [i_9]) ? ((min(var_14, (arr_32 [i_8])))) : 79));
                            var_30 *= ((!((min((arr_21 [i_8] [i_9] [i_8] [i_10] [20]), 219)))));
                            arr_39 [i_11] [i_10 - 1] [i_9] [i_8] [i_8] = (arr_33 [i_9] [5] [i_9]);
                        }
                    }
                }
                var_31 = ((((((min((arr_2 [16] [i_8] [i_8]), (arr_16 [i_8] [i_8] [4] [i_8] [4]))) != ((((arr_7 [i_8]) ? var_2 : (arr_34 [i_9]))))))) << (((((var_10 ? (arr_32 [i_9]) : (arr_29 [i_8]))) <= ((max(26, (arr_34 [i_8])))))))));
            }
        }
    }
    #pragma endscop
}
