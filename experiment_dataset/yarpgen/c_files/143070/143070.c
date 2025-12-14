/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_4));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0]) ? (arr_1 [i_0 - 2]) : 220));
        var_13 = (min(var_13, var_3));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_8 [i_0 + 1] [i_0] = ((var_7 ? (arr_5 [i_0] [i_1] [i_1]) : (-127 - 1)));
            var_14 = 200;
            arr_9 [20] |= 1;
        }
        var_15 += ((var_8 ? (arr_4 [i_0] [i_0] [14]) : (((arr_5 [0] [i_0 - 1] [i_0]) ? var_10 : (arr_2 [10])))));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, (((var_0 ? (((-116 ? -37 : 92))) : (max(-var_7, var_11)))))));
                    var_17 = 110;
                }
            }
        }

        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_26 [i_6] [i_5] [i_5] [i_6] [i_5] [i_2] = (arr_13 [i_2]);

                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            var_18 |= (max((max(var_10, (arr_11 [i_8 + 1] [9]))), (arr_11 [i_7] [i_8])));
                            arr_30 [i_5] [i_5] = (!10485);
                            arr_31 [i_5] [i_5] [8] [i_5] [i_5] [i_2 - 2] = var_7;
                            var_19 &= var_6;
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_35 [i_6] [i_5] [i_9] = ((5489438647218611829 < (var_5 & 0)));
                            var_20 = 52;
                            var_21 = -6970825753978330696;
                            arr_36 [i_2 - 3] [i_5] [i_7] [i_9] = ((((arr_23 [i_5 - 2] [3] [3]) ? (arr_7 [i_5 - 2] [i_7]) : (arr_7 [i_5 - 2] [i_6]))));
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            arr_43 [i_2] [i_2] [i_2] [i_5] = -1;
                            arr_44 [i_5] [i_5] = ((arr_16 [i_10] [i_10] [i_10]) ? (((max((-127 - 1), (arr_38 [i_10] [i_10] [i_12]))))) : (max(110, 3910433176)));
                            var_22 = ((((~(min(126721684, var_0)))) | (arr_12 [i_11] [i_12])));
                        }
                    }
                }
                var_23 = (min(var_23, (((~(arr_39 [i_2 + 2] [i_2 + 2] [12] [i_2 - 3]))))));
                arr_45 [i_5] = ((-((-((max(var_5, var_6)))))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
            {
                var_24 = 35395;
                arr_50 [12] [12] |= 156;
            }
        }
        for (int i_14 = 4; i_14 < 9;i_14 += 1)
        {
            var_25 = (max(var_25, ((min(-var_0, (arr_20 [i_2 + 1] [i_2 + 1]))))));
            var_26 = (((-2147483647 - 1) ? ((min(((-(arr_24 [i_14 - 2] [i_14] [i_14] [i_2 - 1]))), (arr_11 [10] [i_14])))) : ((var_10 ? -75 : (arr_46 [i_14 + 1] [i_14] [i_2])))));
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 10;i_15 += 1)
        {
            var_27 = var_0;
            arr_56 [i_2 + 2] [i_2 - 1] [i_15 + 1] = ((!(arr_5 [0] [i_15] [i_15 + 1])));
        }
    }
    #pragma endscop
}
