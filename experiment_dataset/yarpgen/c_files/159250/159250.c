/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (((max(((30522 ? (arr_0 [i_1]) : (arr_10 [i_2]))), (((var_14 ? var_11 : (arr_6 [i_0])))))) >= 15894));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((((((0 >= (arr_13 [0] [i_1] [0] [i_3] [0]))))) < (arr_7 [i_4 - 2] [i_1] [i_1]))))));
                                var_18 = (((((arr_5 [i_2 + 2]) ? 159 : var_5)) != ((((arr_5 [i_0]) ? (arr_5 [i_4]) : (arr_5 [i_0]))))));
                            }
                        }
                    }
                    arr_17 [i_2] |= (arr_0 [i_0]);

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_19 = (max(var_19, (((max((arr_9 [i_5] [i_1] [i_2] [i_5]), (arr_1 [i_1])))))));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_2 + 3] [i_5] [i_6 + 2] [i_6] = ((((arr_7 [i_0] [i_0] [i_0]) ? 4106750925 : 364691385)));
                            var_20 = (((arr_22 [i_1] [i_2 + 4] [i_6 + 2] [i_2 + 4] [i_1]) / (arr_16 [i_6 + 2] [i_2 + 4] [i_2 + 4] [i_2 + 4])));
                            var_21 &= (arr_19 [i_0] [i_1] [i_0] [i_0] [i_5] [i_6 + 2]);
                        }
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            var_22 = (max(((max((arr_22 [i_0] [i_1] [i_0] [i_0] [i_7]), var_12))), ((-(arr_11 [i_7] [i_7])))));
                            var_23 = (min(var_23, ((max((min((var_1 % var_11), (var_4 == 1))), (arr_6 [i_0]))))));
                            var_24 = (!-15894);
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_25 = (!-30522);
                            var_26 = ((((((2005150561554724525 ? 124 : (arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] [i_8]))) * (((min(12, (arr_30 [i_8]))))))) % ((((-20361 + var_1) ? 524256 : var_7)))));
                            var_27 = (((((arr_21 [i_8] [i_8] [i_5] [i_2 + 1] [i_1] [i_0]) % (arr_28 [i_0] [i_1] [i_1] [i_2 + 4] [i_0] [i_8] [i_1]))) | (max((((arr_8 [i_8] [i_0] [i_0] [i_0]) ? var_9 : (arr_24 [i_0] [i_1] [i_8] [i_1] [i_1] [i_5] [i_5]))), (arr_28 [i_0] [i_0] [i_0] [i_2 + 3] [i_2 - 2] [i_5] [i_0])))));
                            var_28 |= (arr_10 [i_2 - 2]);
                            var_29 = (min(((((((var_11 <= (arr_21 [i_8] [i_5] [i_2] [i_0] [i_1] [i_0]))))) * ((var_9 ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_1] [i_5] [i_5] [i_5] [i_8]))))), ((((arr_8 [i_1] [i_2 + 3] [i_2 - 2] [i_2 - 2]) & (((max(7, -12)))))))));
                        }
                    }
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        var_30 += 56;
                        var_31 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                        var_32 = ((((max((arr_5 [i_9 + 3]), 4294967279))) ? ((min(((var_13 - (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((!(arr_12 [i_0] [i_1] [i_9] [i_2] [i_9] [i_9 + 1]))))))) : (min((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_9] [i_9] [i_2 + 2] [i_1] [i_9])))));
                    }
                    var_33 = (max(var_14, -1));
                }
            }
        }
    }
    var_34 = (min(var_34, var_15));
    #pragma endscop
}
