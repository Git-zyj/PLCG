/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_8;
    var_11 = (min(0, 928074974985562871));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_12 = (0 <= 1);
        var_13 = ((((var_7 ? 101 : 18446744073709551615)) ^ (((((max(var_3, var_6))) ? var_1 : (arr_0 [i_0 - 2]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            var_14 = -4725183669844423472;
                            arr_11 [i_0 - 1] [i_0] [i_1] [i_2 + 2] [3] [i_4] [i_1] = (var_2 && -1521596717154452176);
                            var_15 = (arr_3 [i_0] [i_1]);
                            arr_12 [14] [4] [6] [14] [i_3] &= ((-11572 ? (!var_9) : (arr_4 [i_2 + 3] [i_0 + 1])));
                        }
                        var_16 = (min(42478, 5570682632066969885));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_17 = ((min(var_9, var_2)) | (~0));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_21 [i_7] = (((max((arr_6 [5] [i_6 - 1]), 134217727)) != 1));
                    var_18 = 4725183669844423481;
                    var_19 = (((max(-1, (arr_19 [i_5] [1] [i_6 + 2]))) + ((((max(4266, -11586))) ? (arr_3 [i_6 + 1] [i_7]) : -7979394622317451689))));

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_20 -= var_2;
                        var_21 = (max(-var_3, ((var_8 << ((((((min(-11586, 1))) + 11604)) - 3))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        arr_28 [9] [i_7] = var_9;

                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            arr_31 [i_7] [i_6] [16] [i_9] = (!-194320031);
                            arr_32 [i_5] [i_5] [i_6 - 2] [i_7] [13] [i_9] [i_10 - 1] = (~-var_1);
                        }
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            var_22 -= ((-7716318199293688513 != (var_6 || var_8)));
                            var_23 = (max(var_23, (255 - var_3)));
                            arr_35 [i_5] [i_6] [i_7] = var_4;
                            var_24 = (max(var_24, ((((arr_23 [i_6 + 2] [i_9 + 1]) << ((((~(arr_3 [i_7] [i_5]))) + 4)))))));
                        }
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            arr_39 [i_7] [i_6 - 1] [i_6 - 3] [i_7] = 0;
                            var_25 ^= (!(!var_8));
                            arr_40 [5] [i_6 + 2] [16] [i_7] [i_9 - 2] [i_9 - 2] [15] = (0 & 17518669098723988744);
                        }
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_46 [0] [0] [i_7] [i_7] [i_14] = (((((min(var_0, var_7)) | (~var_7))) ^ var_1));
                            arr_47 [i_5] [i_6 + 2] [2] [i_5] [12] &= (((((min(4839008338494199157, -1521596717154452176)) / var_6)) * (((1 ? 11 : 65535)))));
                            arr_48 [12] [i_7] [12] [i_13] [i_13] = ((((min(27651, (max(13, 1))))) ? -36 : ((var_7 ? (max(var_2, 524287)) : 1))));
                            arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] [i_7] = ((min(4148781011, 2937514891)));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            var_26 = (~-7716318199293688513);
                            var_27 &= (((var_1 > -19) ? 1 : (arr_33 [4] [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1] [i_13] [i_15])));
                            var_28 = (min(var_28, (1 == var_7)));
                        }
                        arr_54 [i_7] [i_6] [i_6] = ((1 + (max((arr_33 [i_6 + 2] [4] [i_6 - 1] [4] [i_6 - 2] [i_6 + 1] [i_6 + 2]), 16383))));
                        var_29 = -42;
                    }
                }
            }
        }
    }
    var_30 = (max(var_30, var_1));
    var_31 = (((((max(11585, 0)))) & var_4));
    #pragma endscop
}
