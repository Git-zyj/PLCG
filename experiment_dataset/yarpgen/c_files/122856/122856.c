/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((max((min(var_9, var_1)), (min(var_9, var_16))))), var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = ((var_17 ? ((var_17 ? (var_7 && var_6) : var_1)) : (((((var_3 ? var_8 : var_15)))))));

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_20 = ((-((var_7 ? var_17 : var_17))));
                        var_21 = (max(var_21, ((min(((var_2 ? ((max(var_0, var_3))) : var_1)), (var_16 == var_6))))));
                        var_22 = var_5;
                        arr_8 [i_0] [i_2] [i_0] [i_3] [i_0] = var_13;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_23 |= var_12;
                        var_24 = (min(var_24, var_6));
                        arr_12 [i_0] [i_0] = ((var_13 || (var_15 % var_10)));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] = ((var_5 ? -87 : var_11));
                                var_25 = (min((-4634317627794147862 != var_15), (min((~var_9), var_13))));
                                arr_19 [i_0] [i_1] [i_0] = (((var_15 >= var_14) || (max((var_7 != var_17), (var_8 == var_9)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_26 += ((-var_4 + ((var_9 ? var_10 : ((max(var_0, var_14)))))));
                                arr_24 [2] [i_7] [i_0] [i_0] [i_0] = (max((((var_6 * (var_1 > var_12)))), var_17));
                                var_27 = (min((((((var_1 ? var_2 : var_4))) && (((var_14 ? var_6 : var_10))))), (((!var_9) || (!var_14)))));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (min(var_15, 9648213995883630561));
        arr_25 [i_0] [16] &= (min((~var_11), ((max(var_15, var_17)))));
    }
    for (int i_9 = 3; i_9 < 22;i_9 += 1) /* same iter space */
    {
        arr_29 [20] &= var_17;
        var_29 = (min(var_29, var_2));

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_30 = (max(var_10, var_10));
            var_31 = (max(var_31, (!var_4)));
            arr_32 [i_9] [i_9] = (var_7 == var_16);
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 22;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 22;i_14 += 1)
                        {
                            {
                                arr_43 [i_9] [i_14] = var_13;
                                arr_44 [i_11] [i_9 - 2] [i_9 + 1] [i_9 - 3] [i_9] |= var_9;
                                arr_45 [i_13] [i_13] [i_11] [20] [20] &= (((max(var_11, ((max(var_14, var_4)))))) && ((!((min(var_4, var_7))))));
                            }
                        }
                    }
                    var_32 = var_7;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    {
                        arr_55 [5] [i_9] [i_9] [5] = var_15;
                        var_33 ^= ((var_7 ? var_6 : var_8));
                    }
                }
            }
        }
    }
    for (int i_18 = 3; i_18 < 22;i_18 += 1) /* same iter space */
    {
        var_34 = var_15;
        arr_58 [i_18] = var_6;
        var_35 = ((((max(var_8, var_15))) ? (~-var_5) : -var_15));
        arr_59 [i_18] = var_3;
        var_36 = (~var_1);
    }
    var_37 = ((var_11 || (((min(var_13, var_8)) >= (~var_16)))));
    #pragma endscop
}
