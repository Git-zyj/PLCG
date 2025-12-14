/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_18 *= (!13211587392498299131);
        var_19 = (min(var_19, var_9));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 *= min((!var_6), -var_8);

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_21 = (max(var_21, var_6));
                var_22 += min((!9223372036854775803), (max(var_10, var_0)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_23 -= (!(~var_17));
                            var_24 *= max((min(var_3, var_10)), var_4);
                            var_25 = (max(var_25, -var_1));
                            var_26 |= var_0;
                        }
                    }
                }
                var_27 -= ((!(~var_6)));

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_28 = (min(var_28, var_5));
                    var_29 *= ((~(~var_8)));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_30 *= (min(var_6, var_11));
                    var_31 += ((!((min(var_3, var_5)))));
                    var_32 *= ((!((max(1, 6681529966399906010)))));
                    var_33 = (max(var_33, ((max(var_10, (max(var_7, var_16)))))));
                    var_34 = (max(var_34, var_6));
                }
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_35 *= ((max(1721995267, 12752)));
                var_36 = (min(var_36, -var_12));
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_37 |= var_0;
                var_38 = (max(var_38, (!var_10)));
                var_39 = var_7;
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_40 *= ((min(var_4, var_7)));

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_32 [i_1] [0] [i_1] [i_1] |= var_17;

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_41 = (min(var_41, var_15));
                    var_42 = (max(var_42, var_6));
                    var_43 -= ((max(var_17, var_14)));
                }
                var_44 ^= (min(var_2, var_17));
                var_45 += min((~var_7), (min(var_8, var_11)));
                var_46 *= (max((!var_11), (min(var_11, var_12))));
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
            {
                var_47 = (~var_5);
                var_48 ^= var_6;
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
            {
                arr_42 [i_1] [i_14] &= (~var_13);

                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    var_49 = max(-10963, var_2);
                    var_50 *= (min(-var_16, (((~(!126))))));
                    var_51 = (max(var_51, (!-10948)));
                    var_52 = (max(var_52, -var_10));
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    var_53 -= (min(var_12, (max(var_0, var_2))));

                    for (int i_17 = 3; i_17 < 15;i_17 += 1)
                    {
                        var_54 = (max(var_54, var_7));
                        var_55 = (max(var_55, var_6));
                        var_56 = (min(var_56, (((max(var_0, 4610560118520545280))))));
                    }
                    var_57 = (max(var_57, ((max(var_6, var_15)))));
                }
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    var_58 = (max(var_58, ((max((~var_1), var_6)))));
                    arr_54 [i_1] [i_10] [i_10] [i_14] [i_18] |= (min(var_1, var_9));
                    var_59 += (max((~var_13), (max((~1), (~var_14)))));
                }
            }
            var_60 = (max(var_60, ((max((max(var_2, var_4)), ((max(var_9, var_14))))))));
            var_61 -= (max((!var_15), (!var_10)));
        }
        for (int i_19 = 2; i_19 < 15;i_19 += 1)
        {
            var_62 &= -var_14;
            var_63 ^= var_8;
            var_64 = (min(var_64, (~var_3)));
        }
        var_65 = (max(var_65, var_9));
        var_66 = (max((min(var_9, var_8)), (!-var_15)));
        var_67 *= ((min(-1, 1)));
    }
    var_68 -= var_1;

    /* vectorizable */
    for (int i_20 = 0; i_20 < 10;i_20 += 1)
    {
        var_69 = (max(var_69, -var_8));
        var_70 *= var_7;
    }
    var_71 = (max(var_71, ((max(1475013863987184771, var_0)))));
    #pragma endscop
}
