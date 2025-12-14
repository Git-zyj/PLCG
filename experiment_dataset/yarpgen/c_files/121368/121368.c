/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((max(((3495 ? var_0 : 12639)), -1787181664)))));
                var_13 = 1811484818;
                var_14 = (max(var_14, ((max((!var_10), (var_11 && var_6))))));
                arr_5 [i_0] [i_0] [i_1 - 2] = ((~(min(((var_5 ? -1787181664 : -4433118694990984309)), ((max(1594176143, var_7)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 += var_0;
                            arr_10 [i_0 - 1] [i_1] [i_2] [i_3] = -7103921742997756136;
                            var_16 = (min(var_16, (((!((((var_6 | var_9) ^ ((max(1456475339, var_2)))))))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                {
                    var_17 = (max(var_17, var_7));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_24 [i_6] [i_6] = (max((min(var_10, var_10)), var_8));
                                arr_25 [i_4] [i_5] [i_6 - 1] [i_6] [9] [9] = (((((((((var_11 ? var_2 : var_10))) && ((min(var_6, var_4))))))) != (var_6 ^ var_11)));
                                arr_26 [i_6] = (((((!224) ? -1787181685 : var_4)) / (max(((min(var_5, var_8))), ((var_7 ? var_1 : var_2))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    arr_32 [i_4] [0] [i_9 + 3] [i_10] = ((((((229 ? var_3 : var_1)))) * ((((min(var_3, var_8))) - -21023))));
                    arr_33 [4] [i_9 - 1] [i_10] [i_9] = 255;
                }
            }
        }

        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            var_18 = (max(var_18, ((((((((min(14655743137329168536, var_8))) ? var_1 : (var_8 ^ var_7)))) ? (min(var_3, var_6)) : ((max(-1594176143, var_11))))))));
            arr_38 [i_4] [i_11] = (((((var_2 * 17) / ((max(var_4, -21850))))) + 18));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((!(var_1 + 80))))));
                            arr_47 [i_4] [i_11 - 2] = ((!((max(var_1, 30520)))));
                            var_20 = ((-var_11 ? (var_7 + 24658) : ((((!(~var_2)))))));
                            arr_48 [i_4] [5] = (((max(-39, (-17827 / 210))) - (!var_3)));
                            arr_49 [i_4] [i_13] [i_12] [i_11] [i_14] [i_4] = 19;
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            arr_52 [i_4] [i_15] = -17;
            var_21 = var_0;
            arr_53 [i_4] [i_4] [9] = (((var_4 / 3850125608) <= ((((((max(-1594176138, var_0)) + 2147483647)) >> (((var_1 - var_6) - 17731848502502258471)))))));
        }
        arr_54 [i_4] [i_4] = ((~(min(33995, -1787181665))));
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 17;i_18 += 1)
            {
                {
                    var_22 = (min(var_22, ((((max(var_3, var_11)))))));
                    var_23 = (var_0 <= var_3);
                }
            }
        }
    }
    var_24 = ((-(!var_6)));
    var_25 = (-8639257877618189895 - var_0);
    #pragma endscop
}
