/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    var_13 = (min((min(var_9, ((min(var_4, var_10))))), (!-601677228)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_14 *= -1;
                    arr_7 [i_0 + 2] [1] [i_1] = (((min(0, 10))) ? (min(18446744073709551601, 1677345177012112106)) : 33);
                    arr_8 [i_0] [i_0] [i_1] = (((((min(var_7, var_4)))) ? ((((18446744073709551605 ? (arr_2 [i_0]) : (arr_6 [9] [i_1] [1]))) & (arr_2 [i_0]))) : (((var_0 ? -9961 : var_9)))));
                }
                for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0 - 3] [i_1] [i_1] = ((+(((arr_10 [i_1] [i_3 + 1] [i_1]) % ((~(arr_5 [i_0 + 2] [i_0 - 3] [i_1])))))));
                    var_15 ^= (min((((-26896 + var_4) ? var_6 : (arr_6 [i_0 - 1] [20] [i_3 - 1]))), ((((arr_9 [i_0]) ? 21047 : (arr_10 [1] [i_0 - 3] [i_0 + 2]))))));
                    var_16 = (min(var_16, (((~((~((min(1, var_10))))))))));
                }
                /* vectorizable */
                for (int i_4 = 4; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, (((!(var_1 || var_1))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_18 [i_0 + 2] [i_0 + 2] [i_4] [i_1] [i_6 - 1] = (((var_0 >= (arr_1 [i_0 - 2]))));
                                var_18 ^= -9961;
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    arr_21 [i_1] = ((-(((arr_5 [i_7 - 2] [i_7 - 1] [i_1]) ? var_11 : (((var_10 ? (arr_19 [i_0 - 2] [2] [i_1] [i_7 + 2]) : 1)))))));
                    var_19 |= ((((min((min(-38, 1816425061)), (!1)))) != (((!var_1) ? (arr_3 [i_0 + 2]) : (((((arr_6 [4] [6] [i_7]) && var_3))))))));
                    var_20 = ((~(arr_12 [i_0 + 3] [i_7 + 1] [i_7 + 1] [6])));

                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_21 = ((!((min((min(1924126478, 3257)), var_5)))));
                            var_22 = (((((((min(-142605736, -27165))) ? ((28954 ? (arr_1 [i_7 + 2]) : (arr_24 [1] [i_1] [20] [10] [10] [1]))) : 1))) ? ((((1 && (((74 ? 142605737 : 142605725))))))) : ((-(arr_6 [i_0 + 3] [i_1] [i_0 - 2])))));
                        }
                        var_23 ^= ((min(var_5, (arr_20 [i_0 + 1] [i_0 - 1] [i_7 - 1] [i_8]))) * (((((var_7 ? (arr_23 [i_7 - 1] [i_8] [i_7 + 2] [20]) : var_3))) ? (arr_12 [i_8] [14] [i_8 - 1] [21]) : ((-(arr_25 [i_0] [i_1] [i_7 - 2] [i_7 - 1] [i_8 - 3]))))));
                    }
                }
                arr_26 [i_0 - 2] [i_0 - 2] [i_1] = (min(((((max(-6895, 16769398896697439510))) ? ((min(var_7, var_10))) : (((arr_22 [i_0 - 1] [i_0 + 1] [8] [i_1]) ? 13075 : 18446744073709551583)))), (((((((!(arr_13 [5]))))) < 4616544224179182136)))));
            }
        }
    }
    #pragma endscop
}
