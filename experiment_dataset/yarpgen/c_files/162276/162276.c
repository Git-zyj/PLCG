/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((!61), (((((var_8 ? var_8 : 56))) ? (((var_3 ? 56 : 92))) : (0 * var_7)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = (arr_4 [i_0] [i_1]);
            var_15 ^= ((255 ? -19721 : 93));
        }
        arr_8 [i_0] = ((((max(93, -58))) && ((max((min(-19721, (arr_3 [i_0] [i_0]))), (max(var_0, 19726)))))));
        var_16 = (arr_1 [i_0] [i_0]);
        arr_9 [i_0] = (min((min(((var_13 / (arr_5 [i_0]))), (arr_6 [i_0]))), (((10737440191231163296 ? 26929 : 241)))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_17 = (min(var_17, 17748));
        var_18 = -70;
        arr_12 [i_2] = (((((((arr_11 [i_2]) ? var_11 : var_2))) ? (((var_7 > (arr_10 [i_2] [i_2])))) : ((min(var_5, (arr_10 [i_2] [i_2])))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 = (max(var_19, (((var_8 <= (((-124 + 2147483647) >> 6)))))));
        var_20 |= (arr_14 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_21 = (((arr_13 [i_5]) + (arr_13 [i_5])));
            arr_22 [2] [i_5] = ((3823404292998111763 ? 0 : -12219));

            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                var_22 = (arr_18 [i_6]);
                arr_25 [i_6] [i_5] [i_4] [i_4] |= ((6 << (-19726 + 19738)));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_30 [i_4] = (((arr_3 [i_4] [i_4]) ? (arr_3 [i_4] [i_4]) : var_4));
                var_23 = (!(arr_19 [i_4] [i_5] [i_7]));
                arr_31 [i_5] = ((arr_5 [i_4]) ? (arr_5 [i_4]) : var_9);
                var_24 = (183 / -2);
                var_25 = (((((246 + (arr_18 [i_7])))) ? (arr_4 [i_4] [i_7]) : (arr_0 [i_4])));
            }
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                arr_36 [1] [i_5] [1] [i_5] = (((arr_33 [i_4] [i_5]) >= (arr_23 [i_8 + 1] [i_8 - 1] [i_8 + 1])));
                var_26 = var_2;
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_27 = arr_26 [i_4] [i_5];
                            arr_45 [i_11] [i_9] [i_10] = (arr_20 [i_4] [i_5] [i_11]);
                            var_28 |= (arr_32 [1] [i_5] [i_9]);
                            var_29 = ((68 ? var_1 : var_10));
                            arr_46 [i_11] = -3118558294;
                        }
                    }
                }
                var_30 = (arr_34 [i_4] [i_5]);
            }
            arr_47 [i_5] [i_4] = (((arr_33 [i_4] [i_4]) ? (arr_33 [i_4] [i_4]) : (arr_33 [i_4] [i_4])));
        }
        var_31 = ((174566745 ? 27 : 231));
    }
    #pragma endscop
}
