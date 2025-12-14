/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = 0;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_2] = (arr_11 [i_0] [i_0] [i_0] [i_3]);
                            arr_17 [8] [8] [i_2 - 3] = (arr_3 [i_2 - 2] [i_0 - 1]);
                        }
                    }
                }
                arr_18 [i_0] [i_1] [i_2] [i_0 - 1] = (((99 && var_0) % (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                arr_19 [1] [i_0 - 1] [i_0] [1] = (((arr_8 [i_0] [i_0] [i_0 - 1] [i_0]) ? (arr_8 [i_0] [i_0 - 1] [i_0] [i_0]) : (arr_8 [i_0] [i_1] [i_1] [i_2 - 1])));
            }
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {

                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    arr_28 [i_0 - 1] [i_5] [5] [i_6 - 3] [i_6 - 1] [15] = var_3;
                    arr_29 [i_0] [i_6 + 1] [0] [i_6 - 1] [i_6] [i_6 - 1] = ((((var_10 != (arr_23 [1] [i_5] [i_1] [1]))) ? (arr_24 [i_0] [i_1] [i_5] [i_1] [i_5]) : ((var_1 ? var_0 : (arr_5 [i_0 - 1] [i_1])))));
                }
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    arr_33 [i_0] [i_1] [4] [i_5] [i_5] [i_7 - 1] &= var_8;

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_38 [i_0] [i_0] [i_0 - 1] [2] [i_0 - 1] [i_0] &= var_11;
                        arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [2] = arr_21 [4] [i_8];
                        arr_40 [i_0 - 1] [i_0 - 1] [6] [i_0] [i_0] [i_0] = (var_6 / var_5);
                    }
                    arr_41 [2] &= arr_26 [i_0 - 1] [i_0 - 1] [i_5 + 1] [i_7 - 1];
                    arr_42 [i_1] [i_1] [i_1] [i_5] = var_5;
                }
                arr_43 [i_0] [i_0 - 1] [i_5] [i_5] = (((arr_2 [i_5 - 1] [i_0 - 1]) && (((arr_9 [i_0] [i_5] [i_5]) && 0))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_48 [i_0] [12] [i_0] [i_0 - 1] [i_0] &= (arr_10 [i_9] [i_0 - 1]);
                            arr_49 [i_1] [i_1] [i_5] [i_1] [i_10 - 3] = (((arr_5 [i_0 - 1] [i_5 - 1]) | (arr_5 [i_0 - 1] [i_5 - 1])));
                        }
                    }
                }
            }
            arr_50 [i_0] [i_0] &= var_1;
        }
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            arr_54 [12] [14] = var_4;
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_59 [8] [i_0 - 1] [i_11] [i_11] [i_12] [i_13 + 1] = (((arr_35 [1] [i_12] [i_12 - 1] [i_11 - 1] [i_11 + 1] [1]) != (((arr_26 [i_0 - 1] [i_11] [i_11] [i_0 - 1]) ? (arr_45 [i_0] [i_11 + 2] [1] [14]) : (arr_37 [i_0] [14] [i_12] [i_13] [i_13 - 1])))));
                        arr_60 [8] [12] [8] [8] [i_12 - 1] [i_12 - 1] = (arr_5 [i_0 - 1] [i_0]);
                        arr_61 [i_11] [i_11] = (arr_55 [i_12] [i_12]);
                    }
                }
            }
            arr_62 [i_11] [i_0 - 1] [i_11] = ((!(arr_46 [i_11] [i_11] [0] [i_11 - 2] [i_11] [i_11 - 1] [i_11 - 2])));
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        {
                            arr_70 [2] [i_11] [i_14] [i_16] = (4193635068 == var_0);
                            arr_71 [i_11] [i_11] [i_11] [i_11] [i_14] [i_15 - 1] [i_11] = ((-(arr_21 [i_11] [i_0 - 1])));
                        }
                    }
                }
            }
        }
    }
    for (int i_17 = 3; i_17 < 18;i_17 += 1)
    {
        arr_74 [i_17] [i_17] &= ((((var_0 ? (arr_73 [i_17 + 1] [i_17 + 1]) : ((((!(arr_72 [i_17] [i_17 - 1]))))))) / (arr_72 [i_17] [i_17])));
        arr_75 [i_17] [i_17 + 2] = ((((min((arr_73 [i_17 + 2] [i_17 - 3]), var_5))) && (((((arr_72 [i_17] [i_17]) || -99)) || ((!(arr_72 [i_17] [i_17])))))));
    }
    #pragma endscop
}
