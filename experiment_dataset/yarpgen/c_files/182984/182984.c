/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_8;
    var_13 = 4095;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (2567742697 > -8716);
                    var_14 = ((~((-(((arr_4 [i_1] [i_0]) ? (arr_3 [i_1]) : (arr_0 [i_0])))))));

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3 + 1] [i_0] = ((~(arr_8 [i_1] [i_1] [i_1] [i_1])));
                        arr_12 [i_2] [20] &= ((1727224598 ? ((min(var_9, 3855957105))) : ((((((var_11 ? var_9 : var_1))) ? (~var_4) : var_8)))));
                    }
                }
            }
        }
        var_15 = (614749797 > 1);
        arr_13 [i_0] = ((((((18446744073709547526 ? (arr_4 [i_0] [i_0]) : 549218942976)) > (((var_2 ? var_6 : 231))))) ? (--19047) : -7790389035637309074));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_16 = min(((max((arr_8 [i_0] [i_0] [i_4] [i_5]), ((59 + (arr_19 [i_0] [i_4] [i_5] [i_5])))))), ((~(arr_4 [i_5] [i_0]))));
                    arr_20 [i_0] [i_4] [i_0] = (14236 ? -1048094721 : 1419322935);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_7] [i_6] = (arr_0 [i_6]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_17 &= (((var_9 > (arr_4 [i_9] [i_8]))));
                                var_18 -= ((~(((arr_10 [i_7] [i_8] [i_10]) + var_8))));
                                arr_36 [i_6] [i_6] [i_8] [i_6] [i_10] = ((((~(arr_34 [i_10] [i_6] [i_8] [i_6] [i_6]))) > (((-(arr_1 [i_6 + 1] [i_8]))))));
                                var_19 = (max(var_19, var_4));
                                arr_37 [i_9] &= (614749797 ? (arr_17 [i_7] [i_9] [i_10]) : var_5);
                            }
                        }
                    }
                }
            }
        }
        var_20 = (((arr_32 [i_6 + 1] [i_6 + 2] [0] [i_6 + 1] [i_6] [i_6] [i_6]) ? -60 : (arr_32 [i_6 - 1] [i_6 + 1] [1] [i_6 + 1] [i_6] [i_6 - 1] [i_6 + 3])));

        for (int i_11 = 4; i_11 < 12;i_11 += 1) /* same iter space */
        {
            arr_42 [i_6] = (13148873540185555333 > 2135930758);
            arr_43 [i_6] [i_6] = (((32111762 > 12624) > (arr_16 [i_6 + 3] [i_11] [16])));
        }
        for (int i_12 = 4; i_12 < 12;i_12 += 1) /* same iter space */
        {
            var_21 = (max(var_21, (arr_30 [i_6] [i_6 - 1] [4] [11] [i_12] [4])));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_22 = (arr_10 [i_6] [i_14 - 1] [i_14]);
                            arr_56 [i_13] [i_12] [i_13] [i_12] [i_12] [i_14] &= ((((((arr_15 [i_6 + 2]) ? var_10 : var_2))) ? 12624 : ((var_8 ? var_5 : (arr_55 [i_6] [i_12] [i_13] [5])))));
                            var_23 = (413987404 > 18446744073709547520);
                            var_24 = 115;
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_67 [i_6] [i_6] = (((((var_11 ? var_0 : (arr_27 [i_6] [i_16] [i_17])))) ? ((var_0 ? -549218942976 : var_8)) : (((((arr_19 [i_6] [i_16] [i_18] [i_19]) > -15195))))));
                            arr_68 [i_19] [i_6] [i_17] [i_6] [i_6 + 1] = 2373708589322790464;
                            arr_69 [i_6 - 1] [i_6] [i_17] [i_18] [i_19] = (((arr_66 [i_6] [i_6] [i_6 + 2] [i_6] [i_6 - 1] [i_6]) > (arr_51 [i_6] [i_6 + 1] [i_6] [i_6] [i_6] [i_19])));
                            arr_70 [i_18] [i_16] &= var_6;
                        }
                    }
                }
            }
            arr_71 [i_6] = -4132104625;
            var_25 = ((-((var_6 ? (arr_51 [i_6] [1] [i_6] [i_6] [i_6] [i_6]) : (arr_60 [i_6] [i_6] [i_16] [i_16])))));
        }
    }
    #pragma endscop
}
