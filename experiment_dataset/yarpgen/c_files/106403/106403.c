/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((max(-18398, 103))) && ((max(var_6, var_2)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_15 = ((-(max((max(var_5, var_7)), ((max(var_7, var_13)))))));
                            arr_10 [i_1] = (max((~var_5), (((var_12 ? var_7 : var_12)))));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] = var_13;
                        }
                    }
                }
                var_16 = ((-((~((var_2 ? var_8 : var_8))))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 4; i_4 < 8;i_4 += 1)
    {
        var_17 ^= ((74 ? (-2147483647 - 1) : 2048));
        arr_16 [i_4] = ((var_3 ? var_13 : var_8));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        arr_21 [i_5] = var_3;
        arr_22 [i_5] = ((((max(-1, -112))) ? (((480 ? -10281 : var_2))) : (max(2180332746, (((-26 ? var_6 : 19)))))));
        var_18 -= ((!(~-var_3)));
        arr_23 [i_5] = (((((var_4 ? var_8 : var_10))) ? ((var_9 ? var_11 : var_8)) : var_10));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_19 = var_13;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_36 [i_5] [i_5] [i_7] = ((((min((!236), var_14))) || var_6));
                                var_20 ^= ((~(((!(var_3 || var_0))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_21 = (max(((2147483640 ? -127 : 15256760652397435677)), ((((var_8 & var_0) ? (((var_5 ? var_13 : var_1))) : (max(var_9, var_5)))))));
                                arr_44 [i_7] [i_6] [i_6] [i_6] [i_6] = (((-2147483647 - 1) ? 223 : 33));
                                var_22 -= (((max(((min(var_12, var_2))), (~var_14))) - ((-var_2 * ((min(var_12, var_2)))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        arr_48 [i_7] [9] [i_6] [i_7] = var_6;
                        arr_49 [i_5] [i_6] [i_6] [i_7] = (((((var_1 ? var_1 : var_9))) ? ((var_7 ? var_10 : var_0)) : (((-127 - 1) * 1))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        arr_52 [i_7] [i_7] = var_13;

                        for (int i_14 = 1; i_14 < 16;i_14 += 1)
                        {
                            var_23 = (min(var_23, (((~(!var_10))))));
                            var_24 = var_8;
                            arr_55 [i_5] [i_7] = ((-11008 ? 0 : 1));
                        }
                        var_25 = var_8;

                        for (int i_15 = 3; i_15 < 17;i_15 += 1)
                        {
                            var_26 = (-117 == 31);
                            arr_59 [i_5] [1] [i_7] [8] [i_15] |= -var_3;
                            arr_60 [i_5] [i_7] [i_7] [i_13] [i_15] = var_3;
                            arr_61 [i_5] [2] [i_7] [i_13] [i_15] &= (!var_1);
                            var_27 += (((!var_6) ? var_0 : var_13));
                        }
                    }
                    for (int i_16 = 2; i_16 < 17;i_16 += 1)
                    {
                        arr_64 [i_5 - 1] [i_7] [i_7] [i_16 + 1] = ((((max(((max(var_1, var_6))), (max(var_3, var_5))))) ? (min(var_9, var_13)) : (((!(!var_6))))));
                        arr_65 [i_5] [i_6] [i_7] [i_7] = (((var_7 / var_13) ? ((-((var_13 ? var_13 : var_11)))) : (((var_14 ? -var_10 : var_0)))));
                        arr_66 [i_5] [i_5] [i_7] [i_16] = (max(((var_6 ? var_3 : (min(var_4, var_11)))), (((((min(var_9, var_6))) && ((max(var_14, var_14))))))));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            var_28 = ((2147483641 ? ((0 ? -512 : 127)) : var_9));
                            var_29 |= (~var_11);
                            var_30 = var_0;
                            var_31 = (min(var_31, ((min((((((var_12 ? var_12 : var_2))) ? ((var_13 ? var_2 : var_1)) : ((var_6 ? var_14 : var_9)))), (((((max(var_9, var_2))) != -var_8))))))));
                            var_32 = ((!((((!var_8) ? (min(var_5, var_2)) : ((var_14 ? var_13 : var_11)))))));
                        }
                        var_33 = ((var_13 ? ((max(var_6, var_12))) : (max((max(var_13, var_12)), ((min(var_3, var_1)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
