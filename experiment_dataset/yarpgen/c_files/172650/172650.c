/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    arr_7 [20] [20] [i_2] = (arr_5 [i_0] [i_1]);
                    arr_8 [i_0] [20] [i_2] [i_2] = (18446744073709551615 ? var_0 : (arr_6 [i_0]));
                    arr_9 [i_2] [22] &= (((arr_2 [15]) ? 4095 : (arr_2 [i_0])));
                    arr_10 [i_0] = var_3;
                    arr_11 [i_0] [i_1] [i_2] = ((18446744073709551615 ? var_11 : (arr_6 [i_0])));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_0] = ((((((arr_13 [i_0]) * var_5))) ? (min(-18446744073709551610, (min(var_11, 18446744073709551615)))) : (var_1 * var_7)));
                    arr_17 [i_0] [i_0] [i_0] |= max(6, ((var_4 * (arr_2 [i_1]))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_20 [i_0] = 127;

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_25 [20] [i_1] [i_5] [15] [i_5] [15] = (((((4294967168 ^ (arr_15 [i_0] [i_1] [i_3] [i_3])))) ? ((var_5 ? 1610612736 : var_8)) : ((((arr_3 [i_4] [i_5]) | var_0)))));
                            arr_26 [i_3] [i_1] = (((arr_23 [i_0] [i_1] [i_3] [i_4] [i_5]) ? var_10 : var_3));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_31 [i_6] [i_4] [i_1] [i_0] = var_6;
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_4] [i_1]) > (arr_30 [i_1] [i_0])));
                            arr_33 [i_0] [i_1] [16] [i_3] [i_4] [i_6] [i_6] = ((((((arr_19 [i_0]) ? var_4 : (-2147483647 - 1)))) ? ((var_3 >> (var_8 - 2110457911220722647))) : -var_2));
                            arr_34 [i_0] [i_0] [2] [i_0] [i_0] = (var_12 ? (arr_5 [19] [i_1]) : var_2);
                        }
                    }
                    arr_35 [i_1] [i_3] = (((+(min((arr_14 [i_0] [i_0]), (arr_1 [i_1] [i_1]))))));
                    arr_36 [i_0] [i_0] = (var_10 ? ((((((min(var_4, 4095))) <= (max(0, var_8)))))) : ((var_1 - (var_11 | 127))));
                }
                arr_37 [16] = (((((arr_1 [i_0] [i_1]) - var_11)) | (((arr_1 [i_1] [i_0]) ? (-2147483647 - 1) : (arr_1 [i_1] [i_0])))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_52 [i_7] [15] [5] [i_10] = (max(((min((max(4294967285, (arr_15 [i_10] [i_9] [i_8] [i_7]))), (max(var_0, var_11))))), (min(var_6, (arr_39 [i_7])))));
                        arr_53 [i_7] [i_7] = var_11;
                    }
                }
            }
            arr_54 [i_7] = 65535;
        }
        arr_55 [18] = (max((max((((2147483647 || (arr_51 [i_7] [i_7] [i_7])))), ((var_11 ? 18446744073709551615 : var_10)))), ((((-2147483647 - 1) ? 0 : 267911168)))));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_59 [i_11] = 4294967295;
        arr_60 [i_11] = (-(((var_0 ? (arr_44 [i_11]) : var_4))));
    }
    #pragma endscop
}
