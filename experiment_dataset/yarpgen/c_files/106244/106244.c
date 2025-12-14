/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_12 = 11992981479141770219;
        arr_3 [i_0] [i_0] = 250;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_2] = (arr_6 [i_2] [i_1] [i_0 - 2]);
                arr_10 [i_0] = 238;
                arr_11 [i_0] [i_2] = var_10;
                arr_12 [i_0] = var_3;
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_13 = (max(var_13, ((((arr_4 [i_3]) ? var_8 : ((((var_8 != (arr_2 [i_3]))))))))));
                var_14 = ((var_7 ? 3113968062 : (arr_16 [i_0 - 1] [i_0] [i_0 - 3] [i_0])));
                var_15 = 1;
                var_16 = 185;
                var_17 = (-9223372036854775807 - 1);
            }
            var_18 = (min(var_18, -98023471));
            arr_17 [i_0] [i_0] = (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 3]);
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_19 = (arr_6 [i_0] [1] [i_0]);
            var_20 = 70;
        }
        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            arr_23 [i_0] [0] &= (((arr_16 [i_0] [i_5] [i_0] [i_5]) + 2203860449709947609));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_21 = (arr_2 [i_0]);
                            arr_32 [i_0] [i_5] [i_5] [i_7] [i_0] = (~0);
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_37 [i_0] = ((arr_0 [i_0]) - (arr_0 [i_0]));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        var_22 = var_2;
                        var_23 = (~-1096701408);

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_24 = (!1);
                            var_25 = (min(var_25, (arr_18 [i_0] [i_0 - 3] [1])));
                            var_26 ^= -15;
                            var_27 -= (((arr_7 [i_0] [i_9] [i_10] [i_11]) ? (arr_31 [i_0 - 2] [i_9] [i_10] [i_10] [5] [i_12] [i_12]) : (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 2])));
                        }
                        for (int i_13 = 3; i_13 < 8;i_13 += 1)
                        {
                            var_28 -= (((arr_31 [i_0] [i_9] [i_0] [i_0] [i_13] [i_9] [9]) | (arr_36 [i_0 - 3] [i_11])));
                            arr_46 [i_0] [i_9] [i_10] [i_0] [i_11] [i_13 + 2] [i_13] = 36;
                            arr_47 [i_0] [8] [8] [i_11] [i_13] = var_3;
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_29 = (min(var_29, 1212195005));
                            var_30 = (2884804185 ? (arr_42 [i_0] [i_9] [i_10] [9] [i_11]) : var_6);
                            arr_50 [i_0] [i_10] [i_11] [i_11] = 798702788263214513;
                        }
                    }
                }
            }
            arr_51 [i_0] [i_0] = ((2783 ? 1 : 1212194996));
        }
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 15;i_15 += 1)
    {
        var_31 = (!-var_6);
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 15;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 15;i_18 += 1)
                {
                    {
                        arr_60 [2] [i_15] [i_16] [i_16] [i_17] [13] = (arr_56 [i_15]);

                        for (int i_19 = 1; i_19 < 16;i_19 += 1)
                        {
                            arr_64 [i_16] [6] [i_17] [i_17] [i_16] [i_16] &= 62753;
                            arr_65 [i_18] [i_15] [i_18] [i_18] [i_18] = ((-((9007199187632128 ? var_5 : 185))));
                            var_32 -= ((arr_62 [i_17 - 2] [i_18] [i_18] [10] [i_18] [i_18 + 1]) ? (arr_54 [i_15 - 1] [i_17 + 2]) : 1);
                        }
                        for (int i_20 = 0; i_20 < 17;i_20 += 1)
                        {
                            arr_70 [i_15] [i_15] [i_18] [i_17] [2] = var_7;
                            arr_71 [i_15] [i_20] = ((var_9 ? (arr_57 [i_17 - 3]) : 0));
                        }
                    }
                }
            }
        }
    }
    var_33 = (max(var_33, ((((0 ? var_8 : 4294967289))))));
    var_34 = 8876592693647928880;
    #pragma endscop
}
