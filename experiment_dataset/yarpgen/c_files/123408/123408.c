/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = ((5072640317722798077 >= 1) > var_14);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_2;
                    var_18 = 13374103755986753538;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_19 = (((arr_0 [i_1] [i_3]) & (arr_4 [i_0] [i_1])));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_20 = (arr_11 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3]);
                            var_21 |= (arr_4 [i_2] [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_22 = (arr_9 [i_0] [i_0] [i_0] [i_3 - 1] [i_0]);
                            arr_16 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3] &= ((var_2 & (203 || 13374103755986753539)));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] |= (arr_0 [i_0] [1]);
                            var_23 = (min(var_23, (arr_11 [i_0] [i_1 + 2] [i_2] [i_3 + 1] [i_0])));
                            var_24 = 11878401295313507295;
                        }
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            var_25 &= (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_26 = (min(var_26, (arr_22 [i_1 + 4] [i_2] [20] [i_3 + 1] [i_0])));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_27 = (arr_2 [i_1]);

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_28 = arr_0 [i_1 + 4] [i_1 + 3];
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_26 [i_1 + 3] [i_1 - 1] [i_1] [i_1] [4] [i_9]) % (arr_26 [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 3])));
                            var_29 = ((302836694 * (((!(arr_20 [i_8]))))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_30 = ((-(arr_30 [i_0] [i_1] [i_0] [i_10] [i_10])));
                            arr_33 [i_0] [i_10] = (arr_2 [i_0]);
                        }
                        arr_34 [i_8] &= (arr_30 [i_1 + 1] [i_1] [i_2] [i_8] [i_1]);
                        var_31 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] &= (arr_3 [i_0] [i_11]);
                            arr_38 [18] [i_1 - 1] [i_1] [i_1 + 3] &= (((arr_5 [i_2] [i_1 - 2]) << (((arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1]) - 39188))));
                        }
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_32 |= (arr_7 [i_0] [i_1 + 1] [i_12]);

                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            var_33 = 13374103755986753538;
                            var_34 = (min(var_34, (((((((arr_24 [i_13] [i_13] [i_13] [i_13] [i_13]) || ((((arr_9 [i_1] [i_1] [i_1] [i_1] [i_0]) ? var_7 : 0)))))) & ((max((arr_6 [i_1] [i_1] [i_1 + 3] [i_1 + 1]), (arr_6 [i_0] [i_1] [i_1 + 1] [i_1 + 2])))))))));
                            var_35 -= ((((~(arr_42 [i_0] [i_0] [i_1 + 4] [i_2] [i_12] [i_13]))) >= (((((arr_42 [i_0] [i_1 - 1] [i_2] [i_12] [i_12] [i_13]) <= 31))))));
                        }
                        arr_43 [i_12] [i_1] [i_0] = (arr_14 [i_1 + 2]);
                    }
                    arr_44 [i_0] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
