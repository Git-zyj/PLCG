/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (max(var_12, ((((~var_9) && var_10)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [11] [i_0]) : (arr_3 [i_0] [i_0])));
            var_13 = var_4;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_3] [i_0] [i_0] = (arr_2 [i_0] [i_3 + 1] [i_3 + 1]);
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] = var_8;
                            var_14 = (-0 != 4294967288);
                            var_15 |= ((var_4 && (arr_8 [i_0])));
                            arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = var_6;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_21 [i_3] [i_6] [i_3 - 1] [i_2] [i_3] = (((4593671619917905920 && 4294967283) ? (~var_7) : var_2));
                        arr_22 [1] [i_6] [i_3] [i_3] [i_2] [i_0] = ((((var_4 && (arr_11 [i_3] [i_3]))) ? (!13) : (arr_2 [11] [i_3] [2])));
                    }
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        arr_26 [i_0] [i_2] [i_3] [i_6] [i_0] = (((32722 > 53142) > (((arr_18 [i_0] [6] [i_3] [i_6] [i_8] [i_8]) ? (arr_0 [i_6]) : var_3))));
                        arr_27 [i_0] [i_3] [i_3 - 1] [i_6] = 16915;
                        var_16 = (max(var_16, (arr_23 [9] [i_2] [i_3] [i_6] [i_3])));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_32 [i_0] |= (((12 / 29) ? ((~(arr_1 [i_0] [i_6]))) : (((((arr_10 [5] [i_0]) && (arr_0 [i_0])))))));
                        var_17 |= ((((var_11 ? var_2 : (arr_0 [i_0])))) && (arr_23 [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_6]));
                        var_18 = ((var_1 >= (((arr_1 [i_3] [2]) ? (arr_7 [i_0]) : (arr_23 [3] [i_0] [i_3 + 1] [i_6] [i_9])))));
                        var_19 = (var_10 && ((var_7 > (arr_18 [i_0] [i_2] [i_3 - 1] [i_6] [i_3 - 1] [i_2]))));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_36 [i_0] [i_3] [i_3] [i_3] = 11;
                        var_20 = var_7;
                    }

                    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, (((~(-12 > 53142))))));
                        arr_39 [i_0] [i_2] [i_3] [i_3] [i_11] = ((var_0 ? (arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_5 [i_3 - 1])));
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        var_22 |= (arr_18 [i_12] [i_12] [i_0] [i_3 - 1] [i_0] [i_0]);
                        var_23 = (max(var_23, (((((var_3 >= (arr_8 [i_0]))) && (arr_24 [i_3] [9] [i_3] [11] [i_0]))))));
                    }
                    var_24 = var_10;
                }
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_25 = -var_6;
                arr_46 [i_0] [8] [i_2] [8] = (var_8 ? (((((var_10 ? 18446744073709551615 : (arr_5 [i_13])))) ? (arr_1 [i_0] [i_2]) : (arr_38 [i_0] [7] [i_13] [4] [i_13]))) : (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
            }
            arr_47 [10] [5] [i_2] = (((((~((8983 << (4294967282 - 4294967280)))))) ? var_11 : (arr_9 [i_2] [i_2] [i_0] [i_0])));
            arr_48 [i_0] = ((((((arr_20 [i_0] [i_0] [i_0] [7] [i_2]) - (arr_34 [i_0] [i_2] [i_2] [1] [11] [i_2])))) ? (((min((arr_29 [i_0] [i_0] [i_0] [i_2]), (arr_28 [i_0] [i_0] [i_0] [3] [i_0]))))) : ((((min(var_5, (arr_37 [i_0])))) ? (min(var_3, var_10)) : ((255 ? 32 : 1))))));
        }
        arr_49 [9] &= (((((1 && -967787139) && (var_6 && var_4))) ? ((var_5 ? ((max(0, (arr_43 [i_0] [7] [i_0] [i_0] [i_0])))) : ((var_0 ? (arr_10 [i_0] [i_0]) : (arr_41 [i_0] [i_0]))))) : (((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) != (23557 - var_0)))))));
    }
    var_26 = var_11;
    var_27 *= (max(((min(var_11, 1))), var_8));
    var_28 = (max(var_28, ((((((4593671619917905920 > var_0) ? -2625803872685256731 : 4294967272))) && -7206822021061876562))));
    #pragma endscop
}
