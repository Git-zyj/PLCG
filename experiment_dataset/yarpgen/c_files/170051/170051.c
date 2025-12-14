/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            var_15 += arr_5 [i_3];
                            var_16 ^= -4709827282307657184;
                        }
                        for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_17 *= var_2;
                            var_18 -= ((!(arr_10 [i_0 - 3] [i_0 - 3] [5] [i_0] [i_0])));
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_19 -= (arr_13 [i_0 - 1]);
                            var_20 = (min(var_20, 15817));
                            var_21 = (~-611353081317876234);
                            var_22 |= -16384;
                        }

                        for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_23 -= ((-611353081317876226 ? (~-1) : (((!(arr_19 [i_7 + 1] [i_2] [1] [i_0]))))));
                            var_24 = (((arr_3 [i_0 - 3]) ? 611353081317876243 : (arr_3 [i_0 - 1])));
                        }
                        for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_25 -= -611353081317876234;
                            var_26 |= ((-(!-1)));
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_8] &= (!45665);
                            var_27 = (arr_20 [i_0 - 1] [i_1] [i_2] [i_3] [i_1] [i_1] [i_3]);
                        }
                        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_28 = (min(var_28, (((((-1 + 2147483647) >> (-611353081317876234 + 611353081317876249)))))));
                            var_29 *= (arr_22 [i_3] [i_9 + 2]);
                            var_30 = (min(var_30, (((!(~var_11))))));
                            var_31 *= ((var_2 ? ((45668 ? 1 : 17053962375003846726)) : 611353081317876257));
                        }
                        var_32 *= (((arr_18 [i_0] [i_0 + 1] [i_0 - 3] [i_0] [i_1]) * (arr_7 [i_0] [i_1] [i_2] [i_3] [i_3])));
                        var_33 = -1;
                    }
                }
            }
            var_34 |= ((arr_26 [i_0] [i_1] [i_1] [i_1] [i_0]) ? (arr_3 [i_0 - 1]) : ((((!(arr_25 [i_0] [i_1] [i_0] [i_1] [4] [i_0] [i_1]))))));

            for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_35 -= (!-3781);
                var_36 = 31483;

                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    var_37 = (min(var_37, 2));
                    var_38 = (arr_11 [i_0 - 2] [i_1]);
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_38 [i_10] [i_1] [i_10 - 1] [i_12] = 2;
                    arr_39 [i_0 - 1] [i_12] &= 8829542843687464494;
                }

                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_39 ^= (arr_30 [i_0] [i_1] [i_10] [9]);
                    arr_44 [i_0 + 1] [i_0] [i_13] [i_0 - 1] [i_0] |= (arr_15 [4] [i_1] [i_1] [i_10 - 1] [i_10 - 1]);
                    var_40 += 116;
                }
                for (int i_14 = 2; i_14 < 16;i_14 += 1)
                {
                    var_41 = (max(var_41, (!-15)));
                    var_42 += var_7;
                    var_43 = arr_19 [i_0] [i_1] [i_10] [i_14];
                }
            }
            for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
            {
                var_44 = (max(var_44, (arr_47 [i_0])));
                var_45 = (min(var_45, (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_15 - 1] [i_1])));
                var_46 |= (((!(arr_17 [i_0] [10]))));
            }
            for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
            {
                var_47 = (min(var_47, (((!(arr_33 [i_16 - 1] [i_1] [i_1] [i_1] [i_1]))))));
                arr_54 [i_16] [i_1] = (((arr_6 [i_16 - 1] [i_0 - 3]) && (arr_6 [i_16 - 1] [i_0 - 3])));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        {
                            var_48 *= (((arr_22 [i_17] [i_18]) ? (arr_10 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1]) : (arr_52 [i_0] [i_1] [i_16 - 1] [i_18])));
                            var_49 *= ((~(6932245392374243828 + 30354)));
                        }
                    }
                }
                var_50 = (max(var_50, (!58217)));
            }
            /* LoopNest 2 */
            for (int i_19 = 2; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    {
                        var_51 += (arr_15 [i_0] [i_0] [i_1] [i_19] [i_20]);
                        var_52 = (max(var_52, var_11));
                    }
                }
            }
        }
        for (int i_21 = 0; i_21 < 17;i_21 += 1) /* same iter space */
        {
            var_53 += (arr_42 [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_0 - 3]);
            var_54 += (((arr_49 [i_0] [i_0] [i_0]) || (((var_13 ? 7 : 62439)))));
            var_55 = ((!((((-32767 - 1) ? 12795 : 8829542843687464503)))));
        }
        var_56 = (min(var_56, ((((arr_22 [i_0 + 1] [i_0]) << (arr_61 [i_0 - 1] [i_0 + 1]))))));
        var_57 = (max(var_57, ((((arr_8 [i_0] [i_0] [i_0 - 3]) && (arr_22 [i_0] [i_0 - 2]))))));
        var_58 = (((-57 + 2147483647) >> (((arr_53 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 3]) - 15768439686117539658))));
    }
    for (int i_22 = 2; i_22 < 18;i_22 += 1)
    {
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 21;i_24 += 1)
            {
                {
                    var_59 = (0 != 34265);
                    var_60 = var_3;
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        for (int i_26 = 2; i_26 < 18;i_26 += 1)
                        {
                            {
                                var_61 = ((~((((!var_0) && (arr_71 [i_22]))))));
                                var_62 = ((19871 ? (min(218, ((30357 ? (arr_69 [i_25]) : 103079215104)))) : 45670));
                            }
                        }
                    }
                }
            }
        }
        var_63 -= ((0 | (arr_80 [i_22 - 2] [i_22])));
    }
    #pragma endscop
}
