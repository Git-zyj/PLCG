/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = var_13;
    var_20 = (max(var_12, -var_10));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 2] [i_0] = (min(((-(arr_1 [i_0] [i_0])), (arr_0 [i_0 + 1]))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] = (arr_1 [i_0 - 1] [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_21 = ((~((~(arr_9 [i_0])))));
                            var_22 = (min(var_22, ((~(!2147483618)))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_23 = (arr_20 [i_0]);
                        arr_23 [i_7] [i_0] [i_0] [i_0 - 1] = min(((min(32767, -32764))), 18);
                        arr_24 [i_0 - 1] [i_5] [i_6] [i_0] = (min((min(((max(120, (arr_8 [i_0 + 2] [i_5] [i_6] [i_7])))), (max(32764, (arr_13 [i_0 + 3] [i_5] [i_6] [i_7] [i_7]))))), (arr_22 [i_5] [i_0] [i_7])));
                        var_24 &= (arr_12 [i_0 + 3] [i_0 - 1] [i_6] [i_7] [i_6] [i_6]);
                    }
                }
            }
            var_25 = arr_0 [i_0 - 1];
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_26 = (arr_4 [i_0 + 1]);
            var_27 = (min(((~((max((arr_25 [i_0] [i_8] [i_0]), (arr_8 [i_0] [i_8] [i_8] [i_0 + 1])))))), ((min((arr_5 [i_0] [i_0]), (((!(arr_0 [i_0 + 2])))))))));
            arr_28 [i_0 + 3] [i_0] [i_8] = ((!((max((arr_9 [i_8]), (((!(arr_25 [i_0] [i_8] [i_8])))))))));
        }
        for (int i_9 = 3; i_9 < 16;i_9 += 1)
        {
            var_28 = (min(var_28, (((!(arr_26 [i_0 + 1] [i_9 - 2]))))));
            var_29 += (arr_12 [10] [i_9] [i_9] [i_9] [i_0 + 3] [10]);
            var_30 = arr_30 [i_0 + 2];
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                {
                    var_31 &= (arr_36 [i_10] [i_11 + 1] [i_10] [i_12 - 1]);
                    arr_37 [i_11] [i_10] [i_11 + 1] [i_12 + 1] = (min((max((arr_31 [i_10] [i_12 + 1]), (((!(arr_35 [i_11] [i_12 + 2])))))), ((min((-127 - 1), (!248))))));
                    var_32 = ((~(max((arr_31 [i_10] [i_12 - 1]), ((-(arr_31 [i_10] [i_11])))))));
                    var_33 = ((!(arr_31 [i_11] [i_12 + 1])));
                }
            }
        }
        arr_38 [i_10] = (min((arr_35 [i_10] [i_10]), (arr_32 [i_10] [i_10])));
        arr_39 [i_10] = (arr_33 [i_10]);
    }
    #pragma endscop
}
