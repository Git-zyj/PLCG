/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 += 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (!-38)));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_14 = (-125 % 11);
                                var_15 += (1 || 848901216);
                                var_16 = (max(var_16, (~64689)));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                            {
                                var_17 = ((~(-127 - 1)));
                                var_18 *= ((~(~-10205442673539579415)));
                                var_19 = (~121);
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                            {
                                arr_19 [i_1] [i_1] [i_3] = (~-504993907);
                                var_20 = 12308831631987867089;
                                var_21 = 2341504273;
                            }
                            var_22 *= (((!1735660042822648553) > -1776344308));
                            var_23 ^= (!-32);
                        }
                    }
                }
            }
        }
    }
    var_24 = 1244968868;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_25 ^= ((~(1 & 1953463022)));
                            arr_30 [i_8] [i_8] [i_9] [i_10] = ((-((1 >> (-119 + 146)))));
                        }
                    }
                }
                arr_31 [i_8] = ((!(!1)));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_26 = (((~-25044) * (!-1)));
                                arr_41 [i_13] [i_12] [i_11] [i_11] [i_11] [i_7] [i_7] = ((+((5954381585225489129 << (((1835946664 - 48175) - 1835898450))))));
                            }
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    var_27 = (~1);

                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_28 = (~167);

                        for (int i_16 = 1; i_16 < 18;i_16 += 1)
                        {
                            var_29 = ((~(((~2545969776) << (((~1) + 21))))));
                            var_30 = 161;
                        }
                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            var_31 = (min(var_31, (~14228062255255833356)));
                            var_32 += 24676;
                            var_33 = (10705 || (2518622988 == 770149821470491640));
                        }
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {

                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            var_34 = ((~(!63)));
                            var_35 = (-64 ^ ((~(-127 - 1))));
                            var_36 += 121;
                            arr_58 [i_18] [i_18] [i_7] [i_18] = (((!2159883694) == -1953463023));
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 19;i_20 += 1)
                        {
                            var_37 = (~60657);
                            arr_61 [i_7] [i_7] [i_18] [i_18] = (-2147483647 - 1);
                        }
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 19;i_21 += 1)
                        {
                            var_38 += 2341504273;
                            arr_65 [i_18] [i_18] [i_14] [i_7] [i_18] = (2147483647 + 2518622988);
                        }
                        var_39 = (min(var_39, 770149821470491640));
                    }
                    /* vectorizable */
                    for (int i_22 = 3; i_22 < 17;i_22 += 1) /* same iter space */
                    {
                        var_40 |= ((~((((-2147483647 - 1) == 2518622988)))));
                        var_41 = (min(var_41, (-8322 | 12217789146720137883)));
                    }
                    /* vectorizable */
                    for (int i_23 = 3; i_23 < 17;i_23 += 1) /* same iter space */
                    {
                        var_42 = (36921 >= 12217789146720137893);
                        var_43 = (29735 & 1);
                        var_44 = 55094;
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 19;i_24 += 1)
                    {
                        for (int i_25 = 1; i_25 < 16;i_25 += 1)
                        {
                            {
                                var_45 ^= -117;
                                var_46 = (min(var_46, (~1)));
                                var_47 = (min(var_47, -2147483646));
                                var_48 = (min(var_48, (!165)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 3; i_26 < 18;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 19;i_27 += 1)
                    {
                        {
                            var_49 = (~0);
                            var_50 += (!-1);
                            var_51 = (((~1790937114) ^ -47));
                            var_52 = ((0 << (((~1) + 3))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
