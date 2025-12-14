/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_1] = (-(((arr_3 [i_1]) ? var_3 : (arr_3 [i_1]))));
                        var_10 = 26995;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_11 = (max(var_11, ((max((max(19228, 1522663804)), (var_1 * var_7))))));
                                arr_17 [i_1] [i_4 + 3] [i_1] [i_1] [i_1] = ((!((max(var_8, (arr_3 [i_1]))))));
                                var_12 += ((((max(var_1, 205))) ? ((max(((-29052 && (arr_2 [i_2]))), 1))) : (max(1, (((var_0 + 2147483647) << (63 - 63)))))));
                                arr_18 [i_1] [i_2] [i_1] = (!var_3);
                                arr_19 [i_0] [i_1] [13] [2] [i_1] = ((var_9 & (max((arr_1 [i_0]), (max(var_5, 1))))));
                            }
                        }
                    }
                    var_13 = (min(var_13, (((((~(arr_13 [i_2]))) != (((!((max((arr_11 [1] [1] [i_0 + 1] [i_1] [i_1] [1]), var_4)))))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    arr_30 [i_8] [i_7] [i_8] |= (arr_22 [i_6] [i_6]);
                    var_14 &= (max((max(3449004294, (((~(arr_29 [i_6] [i_7 - 1])))))), (((-0 != (arr_24 [i_7] [i_7 - 1] [i_8 + 1]))))));
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_15 = (((arr_26 [i_9]) | -var_9));

            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_16 = var_8;
                            var_17 = ((~(arr_34 [i_12 - 1])));
                        }
                    }
                }
                var_18 = (((arr_28 [i_10] [i_11 - 2] [i_11 - 1]) >> (((!(arr_41 [i_9] [i_9] [i_10] [i_10] [i_9]))))));
                var_19 = (min(var_19, -var_6));
            }
            var_20 = 1930;
        }
        var_21 = (min(var_21, ((((var_7 % (arr_40 [i_9])))))));
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        var_22 += (max((max(0, (arr_43 [4] [i_14]))), (((-(arr_43 [4] [i_14]))))));
        var_23 |= (max(((-(arr_8 [i_14]))), (((var_9 < (arr_8 [i_14]))))));
        var_24 = 16;
    }
    var_25 = (!248);
    #pragma endscop
}
