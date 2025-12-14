/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = ((-1 ? (((arr_4 [i_0] [i_1] [17]) + var_2)) : (arr_2 [i_0])));
            arr_7 [i_0] [13] = ((!(arr_5 [i_1] [i_1])));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_19 = (((((3476834344 && (arr_6 [i_0] [i_0] [i_0]))) ? (((arr_4 [i_3] [i_2 + 1] [i_3]) ? var_14 : var_12)) : 38704)));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [12] [i_0] [i_3] [13] = (min(171, ((38704 ? ((max(-21, 0))) : (~-31925)))));
                                var_20 += var_2;
                                arr_21 [i_0] [i_0] [i_3] [i_0] [i_4 + 2] [0] [i_5] = var_9;
                                var_21 = ((((min(((1 + (arr_16 [i_0 + 1] [i_2] [i_2] [i_0] [i_4] [i_5]))), 59685))) == (((arr_5 [i_2 - 1] [i_3]) ? (((67 ? 1 : var_9))) : (arr_4 [i_4 + 2] [i_4 + 2] [i_2 + 2])))));
                                arr_22 [i_0] [i_4 + 1] [i_0] [i_4 + 2] [i_0] [i_4 + 1] = ((33554431 ? (arr_14 [i_4 - 1] [i_0] [i_2 + 1] [i_0 + 1] [i_0] [i_0 + 1]) : (!31925)));
                            }
                        }
                    }
                    var_22 = (31944 ? (arr_19 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [13]) : (((var_2 ? ((2147483647 ? var_1 : (arr_0 [i_2]))) : ((max(0, (arr_11 [i_0] [5] [i_0]))))))));
                }
            }
        }

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_23 &= (((((((1 ? 1 : -31925))) ? ((var_10 ? var_8 : 0)) : (((1 ? 1 : 254)))))) ? 1 : ((min((arr_14 [i_0 + 1] [0] [i_0] [i_0] [i_6] [i_6]), 237))));
            arr_26 [i_0] [19] [i_6] = ((!((((arr_11 [i_0 + 1] [i_0 + 1] [i_0]) - (((arr_1 [i_0]) ? 4294967288 : var_12)))))));
        }

        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            arr_29 [i_0] = (((max((!1826430265), (!1))) || 2));
            arr_30 [i_0] [i_0] [i_7 - 2] = (max(-32, (arr_18 [i_7 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            arr_35 [i_0] [i_0] = (arr_5 [i_8 + 1] [i_8 - 1]);
            var_24 = (((20 - var_0) ? 2398629027 : 120));
            var_25 += (56353 - -66);
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_38 [i_9] [i_9] = ((min(1826430265, (arr_17 [i_9]))));
        arr_39 [i_9] = (((((((var_17 ? 1 : (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : ((var_9 ? var_15 : var_0)))) + (((1 ? (((arr_14 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (arr_12 [i_9] [i_9] [i_9] [i_9]) : (arr_31 [i_9]))) : (((-32767 - 1) ? 1024 : 1263447337)))))));
    }
    var_26 = var_7;
    var_27 = ((!((min((var_8 > 58), -var_10)))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            {
                var_28 = 58;
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_29 = (arr_46 [i_10] [i_11] [i_11] [i_11]);
                                arr_51 [i_11] [i_13] [16] [0] [i_10] [0] [i_11] = ((var_6 + (max(1, (arr_49 [i_10] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])))));
                                var_30 = (25453 ? -520569306 : 85);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
