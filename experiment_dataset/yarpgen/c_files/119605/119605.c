/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((96 ? 76 : 127));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (((arr_4 [i_0] [i_0 + 1] [i_0 + 1]) ? var_10 : (max((max(var_12, (arr_4 [i_2 - 3] [i_1] [i_2 - 2]))), var_9))));
                    var_14 = (arr_4 [i_0] [i_1] [i_2]);
                    arr_10 [9] [i_1] [i_1] [i_1] = ((~(arr_1 [i_0 + 1])));
                    arr_11 [i_1] = (min(((var_4 && (arr_4 [i_0 - 1] [i_1] [1]))), (((arr_4 [i_0 - 1] [i_0 + 1] [i_2 + 1]) || (arr_4 [i_0 - 2] [i_0 - 2] [i_1])))));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_15 = (~54514);
                            arr_21 [i_3] [i_6 + 1] = ((-(arr_20 [i_0 + 1] [i_4] [i_5] [14])));
                            var_16 &= var_6;
                        }
                    }
                }
            }
            arr_22 [i_0 - 1] [i_3] [i_3] = (4698058937995790046 / var_11);
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_17 -= ((((~(~var_1))) / var_3));
            arr_26 [i_0] [i_0 + 1] [10] = var_12;
            arr_27 [i_0 - 1] [7] [i_7 + 2] = (arr_17 [i_0 + 1] [i_0 + 1]);
        }
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            var_18 = (arr_29 [i_0 + 1]);
            var_19 = (max((((arr_7 [i_0 - 2] [i_8] [i_8 + 1]) ^ var_1)), (((arr_7 [i_0 - 2] [i_8] [i_8 - 2]) ^ var_2))));
            var_20 = (max(var_20, -var_11));
        }

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_21 &= (var_1 ^ var_2);
            var_22 = ((((((180 < var_1) ? var_6 : var_8))) ? (min((var_5 != var_11), (max((arr_2 [i_0]), (arr_6 [i_0] [i_0 - 2] [i_9]))))) : (((155 ? -1945309479 : 99)))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        var_23 = (((var_9 + 2147483647) >> (((min((15967031964988199563 - var_1), (((94 ? 8524 : var_8))))) - 8524))));
                        arr_40 [i_0 - 1] [14] [i_0 - 1] [i_10] [i_11] [i_11] = (((((((arr_12 [i_0] [i_0]) <= (arr_39 [i_0]))))) ? var_0 : (((!((min((arr_29 [i_0]), var_9))))))));
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_24 = (max(7, ((((var_0 + 2147483647) >> (var_9 + 18276))))));
        arr_44 [i_12] [i_12] = ((((var_0 ? 434294699 : (arr_4 [1] [1] [i_12]))) > (((var_12 / (arr_16 [i_12]))))));
    }
    #pragma endscop
}
