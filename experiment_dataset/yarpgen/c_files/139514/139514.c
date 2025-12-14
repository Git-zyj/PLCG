/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = (~var_5);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 = ((-var_8 * (((arr_5 [i_1] [i_1] [i_1]) ? (arr_5 [i_2] [i_0] [i_0]) : (11264171987137757657 * 13130)))));
                        var_16 = (((((((min(var_2, (arr_2 [i_0] [i_1] [i_3]))) > (arr_5 [i_3] [i_2] [i_1]))))) - (((arr_4 [i_0] [i_0] [i_3] [i_1]) ? 1953495788 : var_2))));

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            var_17 = ((((arr_7 [i_1]) ? var_3 : var_6)) ^ var_1);
                            var_18 = (arr_4 [i_0] [i_4 + 1] [i_2 - 2] [i_0]);
                        }
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            arr_13 [i_0] [20] = var_7;
                            var_19 = ((-1416978883 ? 1416978882 : ((~(arr_12 [i_0] [i_3] [1])))));
                            var_20 ^= ((var_0 ? 1416978883 : (min((((var_9 ? var_12 : (arr_1 [i_0])))), (((arr_9 [i_0] [i_1] [i_2] [i_3 - 1] [i_5 - 2]) ? (arr_4 [i_1] [i_2] [i_3 - 2] [2]) : (arr_0 [i_0])))))));
                            var_21 = var_7;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_22 = (max(var_22, (((~(((var_5 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_0))))))));
                            var_23 = (5112090784074191235 < 217);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            var_24 = -var_2;
            var_25 = (min(var_25, -1416978872));
            var_26 = (((var_8 / 63) ? (arr_7 [i_0]) : (var_1 + -43)));
            arr_19 [i_0] = 5112090784074191235;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_27 = ((739373184 ? (arr_18 [i_8]) : var_6));
            var_28 -= ((arr_3 [i_8] [i_0]) * 739373174);
        }
        arr_22 [i_0] = (((((var_3 - (arr_21 [i_0] [i_0])))) ? var_2 : (739373184 != var_5)));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_25 [i_9] = (-1416978884 > var_7);
        var_29 = 0;
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_28 [i_10] = var_2;
        var_30 = (((((var_7 < (var_3 & 28151)))) / ((var_10 / (var_9 || var_3)))));
        var_31 = ((var_2 != (((((arr_12 [i_10] [i_10] [23]) || var_4))))));
    }
    for (int i_11 = 1; i_11 < 13;i_11 += 1)
    {
        var_32 = var_11;
        var_33 = (~-11);
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 12;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_34 = (((var_3 ? 46 : (var_12 - var_2))));
                        var_35 = ((-(4052198217265985423 / 605177896)));
                        var_36 += (var_2 ? var_6 : (5243 % 4866712632749914081));
                    }
                    arr_39 [i_13] [i_11] [i_13] = arr_37 [i_11] [11] [i_12] [i_12];
                }
            }
        }
    }
    #pragma endscop
}
