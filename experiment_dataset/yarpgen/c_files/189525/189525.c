/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((693829858 ? (((max(var_0, var_2)))) : ((var_3 ? var_9 : var_0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_11 = (min(var_11, (((1 ? (arr_1 [i_1 + 1]) : var_7)))));
            arr_5 [i_0] [i_0] [i_0] = (((((var_4 ? 824411931 : var_6))) ? (arr_0 [i_1 + 2]) : ((var_7 ? 1423898126 : 824411931))));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_18 [i_3] [i_3] [i_2] [i_3] = 824411926;
                            var_12 = (max(var_12, (((127 ? 4294705152 : 0)))));
                            arr_19 [i_0] [i_2] [i_3] [12] [i_0] [2] [i_3] |= (824411931 / 536870911);
                        }
                    }
                }
            }
            arr_20 [i_0] [i_0] [i_2] = (((var_6 && var_8) ? (arr_8 [i_2]) : ((-1 ? -536870915 : -824411926))));
            var_13 = (min(var_13, 536870911));
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_24 [1] = 16;
            var_14 = ((0 != (arr_13 [i_6] [i_6 - 1] [i_6 + 2] [11])));
            arr_25 [i_0] [i_0] [i_0] = (((824411926 ? 48924 : 25)));
        }
        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_15 = (min(var_15, ((~(var_9 <= 1)))));
                            var_16 = (((29600 ? 29262 : var_9)) * 16);
                        }
                        for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, (((!(1 * 65530))))));
                            var_18 |= ((1423898126 ? 1 : (arr_30 [i_0] [i_8] [i_11])));
                        }
                        for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, ((((((-(arr_27 [i_0] [i_7] [i_0])))) ? -824411922 : ((var_5 ? (arr_37 [i_8]) : (arr_14 [i_0] [i_7] [i_8] [i_9] [i_12]))))))));
                            arr_41 [i_0] [i_0] [3] [i_9] = ((~(arr_26 [i_7 - 1] [i_12 + 1])));
                            var_20 += (((var_0 == var_7) ? -var_9 : 54));
                            arr_42 [i_0] [i_0] [i_0] [i_8] [i_0] |= var_2;
                        }
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_21 |= 5;
                            var_22 = var_3;
                            var_23 -= (((!3) + 65531));
                            arr_45 [i_0] [i_9] [i_9] [i_9] [i_9] [i_9] = (((((var_4 ? 108 : var_4))) ? (((-2147483647 - 1) ? var_7 : (-2147483647 - 1))) : 3280719523));
                            arr_46 [i_9] [i_9] [i_8] [i_7] [i_9] = (((arr_30 [i_7 + 3] [i_7 + 2] [i_7 + 3]) ? 255 : ((-64 ? var_9 : (arr_0 [i_8])))));
                        }
                        var_24 = (-1686288966 ? (((arr_37 [i_9]) ? (arr_35 [i_0] [i_9] [i_7] [i_7] [i_7] [i_7]) : var_0)) : ((var_8 ? var_9 : var_0)));
                        var_25 = ((0 > (arr_3 [i_7] [i_7 + 1])));
                    }
                }
            }
            var_26 &= (arr_23 [i_7 + 1] [i_7 + 2]);
            arr_47 [i_0] [i_7] |= ((var_6 ? (arr_26 [i_0] [i_7 + 2]) : 0));
        }
        var_27 = (arr_15 [2] [i_0] [i_0] [i_0]);

        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            arr_50 [i_0] [i_0] [i_0] = ((119 ? (((-824411907 ? (arr_8 [i_0]) : -1423898110))) : var_7));
            var_28 += ((!(((2209352275 ? 2085615020 : 0)))));
            arr_51 [i_0] [i_14] = (((arr_26 [i_0] [i_14]) && (arr_26 [i_0] [i_14])));
            var_29 = (max(var_29, (((!(70 > var_4))))));
            /* LoopNest 3 */
            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 9;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            arr_58 [i_17] [i_16] [i_15] [i_15] [i_0] [i_0] = var_2;
                            var_30 = 0;
                            var_31 = (((arr_57 [i_16 + 4] [i_14] [i_16 + 4] [i_15 + 2] [i_16 + 4]) << (((arr_16 [i_0] [i_16 + 2] [i_15 + 1]) - 37))));
                            var_32 = ((arr_11 [i_0] [i_14] [i_15]) ? (arr_11 [i_15] [i_14] [i_15]) : (arr_11 [i_16] [i_16 - 1] [i_15]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
