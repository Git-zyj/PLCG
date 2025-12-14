/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_10);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 *= ((~((~(arr_5 [16] [i_1] [i_1] [1])))));
                        var_15 = (min(((((arr_5 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 3]) * 4095))), (((arr_5 [i_0] [i_2 - 2] [i_2 - 1] [i_2 - 1]) ? 30720 : 8388608))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_16 = ((((!(var_4 > var_11)))) % (~var_5));
            var_17 = (var_0 != 18);
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_18 = (min(var_18, ((max(((((-28801 ? var_9 : var_8)) - (arr_3 [i_0] [i_0] [9]))), var_8)))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_19 = (((((max((arr_10 [1]), (arr_12 [i_0] [i_5]))) != var_4)) || ((((arr_2 [i_0]) ? (~var_7) : ((var_5 ? -27145 : 4227858432)))))));
                var_20 *= (min(396895784, (~-1403218922)));
                var_21 *= var_10;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_22 = (max(var_10, (arr_1 [i_5])));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_23 = (max(var_23, var_7));
                            var_24 = (arr_13 [i_0] [i_0] [i_7]);
                            var_25 *= min(var_4, (((var_1 >> (((arr_21 [i_0] [1] [i_9] [i_8 - 1] [i_0]) - 240))))));
                            var_26 = var_7;
                            var_27 = (max(148, 255));
                        }
                    }
                }
                var_28 = (((((max(var_5, 7770))) << (28843 - 28827))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_29 = (((((arr_0 [i_0]) && var_12))));
                            var_30 = (arr_10 [i_11 - 1]);
                            var_31 = (arr_23 [i_0] [i_0] [i_0] [6] [i_11 - 1]);
                            var_32 = (arr_10 [i_0]);
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_33 = (((((var_8 & (min(2147483648, 49059))))) ? -var_8 : (max(var_11, 2215434877))));
                var_34 *= min((((!(arr_23 [i_0] [0] [2] [i_0] [i_0])))), (max(var_0, (max(var_10, 31)))));
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_35 = (min((((((max(522240, (arr_2 [i_0])))) ? var_10 : ((1655649427 ? 32758 : (arr_6 [i_0] [12] [i_14 - 3])))))), (max(var_8, (min(var_2, 2350112221))))));
                            var_36 *= (min((((arr_39 [10] [i_13] [i_12] [10] [i_5] [i_0] [1]) != (!2325662877))), (((3760788443 * 4290771707) > 4294967295))));
                            var_37 = (arr_33 [15] [i_5] [5]);
                            var_38 = ((min((arr_20 [i_0] [i_5] [i_0] [i_13 - 2]), (arr_20 [1] [i_5] [i_0] [i_13 - 3]))));
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {

                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        var_39 = (min(var_39, ((max((arr_42 [i_16 + 3] [i_16] [i_16] [i_16] [i_16]), (arr_42 [i_16 + 3] [i_16] [i_16 + 2] [i_16] [1]))))));
                        var_40 = arr_32 [i_16 + 3] [i_0] [i_0] [i_0];
                        var_41 = 2079532434;
                        var_42 = ((~((min((arr_18 [9] [i_16 + 3]), (arr_41 [i_16] [i_5] [i_16 + 2]))))));
                    }
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_43 = var_12;
                        var_44 = (((((-(arr_29 [i_17] [i_17] [i_0] [1] [i_0] [i_5] [5])))) ? (arr_47 [i_0] [i_0] [i_12] [i_0] [i_17]) : ((min((arr_47 [i_0] [7] [i_12] [i_12] [1]), (arr_29 [i_0] [18] [i_5] [i_12] [i_0] [i_15] [i_17]))))));
                        var_45 = var_8;
                    }

                    for (int i_18 = 4; i_18 < 18;i_18 += 1)
                    {
                        var_46 = (arr_35 [i_0] [i_0] [16]);
                        var_47 = (~0);
                        var_48 = ((+((+((max((arr_18 [i_0] [i_12]), (arr_3 [i_15] [i_0] [i_0]))))))));
                        var_49 = (max(var_49, var_6));
                        var_50 *= 3781747524;
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        var_51 = ((!(((var_2 ? (var_4 >= var_4) : 7778)))));
                        var_52 = (!var_12);
                        var_53 = ((var_2 >> ((((max(var_12, 2079532459))) - 2079532450))));
                    }
                }
            }

            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                var_54 = min(var_5, var_10);
                var_55 = ((~(~var_1)));
                var_56 *= ((-((((min(-24379, (arr_56 [i_0] [i_5] [i_20])))) ? var_1 : (((arr_57 [i_0] [7] [1]) ? (arr_49 [i_0] [i_0] [1] [i_5] [i_20] [i_20] [9]) : (arr_12 [10] [10])))))));
            }
            var_57 *= (~var_0);
        }
    }
    for (int i_21 = 3; i_21 < 15;i_21 += 1)
    {
        var_58 = ((((((arr_3 [i_21 + 3] [17] [i_21 - 1]) ? var_10 : var_12))) ? (arr_3 [i_21 + 4] [i_21 - 3] [i_21 - 3]) : (arr_3 [i_21 - 3] [i_21 - 1] [i_21 - 2])));
        var_59 = ((((((!(arr_7 [i_21] [i_21] [i_21 + 3] [4]))) / 1))));
        var_60 = (arr_27 [i_21] [i_21]);
        var_61 = ((((3424450931 ? 44080 : -31132))));
    }
    for (int i_22 = 0; i_22 < 12;i_22 += 1)
    {
        /* LoopNest 2 */
        for (int i_23 = 1; i_23 < 10;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 12;i_24 += 1)
            {
                {

                    for (int i_25 = 1; i_25 < 9;i_25 += 1)
                    {

                        for (int i_26 = 4; i_26 < 11;i_26 += 1)
                        {
                            var_62 *= ((~2594749895) ? ((+(max((arr_73 [i_25] [i_23]), var_0)))) : var_12);
                            var_63 = ((-27145 ? ((((0 > var_9) + var_5))) : (var_7 / 134209536)));
                        }
                        var_64 = (arr_8 [i_23] [i_23]);
                    }
                    /* vectorizable */
                    for (int i_27 = 1; i_27 < 11;i_27 += 1)
                    {
                        var_65 = (!((27145 == (arr_35 [i_22] [i_23] [i_23]))));
                        var_66 = var_8;
                        var_67 *= ((var_8 << (((arr_44 [i_22] [i_23 - 1] [i_24] [4] [i_22]) - 172))));
                        var_68 = (arr_11 [10] [10]);
                    }
                    var_69 = (max(var_69, var_11));
                }
            }
        }
        var_70 = (+(((min((arr_57 [i_22] [i_22] [i_22]), (arr_12 [i_22] [i_22]))) & (~var_5))));
        var_71 = var_8;
    }
    for (int i_28 = 4; i_28 < 18;i_28 += 1)
    {
        var_72 = ((max((min(1, var_2)), var_6)) % (((max(var_1, (arr_54 [i_28 - 1] [i_28] [i_28 + 2] [i_28 + 2] [i_28] [i_28]))))));
        var_73 = (min((arr_52 [i_28] [i_28]), (max((arr_20 [i_28] [i_28] [i_28] [i_28]), (arr_81 [i_28])))));
    }
    #pragma endscop
}
