/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((~(min(var_2, 111))))));
    var_13 = ((((max(((var_3 ? var_1 : var_2)), var_11))) ? var_11 : 2251799813685247));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [18] = ((var_11 ? var_7 : 6126));
        var_14 = ((var_1 ? var_11 : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_9 [i_2] [i_1] [i_0] [i_2] = -7;
                arr_10 [i_0] [i_1] [i_2] |= (var_3 ? (arr_1 [i_0]) : (arr_1 [i_1]));
                var_15 = (max(var_15, (var_1 | 29217)));
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_16 = (~(((!(arr_8 [i_0])))));
                arr_13 [i_1] [i_1] [i_1] [i_1] = ((83 ? 59430 : 1));
            }
            arr_14 [i_0] [i_1] [i_0] = var_4;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_23 [i_5] [i_5] [i_5] [i_0] [i_0] [i_5] = ((~(arr_3 [i_0])));
                        arr_24 [i_0] [i_5] [i_5] [i_0] = var_11;
                    }
                }
            }
            arr_25 [i_4] [i_0] = var_5;
            var_17 = (~var_2);
            var_18 = (min(var_18, (((-(arr_3 [i_0]))))));
            var_19 = (arr_5 [i_0] [i_0]);
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            arr_29 [i_7] [i_7] [i_7 + 3] = (var_4 && 48);
            arr_30 [i_7] [i_7] [i_7] = (~var_7);
            var_20 = ((var_3 ? (arr_4 [1] [i_7 + 1] [i_7 - 1]) : -316865921));
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_34 [i_8] [i_8] = 16663285681264088564;
        var_21 = -117;

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_22 = ((((min(var_4, var_8))) ? (((!(arr_18 [i_8] [i_8] [i_8] [i_8])))) : ((min(59412, (arr_18 [i_8] [i_9] [i_9] [i_8]))))));
            arr_38 [i_8] [i_8] [i_9] = (((((min(var_0, 4120377181)) + 9223372036854775807)) << (((var_5 + 31) - 25))));
            arr_39 [i_8] [1] [i_8] = (max(((-(arr_36 [i_9]))), (!83)));

            /* vectorizable */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_23 = (min(var_23, ((((arr_33 [15]) == 1)))));

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_24 = (arr_27 [i_8] [i_8]);
                    var_25 = (max(var_25, (~var_0)));
                    var_26 = var_4;
                    arr_45 [i_8] [i_8] [i_8] [i_8] = ((((((arr_12 [i_9] [i_10] [i_11]) ? (arr_35 [i_11]) : 6106))) ? (arr_41 [i_8] [13]) : 185));
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    arr_49 [i_8] [i_9] [2] [i_8] [i_12] = (0 % 6106);
                    arr_50 [i_8] [i_9] [i_9] [i_9] [i_9] [i_9] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
