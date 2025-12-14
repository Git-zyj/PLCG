/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(min(var_2, var_4))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 &= ((max((max(var_0, var_5), (((~(-2147483647 - 1))))))));
        var_12 &= (((min(((max(var_3, var_9))), 23841)) / (var_4 != -1817876675)));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_13 = ((-(min((min(var_5, var_5)), var_8))));
        var_14 = var_4;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_15 &= ((((((min(var_0, var_6))) ? (var_3 & var_0) : ((var_2 ? var_5 : -484705539)))) ^ ((1817876679 ? var_6 : var_2))));
        var_16 &= ((var_5 & ((((max(var_7, 61))) ? var_8 : var_0))));
        var_17 ^= -var_9;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_13 [4] [i_2] [i_2] [i_2] &= (min(((var_0 ? 1 : var_3)), (min(var_1, ((var_3 ? 25721 : 292790276))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 ^= var_8;
                                var_19 = ((max((0 | var_9), ((var_9 ? var_7 : -4)))) >= var_1);
                                var_20 ^= ((((-(!var_1))) != ((((var_0 == var_7) > (~var_2))))));
                                var_21 &= ((!(var_5 || 0)));
                                var_22 ^= (~(((~var_3) ? var_4 : var_8)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_23 = ((((((var_9 ? var_6 : 31862))) & (11915462653748679134 ^ var_4))) >> var_8);
                                arr_28 [i_2] [i_3] [i_3] = (max((!var_2), ((var_2 ? ((min(var_0, var_3))) : var_8))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_24 &= 1;
            arr_31 [1] [i_2] [8] = (min(((var_9 ? var_0 : var_6)), -1817876680));
            var_25 = max((max(var_2, var_3)), var_1);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_26 = ((-((var_5 ? -28 : 4961264621150961327))));
                            var_27 = (var_6 ? ((((max(var_1, 1)) && (!var_5)))) : (((!(!var_9)))));
                            var_28 = ((!(var_9 | 2842194855)));
                            var_29 = (min(var_29, -32764));
                        }
                    }
                }
            }
            var_30 = ((((((var_9 != (var_6 - var_7))))) % (max(var_5, (((var_3 ? var_6 : var_3)))))));
            var_31 = ((max(var_0, var_6)));
            var_32 = (min(var_32, ((((!var_3) < -1076263205)))));
        }
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
    {
        var_33 = max((min(var_9, 1)), var_6);
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                {
                    var_34 = var_4;
                    var_35 = (((min(var_0, var_6))) ? (((~var_1) - (~var_9))) : ((var_8 % (var_8 - 9608))));
                    var_36 = (max(var_36, (!var_0)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 14;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            {
                var_37 = ((((max(var_7, 113))) > var_0));
                arr_55 [5] [i_17] [12] &= var_5;
            }
        }
    }
    #pragma endscop
}
