/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((min(1765651279, var_5)) >> ((((var_17 ? 4211739063 : ((61687 ? 240298837 : var_12)))) - 4211739038))));
    var_19 = (max(var_19, var_8));
    var_20 = (0 ? 3848 : 1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, (((((!3383257244) || ((((arr_7 [i_0] [i_1] [i_2] [i_3]) ? var_16 : 4211739063)))))))));
                        var_22 = (max(var_22, (arr_12 [i_0] [1] [i_0] [i_0] [i_0])));
                        var_23 = (58 | 4211739063);
                        var_24 = (min(((((min(var_4, (arr_6 [i_2] [i_2 - 1] [i_2] [i_2 + 2])))) ? (arr_9 [i_0] [9] [9] [i_3 + 1]) : var_4)), ((-(arr_8 [i_2 - 1])))));
                    }
                }
            }
        }
        var_25 = 18446744073709551614;
        var_26 = (((arr_4 [i_0] [i_0] [i_0]) >> (((((((199 ? (arr_1 [i_0]) : (arr_3 [i_0])))) ? (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? 38572799 : var_5)) : -var_0)) - 38572782))));
        var_27 = (max(var_27, 61687));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_28 |= (arr_15 [i_4]);
                                var_29 = (min(var_29, (((61687 ? 64343 : 5356)))));
                            }
                        }
                    }
                    var_30 -= (((~-17479) && 117));
                }
            }
        }

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_31 = var_4;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_32 = (~var_2);
                        var_33 = (min(var_33, 18446744073709551614));
                        var_34 = (max(var_34, var_7));
                    }
                }
            }
            arr_35 [i_4] [i_9] |= 83228235;
            var_35 = (min(var_35, (((0 <= (~224))))));
        }
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        arr_48 [i_12] [i_12] [i_15] = ((((((238 >> (var_10 - 30405))))) > (arr_44 [i_14] [i_14] [i_14 - 1])));
                        var_36 = (((1 | 4551) ? (!17924) : 235));
                    }
                }
            }
        }
        var_37 &= 12;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 4; i_19 < 19;i_19 += 1)
                        {
                            {
                                arr_62 [i_18] [i_16] [i_17] [i_12] [i_17] = (!3358204368);
                                var_38 = (max(var_38, 21));
                            }
                        }
                    }
                    arr_63 [i_12] = (arr_49 [i_12] [i_12]);
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            {
                                arr_71 [i_16] [i_20] [2] = ((((var_7 ? (-1648 ^ 152) : (arr_59 [i_20]))) + (((((min(15077881589627470990, (arr_45 [i_12] [i_16] [i_17])))) ? var_16 : var_10)))));
                                var_39 *= ((!(arr_47 [i_12] [i_16] [i_12] [i_20])));
                                var_40 *= arr_60 [1];
                                arr_72 [i_12] [i_16] [i_17] [i_17] [i_20] = (((!0) >> (((arr_51 [i_12]) - 6888380079711686396))));
                                arr_73 [9] [6] [i_20] [i_16] = (arr_38 [i_21]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
