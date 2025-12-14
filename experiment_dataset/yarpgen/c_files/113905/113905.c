/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = 21851;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_0 - 2] [i_2] [i_3] &= (arr_2 [i_0]);
                                var_18 = (max(((-(arr_11 [i_0] [i_0 + 2] [i_0 - 2] [i_0 - 1] [i_2 + 1]))), (((0 ? (!var_17) : 1)))));
                                var_19 = ((+(((arr_8 [i_0] [i_0] [i_2 + 1] [i_0] [8] [i_3]) - ((var_1 ? var_16 : (arr_0 [i_4] [i_0])))))));
                            }
                        }
                    }
                    var_20 = 2688604660;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_21 = (max(var_21, 21845));
                            arr_25 [i_5] [i_7] [i_7] = (arr_10 [i_7] [i_8 + 4] [i_8 + 3] [i_8 + 2] [i_7]);
                            var_22 ^= ((var_0 ? (arr_21 [i_5] [i_6] [i_9] [i_8 + 4]) : var_11));
                            var_23 = var_7;
                        }
                        var_24 = (((arr_11 [i_8 + 1] [i_8 + 3] [i_8 + 3] [i_8] [i_8 - 2]) & (arr_11 [i_8 + 2] [i_8 + 2] [i_8 + 2] [5] [i_8 + 4])));
                        var_25 = ((arr_6 [i_8 + 1] [i_8 + 3] [i_8 + 4] [i_8 + 2]) ? var_10 : (arr_8 [i_8 + 4] [i_8 - 1] [i_8 + 2] [i_8 + 3] [i_8 - 1] [i_8 + 2]));
                        var_26 = ((var_15 - (arr_13 [i_6])));
                    }
                }
            }
        }
        var_27 = arr_22 [i_5] [i_5] [10] [i_5] [i_5] [1];

        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            arr_29 [i_5] [11] [i_5] = ((var_2 ? (arr_14 [i_10 + 2] [i_10]) : var_1));
            arr_30 [i_5] [i_10] = (((arr_20 [7] [i_10]) / (arr_8 [i_5] [i_10] [i_10] [i_5] [i_10 + 2] [i_5])));
            var_28 = (min(var_28, (arr_9 [i_5] [i_5] [i_10] [1])));
            var_29 = ((var_17 ? (arr_15 [i_10 - 1] [i_10 - 1]) : (arr_15 [i_10 - 1] [i_10 + 1])));
        }
    }

    for (int i_11 = 4; i_11 < 21;i_11 += 1)
    {

        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {

            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                var_30 = (~91);
                var_31 = 5;
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 22;i_15 += 1)
                {
                    {
                        var_32 -= 1662069727;
                        var_33 = (!17164);
                        arr_44 [i_11] [2] [i_14] [i_15] &= (((((!(arr_31 [i_11 - 2])))) << (((max((arr_40 [i_11 - 1] [0] [i_15 + 1] [i_15]), (arr_40 [i_11 - 2] [14] [i_15 - 1] [i_15 - 1]))) - 1152111623))));
                        var_34 = (((arr_39 [i_11 - 2] [i_12] [i_12 + 1] [i_14]) + (arr_34 [i_12] [i_12 - 1] [i_12])));
                    }
                }
            }
            var_35 = (max(1606362635, (127 > 134217727)));
            arr_45 [i_11] [12] [i_12] = ((!((!(!2965196536)))));
        }
        arr_46 [i_11 + 2] = 43684;
        arr_47 [i_11] [19] &= ((((max((~var_12), ((~(arr_37 [i_11] [i_11] [20])))))) ? (arr_38 [i_11] [i_11]) : ((103 ? 43661 : -906363431))));
        var_36 |= ((max(var_13, 85)));
        var_37 = (((min((arr_33 [i_11]), (arr_32 [i_11 - 4]))) | (!43704)));
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 10;i_16 += 1)
    {
        arr_50 [i_16] = ((var_7 ? ((67108608 << (((arr_6 [i_16] [i_16] [i_16] [i_16]) - 25442)))) : var_14));
        arr_51 [i_16] [i_16 - 2] = 877274893;
        var_38 = (max(var_38, -var_7));
    }
    #pragma endscop
}
