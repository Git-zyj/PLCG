/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [19] [i_0] [i_0 - 4] [i_0] = ((var_13 + ((((max(var_15, 25)))))));
                    arr_9 [7] = 1789815473;
                }
            }
        }
        var_20 = (((((~var_5) % (~var_19)))) ? (((!(arr_5 [i_0 - 3] [i_0 - 3] [i_0 + 1])))) : (!12127114871183877262));
        arr_10 [i_0 - 1] = var_19;
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_14 [i_3] = (max((arr_7 [i_3 + 3]), 25));
        arr_15 [i_3 + 4] = var_2;

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5 - 1] = (arr_23 [i_3] [i_3 + 2] [i_4]);

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_29 [i_3 + 2] [i_4] [i_5 - 2] [i_6] [11] = -25;
                            arr_30 [i_4] [i_4] [i_4] |= ((~(arr_7 [0])));
                            arr_31 [i_3 + 2] [i_3] [i_5] [i_6] [i_7] [11] [i_3] |= 61;
                        }
                        arr_32 [i_3] [i_4] [i_3] = var_1;
                    }
                }
            }

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_21 = (((((max(var_8, 0) >= (arr_37 [i_9 - 3] [i_9 - 3] [i_4] [i_9 + 1] [i_9 - 3]))))));
                            var_22 = (min(var_22, var_5));
                            var_23 |= var_1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_46 [i_12] [i_11] [i_8] [i_11] [i_3] = 46;
                            var_24 = 22397;
                            arr_47 [0] [i_11] [i_11] [i_11] [i_12] = arr_38 [i_3];
                            var_25 = (max(var_25, 51));
                        }
                    }
                }
                arr_48 [i_3] [i_4] [i_4] [i_8] |= 0;
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_26 += ((+(((!((((arr_5 [i_3] [i_3 + 1] [i_3 + 2]) ^ var_19))))))));
                            arr_57 [i_3] = ((((arr_26 [i_3 + 4] [i_3 - 1]) > (arr_23 [i_3 + 3] [i_3 + 3] [i_15 + 1]))));
                        }
                    }
                }
            }
        }
        for (int i_16 = 2; i_16 < 14;i_16 += 1)
        {
            var_27 += (min(((31 ? (arr_45 [i_3] [i_3 + 1]) : (arr_45 [i_3] [i_3 - 1]))), ((var_3 ? (arr_45 [i_3] [i_3 + 3]) : (arr_45 [i_3] [i_3 + 2])))));
            var_28 = ((3153247053885195887 ? ((-8 ? (arr_35 [i_3 - 1] [i_16] [i_3 + 4]) : (var_12 / 24))) : var_5));
        }

        for (int i_17 = 4; i_17 < 12;i_17 += 1)
        {
            arr_62 [i_17] [4] [i_17] = -7;
            arr_63 [i_3 + 3] [11] [i_17] = var_9;
            var_29 = (max(var_29, ((((~var_10) ? ((((arr_0 [i_17 - 2]) ? (arr_18 [i_17 - 2]) : (arr_6 [i_17 - 2] [i_17 + 1] [i_3 + 4])))) : (((arr_0 [i_17 - 2]) ? (arr_0 [i_17 - 2]) : -39)))))));
            arr_64 [i_17] [i_17] [i_3 + 3] = ((!(!var_18)));
        }
        arr_65 [i_3] [i_3 + 4] = ((!((((max(var_7, 122880)) + var_0)))));
    }
    var_30 = var_4;
    #pragma endscop
}
