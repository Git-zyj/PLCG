/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 144115188075855871;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = 8;
        var_15 = 1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_16 ^= -915199779546021841;
            var_17 = 1062627502458856502;
            var_18 = (min(var_18, 17384116571250695113));
            var_19 = 1;
            arr_10 [6] [i_1 + 2] [i_1] = 1062627502458856502;
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_20 = 13550540352270418140;

            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                var_21 = 0;
                arr_15 [i_4 + 2] [i_3 - 2] = 6418208167739562120;
            }
            var_22 = (min(var_22, 613005153662428610));
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_19 [i_1 + 2] = -163290827;
            arr_20 [i_1] = 6418208167739562120;
        }
        arr_21 [i_1] = 255;
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 18;i_7 += 1)
            {
                {

                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        arr_29 [i_1] [i_6] [i_7] [i_7] [5] [14] = 49823897;

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_23 *= 138;
                            arr_32 [i_1] [i_6] [i_7] [i_7] [i_1] [i_8 - 2] [i_9] |= 65519;
                        }

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_24 = (max(var_24, 30));
                            arr_36 [i_1] [i_1] [13] [i_1 + 1] [10] [i_6] [i_1 + 1] = 4896203721439133500;
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_39 [5] [5] [i_6] = 65519;
                            var_25 = 574208952489738240;
                        }
                        var_26 = (max(var_26, 36417));
                        var_27 -= 5;
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_28 *= 6331095338297155552;
                        arr_44 [i_6] [i_12] = 1;
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_29 *= 61630;

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_49 [i_1] [i_6] [i_6] [i_7] [9] [1] = 138;
                            arr_50 [i_6] [1] [1] [15] [i_13] [i_14] = 47562;
                            var_30 = 27;
                            var_31 = -6151733751066803704;
                        }
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            var_32 = -122;
                            var_33 = 0;
                            var_34 = (min(var_34, 29093));
                            var_35 = 4896203721439133475;
                            var_36 *= 1;
                        }
                    }
                    for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                    {
                        var_37 = -8445309328878078762;

                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            arr_59 [i_6] = 5;
                            var_38 = 17384116571250695091;
                        }
                        for (int i_18 = 3; i_18 < 18;i_18 += 1)
                        {
                            arr_63 [i_7] [i_7] &= 125;
                            arr_64 [i_6] [i_6] = 4896203721439133471;
                        }
                        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                        {
                            arr_68 [i_1] [i_6] [i_7 - 1] [i_16] [i_6] = 65524;
                            var_39 *= 13085;
                        }
                        for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                        {
                            var_40 = 4294967295;
                            var_41 = 17;
                            arr_71 [i_7 - 3] [i_7 + 1] [i_6] [i_7 - 4] = 1062627502458856513;
                            var_42 ^= -2991064155212183960;
                        }
                        arr_72 [i_6] = 1;
                        var_43 = -114;
                    }
                    arr_73 [18] [i_6] [i_6] [18] = 4896203721439133472;
                    var_44 = (max(var_44, 220));

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {

                        for (int i_22 = 0; i_22 < 19;i_22 += 1)
                        {
                            var_45 = 93;
                            var_46 = 5763;
                            var_47 += -163290801;
                            arr_79 [i_6] [i_21] [i_6] = 116;
                        }

                        for (int i_23 = 1; i_23 < 15;i_23 += 1)
                        {
                            var_48 = (min(var_48, 32767));
                            var_49 = (min(var_49, 127));
                            var_50 = (min(var_50, 13550540352270418140));
                        }
                        var_51 *= 163290811;
                        var_52 = (max(var_52, 1));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 19;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 19;i_26 += 1)
                {
                    {

                        for (int i_27 = 1; i_27 < 17;i_27 += 1)
                        {
                            var_53 += 136;
                            var_54 *= 17384116571250695078;
                            arr_94 [i_25] [i_26] [i_1] [i_24] [i_25] &= 6;
                        }
                        for (int i_28 = 1; i_28 < 16;i_28 += 1)
                        {
                            var_55 = 7599512772068982926;
                            arr_97 [i_24] = 1;
                        }
                        arr_98 [i_24] [13] [i_25] [i_26] = 17833738920047122993;
                    }
                }
            }
        }
    }
    var_56 = 464378479;
    #pragma endscop
}
