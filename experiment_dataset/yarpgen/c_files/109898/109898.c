/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 -= ((var_0 ? var_3 : (var_11 << 1)));
        var_20 += ((var_15 ? var_10 : var_13));
        var_21 -= (((arr_0 [i_0] [i_0]) < (arr_1 [i_0])));
    }
    var_22 = ((-(max(((-24522 ? var_9 : var_16)), (var_13 || var_7)))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_23 = ((3739225331091087252 / var_3) * var_2);
                        var_24 = ((((var_15 ? (arr_4 [i_1] [4]) : 9007199254740991)) ^ var_2));
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_25 = (arr_11 [9] [i_5]);
                        var_26 = (((((var_7 != (arr_14 [i_5] [i_5]))))) == var_8);

                        for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                        {
                            var_27 -= var_8;
                            arr_18 [i_1] [i_2] [i_3] [i_5] [i_2] &= (((((var_18 / (arr_4 [1] [i_1 - 1])))) ? ((((1 == (arr_6 [i_1] [i_1] [i_3]))))) : (arr_5 [i_3] [i_6])));
                            var_28 -= (var_3 | (arr_17 [1] [i_2] [7] [i_2] [i_2]));
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                        {
                            var_29 -= ((!(-3739225331091087242 - 490963195450155244)));
                            var_30 = 24519;
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                        {
                            var_31 = arr_8 [i_1] [i_1] [i_3] [9];
                            arr_24 [i_5] = ((var_17 >> (((arr_13 [i_1 - 1]) - 850003467))));
                        }
                        var_32 |= (arr_4 [i_3] [i_3]);
                        arr_25 [i_2] [i_2] [i_2] [i_2] |= (arr_5 [i_1] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_33 = (max(var_33, (((arr_6 [i_1 - 1] [i_1] [i_1]) * var_0))));
                                var_34 = (max(var_34, 451276208));
                                var_35 ^= (((var_9 + var_12) | var_4));
                                arr_32 [i_9] = (((!11423) ? 1 : (arr_21 [i_3] [10] [i_3] [i_9] [i_10] [i_9])));
                            }
                        }
                    }
                    var_36 &= (!var_14);
                }
                var_37 = (min((arr_10 [i_1] [i_1] [1] [i_1]), var_2));
            }
        }
    }
    #pragma endscop
}
