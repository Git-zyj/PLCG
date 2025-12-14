/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 = (max((var_2 && var_11), (min(var_11, var_11))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    var_13 = (~208);
                    var_14 = (var_10 != var_5);
                }

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_15 = var_7;

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_16 = -var_11;
                        var_17 = (((var_8 && var_11) && -var_8));
                    }
                    var_18 = (var_2 - var_2);
                    var_19 = var_2;
                    var_20 = (min(var_20, (((var_2 && (!var_7))))));
                }
                var_21 -= var_4;

                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_22 -= (!var_6);
                    var_23 = (min(var_23, var_8));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        var_24 = (~var_5);
                        var_25 = ((~(~48)));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_26 = (((var_5 - var_9) - (var_7 < var_6)));
                        var_27 = (var_2 < var_11);
                        var_28 = (~var_0);
                    }
                    var_29 = var_0;
                    var_30 = ((var_11 && (var_8 - var_1)));

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_31 = 31;
                        var_32 ^= (48 < 1);
                        var_33 |= var_4;
                        var_34 = (max(var_34, (((!(var_6 - var_10))))));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_35 = (max(var_35, (var_8 - var_4)));
                        var_36 -= var_3;
                        var_37 = (var_6 ^ var_3);
                        var_38 = (!var_5);
                    }
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        var_39 += var_4;
                        var_40 = (var_11 && var_2);
                        var_41 = (~var_7);
                    }
                    var_42 ^= var_9;
                }

                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {

                    for (int i_14 = 3; i_14 < 21;i_14 += 1)
                    {
                        var_43 = (((var_11 + -8) != 0));
                        var_44 |= ((var_8 - (var_2 != var_7)));
                    }
                    var_45 = ((~(var_11 / var_10)));
                }
            }
            for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
            {
                var_46 ^= (~var_8);
                var_47 += (var_5 - var_2);
            }
            var_48 = var_11;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 20;i_17 += 1)
                {
                    {
                        var_49 = (var_5 && var_5);
                        var_50 = (var_11 < var_4);
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
        {
            var_51 = -0;
            /* LoopNest 3 */
            for (int i_19 = 1; i_19 < 19;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        {
                            var_52 |= (144115119356379136 && 144);
                            var_53 = 15;
                            var_54 = (~-12);
                        }
                    }
                }
            }
            var_55 -= (!8191);
        }
        for (int i_22 = 0; i_22 < 23;i_22 += 1) /* same iter space */
        {

            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                var_56 |= ((var_6 && ((min((min(var_8, var_11)), var_9)))));
                var_57 = (max((max(195, (-127 - 1))), (838753949 < 3456213346)));
            }
            /* LoopNest 2 */
            for (int i_24 = 2; i_24 < 22;i_24 += 1)
            {
                for (int i_25 = 1; i_25 < 21;i_25 += 1)
                {
                    {
                        var_58 = var_1;
                        var_59 = var_2;
                        var_60 = ((-((min(69, -19)))));

                        for (int i_26 = 0; i_26 < 23;i_26 += 1)
                        {
                            var_61 = (~var_2);
                            var_62 = (min(8188, 8171));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 23;i_27 += 1) /* same iter space */
        {
            var_63 = var_0;
            var_64 = (var_9 && var_3);
        }
    }
    for (int i_28 = 2; i_28 < 12;i_28 += 1) /* same iter space */
    {
        var_65 = var_8;
        var_66 |= var_10;
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 14;i_29 += 1)
        {
            for (int i_30 = 2; i_30 < 11;i_30 += 1)
            {
                {
                    var_67 = (!var_0);
                    var_68 += ((+((((~var_2) < (var_0 && var_4))))));
                }
            }
        }
        var_69 += var_5;
    }
    for (int i_31 = 2; i_31 < 12;i_31 += 1) /* same iter space */
    {
        var_70 = (((-8 != 44873) && var_10));

        for (int i_32 = 2; i_32 < 10;i_32 += 1)
        {
            var_71 = ((0 && 69) != (var_2 - -8159));
            var_72 = var_9;
        }
        for (int i_33 = 0; i_33 < 14;i_33 += 1)
        {
            var_73 = var_7;
            var_74 = var_1;
        }
        /* vectorizable */
        for (int i_34 = 4; i_34 < 13;i_34 += 1)
        {

            for (int i_35 = 0; i_35 < 14;i_35 += 1)
            {
                var_75 = (!8199);
                var_76 = (max(var_76, (var_2 != var_4)));
                var_77 |= (~var_4);
            }
            for (int i_36 = 2; i_36 < 13;i_36 += 1)
            {
                var_78 = (var_8 < var_9);
                var_79 = var_4;

                for (int i_37 = 1; i_37 < 11;i_37 += 1)
                {
                    var_80 = (~var_10);

                    for (int i_38 = 1; i_38 < 12;i_38 += 1)
                    {
                        var_81 = (((-8190 - 17) != (var_9 < var_0)));
                        var_82 = (!var_7);
                        var_83 = (-8171 != 7);
                    }
                    for (int i_39 = 2; i_39 < 10;i_39 += 1)
                    {
                        var_84 = 21;
                        var_85 += (var_7 + var_5);
                    }
                }
            }
            var_86 |= (~var_9);
        }
        var_87 = (~(!var_3));
    }
    var_88 = var_2;
    var_89 |= var_10;
    var_90 = (min(var_90, var_7));
    #pragma endscop
}
