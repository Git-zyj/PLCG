/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_11 = var_5;
                            var_12 += ((~((max((arr_8 [i_0] [i_4 + 2] [i_3] [i_3] [i_4]), (arr_8 [i_0] [i_4 + 4] [i_4] [i_0] [i_4 + 4]))))));
                            arr_12 [i_0] [i_0] [1] [9] [i_4 + 1] [i_0] [19] = ((1713515020 ? 1 : 78));
                            arr_13 [i_0] [i_0] [i_3] [i_0] = (max(var_1, (((((arr_7 [i_2] [i_2]) + (arr_0 [i_0] [22]))) + 1))));
                            var_13 = (min(var_13, (arr_11 [i_4] [i_2] [i_4])));
                        }
                        var_14 += (1 >= 1);
                        arr_14 [i_0] = (((1 ^ ((~(arr_5 [i_0] [i_2] [i_1] [i_0]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_15 += 0;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_16 = ((((((arr_8 [i_5] [i_5 - 1] [i_0] [i_5 - 1] [i_5]) ? (arr_8 [i_5] [i_5 + 2] [i_0] [i_5] [i_5]) : (arr_8 [i_5] [i_5 - 3] [i_0] [i_5] [i_5 - 3])))) ? (arr_8 [i_5] [i_5 + 1] [i_0] [i_5] [i_5]) : (arr_8 [i_5 + 1] [i_5 - 1] [i_0] [i_5] [i_5 - 1])));
                                arr_25 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = (min((arr_3 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_5])));
                                var_17 = (max((max(2147483644, ((var_2 ? 0 : (arr_20 [i_5] [i_5]))))), (((-(min((arr_6 [i_0] [i_0]), -2147483644)))))));
                            }
                        }
                    }
                    var_18 = (min(var_18, (((!(arr_24 [i_0] [i_5 + 1]))))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_19 = (min(var_19, (((max((!1), ((2147483644 ? var_6 : (arr_10 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        var_20 = ((((((((arr_18 [i_12] [i_11] [i_10]) + 2147483647)) << ((((arr_24 [i_9] [i_9]) >= (arr_4 [i_12] [i_10] [i_9]))))))) ? (((1 ? (arr_10 [i_9] [i_9] [i_10] [i_10] [i_11 - 3] [i_12]) : (arr_10 [i_9] [i_10] [i_10] [7] [i_11 + 3] [i_12])))) : ((18 ? (max((arr_33 [i_11]), var_2)) : 1))));
                        var_21 |= ((max((arr_5 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 - 2]), 0)));
                        var_22 += (arr_10 [i_9] [i_10] [i_10] [i_10] [i_10] [i_12]);
                        var_23 = (min(var_23, (0 != 8226915230935828716)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
