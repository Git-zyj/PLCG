/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = ((((var_4 / ((105 ? var_7 : var_1)))) / -19));
    var_15 = var_3;
    var_16 = min(var_11, var_11);

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (max(((max((arr_2 [i_0 + 1] [i_0]), (arr_2 [i_0 - 3] [i_0])))), (((arr_2 [i_0 + 1] [i_0]) - var_1))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = ((var_11 ? ((max(-9, (arr_8 [i_0] [i_0 + 1])))) : ((min(var_1, (arr_8 [i_0] [i_0 + 1]))))));
            var_18 -= var_9;
            var_19 = arr_3 [i_1];
        }
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = arr_8 [i_2 + 1] [i_2 - 1];

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_22 [i_2] [i_3] [8] [6] [i_6] = var_7;
                            var_20 = var_0;
                        }
                    }
                }
            }
            var_21 = (((arr_10 [i_2 + 1] [i_2 - 1]) ? var_3 : (arr_10 [i_2 - 1] [i_2 - 1])));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_22 = arr_19 [i_2] [i_2] [i_7] [i_7];

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] = 115;
                            var_23 = (((arr_13 [i_8] [14] [i_10]) - (arr_10 [i_8] [i_7])));
                            var_24 = ((var_8 ? var_3 : (((arr_17 [i_2]) + (arr_25 [i_7] [i_2])))));
                            arr_33 [i_10] [0] [i_7] [i_9] [10] &= (115 - 57);
                            var_25 = (arr_25 [i_7] [i_2]);
                        }
                    }
                }

                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    var_26 ^= var_6;

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_38 [i_2] [i_2] [i_2] [i_11] [i_12] = var_4;
                        var_27 = var_0;
                    }
                    var_28 = arr_14 [i_11 - 2] [8];
                    var_29 = (103 && var_7);
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_30 = 89;
                    arr_41 [i_2] [i_7] [i_7] [i_2] [i_13] [i_13] = arr_13 [i_2] [i_13] [i_2 + 2];
                }
                /* LoopNest 2 */
                for (int i_14 = 4; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_31 = arr_23 [i_2] [i_2];
                            arr_47 [i_14] [i_2] = (((((-127 - 1) * (arr_7 [i_2] [i_14] [i_15]))) + (arr_44 [i_2 + 1] [i_14 - 2] [i_2 + 1] [i_15])));
                        }
                    }
                }
            }
            arr_48 [i_2] = arr_43 [i_7] [14] [i_2 + 3] [i_2 + 3];
            arr_49 [i_2] = (arr_30 [i_2] [i_7] [i_7] [i_7] [i_2 + 1] [i_7] [i_2 - 1]);
        }
        for (int i_16 = 1; i_16 < 14;i_16 += 1)
        {
            var_32 += var_4;
            var_33 = arr_17 [i_2];
            arr_52 [i_2] [i_2] [i_2] = ((-122 ? (127 + 43) : -58));
            arr_53 [13] [5] [i_2] = arr_17 [i_2];
        }
        var_34 = (((arr_30 [i_2] [i_2] [3] [i_2] [i_2 - 1] [i_2] [i_2 + 2]) ? (arr_8 [i_2 + 2] [i_2 + 3]) : var_1));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 15;i_18 += 1)
            {
                for (int i_19 = 3; i_19 < 15;i_19 += 1)
                {
                    {
                        arr_63 [i_19] [i_2] [i_2] [i_2] = (var_2 & var_3);
                        var_35 = ((126 - (arr_3 [i_2])));
                        arr_64 [7] [i_17] [i_2] = ((86 ? 93 : -4));
                        arr_65 [i_2] [i_19] [i_2] [i_19] [i_2] = -77;
                        var_36 = var_10;
                    }
                }
            }
        }

        for (int i_20 = 2; i_20 < 15;i_20 += 1)
        {
            var_37 ^= (((arr_25 [i_2] [6]) / (arr_57 [i_2])));
            var_38 = -118;
            var_39 -= ((var_4 ? -13 : (arr_43 [i_2] [i_2] [3] [i_20 + 1])));
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 17;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 15;i_23 += 1)
                    {
                        {
                            var_40 = arr_16 [i_2] [i_2];
                            arr_78 [i_2] [14] [i_21] [i_22 + 2] [i_2] [i_21] = (((((var_12 * (arr_73 [i_2 + 2] [i_2 + 2] [i_21] [i_21] [i_21] [i_2 + 2])))) ? var_3 : var_11));
                        }
                    }
                }
            }
            arr_79 [i_2] [i_20] = ((-80 ? 5 : 25));
        }
    }
    for (int i_24 = 1; i_24 < 14;i_24 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_25 = 2; i_25 < 16;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 17;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 16;i_27 += 1)
                {
                    {
                        arr_89 [13] [13] [i_24] [16] [16] = var_2;
                        arr_90 [i_24 - 1] [i_24] [i_24 - 1] [i_27] [i_24 + 2] = (min(((min((arr_25 [i_24 + 1] [i_24]), 10))), (((arr_88 [i_24] [i_24 + 1] [i_24 + 1] [i_26] [i_24 + 1] [i_27 - 1]) * -47))));
                        var_41 += (max((arr_45 [i_25] [i_25] [6] [8]), 46));

                        for (int i_28 = 0; i_28 < 17;i_28 += 1)
                        {
                            arr_95 [i_28] [i_27] [i_24] [i_24] [i_24 + 2] [i_24 + 2] = (((var_5 - var_6) + (arr_82 [i_25 + 1])));
                            arr_96 [i_24] [i_24] [i_24] [i_27] [i_24] = (min(((max((min(-116, (arr_57 [1]))), (max((arr_34 [i_24] [i_25] [i_26] [i_27] [i_26]), var_3))))), ((25 & (-127 - 1)))));
                        }
                        for (int i_29 = 2; i_29 < 16;i_29 += 1)
                        {
                            arr_99 [i_24] [i_26] [i_24] [3] [i_25 + 1] = (max(var_8, ((96 - (arr_57 [i_27 + 1])))));
                            arr_100 [i_24] [13] [13] [i_24] [i_29 - 1] = -6;
                            arr_101 [i_24] = max(var_1, (min(var_12, 107)));
                        }
                        for (int i_30 = 2; i_30 < 15;i_30 += 1)
                        {
                            arr_104 [i_24] = var_3;
                            arr_105 [i_26] [i_26] [i_26] [i_26] [i_24] = 75;
                        }
                        for (int i_31 = 3; i_31 < 13;i_31 += 1)
                        {
                            arr_108 [i_24] = min((((-69 && (arr_44 [i_24 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1])))), (max(-106, (arr_44 [i_24 + 1] [i_25 - 2] [i_25] [i_25 + 1]))));
                            arr_109 [i_24] [i_25] [i_24] [i_27] = (((((arr_87 [i_27 - 1]) && 92)) || (arr_70 [i_24] [i_24])));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_32 = 0; i_32 < 17;i_32 += 1)
        {
            for (int i_33 = 2; i_33 < 14;i_33 += 1)
            {
                {
                    var_42 = (max((-75 + 3), ((max((arr_98 [i_24] [i_24] [i_24] [i_24 - 1] [14]), -100)))));
                    /* LoopNest 2 */
                    for (int i_34 = 1; i_34 < 15;i_34 += 1)
                    {
                        for (int i_35 = 3; i_35 < 15;i_35 += 1)
                        {
                            {
                                var_43 = 124;
                                var_44 = (((((arr_86 [15] [i_32] [i_33] [i_24]) + ((max(var_10, var_7))))) - ((max(var_1, 127)))));
                                var_45 = ((var_6 - (arr_13 [i_32] [i_33 + 3] [i_35 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
