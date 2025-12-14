/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            var_14 = (!var_11);
            var_15 |= (((((9864863816518289316 ? 32767 : -1144688595))) ? (~32744) : ((32767 ? -8050090381150467926 : -32745))));
            var_16 = ((var_13 ? 1 : -6702));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_17 = 6706;

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_18 &= ((var_8 << (6694 > var_1)));
                    arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = 6701;
                }
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                    var_19 = (-9223372036854775807 - 1);
                    var_20 = (((arr_5 [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_0 - 3] [0]) : 4294967295));
                    var_21 = (min(var_21, (((32744 ? 151060674 : 32750)))));
                    var_22 = (((-9223372036854775807 - 1) ? (arr_9 [i_5 + 1] [i_5 - 1] [i_2 - 1] [i_0 - 2] [i_0]) : (arr_6 [i_5 - 1] [i_2 - 1])));
                }
                var_23 = (((82 ? -1 : 10)));
            }
            var_24 = ((((((arr_7 [i_0] [i_0] [i_2]) ? var_2 : var_7))) ? var_12 : ((var_6 ? 274877906943 : var_3))));
            arr_16 [4] [4] [i_0] |= ((var_1 > ((var_12 ? 1 : 1))));
        }
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    {
                        var_25 = (((((var_0 ? var_1 : 127))) ? ((32744 ? 274877906921 : 32750)) : -var_7));
                        arr_24 [i_8] [i_0] [i_0] [i_0] = -1;
                    }
                }
            }
            var_26 *= ((4294967295 ? ((68719476735 ? var_2 : 0)) : (arr_22 [i_0 - 1])));
        }
        arr_25 [i_0] = (var_8 ^ var_5);
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 7;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_27 = ((var_11 ? 0 : -464374721));
                            var_28 *= (((arr_0 [i_10 - 1] [i_10 + 2]) ? (((arr_9 [i_0 - 2] [3] [i_0] [i_0 - 3] [i_0]) ? 6701 : 511)) : 1));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_29 -= ((24569 ? -27568 : ((-6699 ? -3015608046983486561 : (arr_9 [i_13] [i_11] [i_10 - 2] [i_9] [i_0])))));
                            var_30 = (arr_17 [i_0] [3]);
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (-6707 > var_9);
                        }
                        var_31 = (max(var_31, (!103)));
                    }
                }
            }
        }
    }
    for (int i_14 = 2; i_14 < 15;i_14 += 1)
    {
        var_32 = (((arr_41 [i_14 + 4] [i_14]) >= (max(1, -8551509150681757814))));
        var_33 = (((((var_5 > 32756) ? var_10 : 64)) <= ((-3 ? var_5 : (((arr_40 [i_14]) ? 6684 : 11314))))));
    }
    for (int i_15 = 4; i_15 < 15;i_15 += 1) /* same iter space */
    {
        var_34 = ((1 ? ((var_1 ? var_10 : 3463057711309229342)) : (arr_43 [i_15 + 1])));
        arr_44 [i_15] = ((!(arr_42 [1] [i_15 - 2])));
        var_35 = 1;
        arr_45 [i_15] = ((1 ? 24569 : 1));
    }
    for (int i_16 = 4; i_16 < 15;i_16 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_17 = 1; i_17 < 14;i_17 += 1)
        {

            for (int i_18 = 1; i_18 < 17;i_18 += 1)
            {
                var_36 = (0 - var_11);
                arr_55 [i_16] [i_17] [i_17 + 4] [i_17] = (((arr_43 [i_16 - 2]) ? (arr_43 [i_16 + 1]) : (arr_43 [i_16 - 3])));
            }
            for (int i_19 = 3; i_19 < 14;i_19 += 1)
            {
                var_37 = 67107840;
                var_38 -= ((!(arr_52 [i_19 + 4] [i_19] [i_16 + 1])));
                var_39 = (15548405176329295235 & var_2);
            }
            for (int i_20 = 1; i_20 < 16;i_20 += 1) /* same iter space */
            {
                var_40 = ((1621978860645992525 ? var_8 : var_8));
                var_41 = (((((24 ? -4394178694134754025 : var_2))) ? (var_6 ^ 2147483647) : 0));
            }
            for (int i_21 = 1; i_21 < 16;i_21 += 1) /* same iter space */
            {
                var_42 = ((-3586 ? (~0) : ((127 ? 15548405176329295235 : var_1))));
                var_43 = ((arr_40 [i_17 + 1]) ? var_12 : 1);
            }
            arr_63 [i_17 + 3] [i_17] = var_3;
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 0;i_22 += 1)
        {
            /* LoopNest 2 */
            for (int i_23 = 4; i_23 < 16;i_23 += 1)
            {
                for (int i_24 = 1; i_24 < 16;i_24 += 1)
                {
                    {
                        var_44 = var_8;
                        arr_71 [i_22] [i_22] [i_22] [i_22] [i_22] = (var_1 >= 202479206);
                    }
                }
            }
            arr_72 [i_16] [2] = 3;
            var_45 &= (var_4 ? (arr_51 [i_16 - 2]) : (arr_51 [i_16 + 2]));
        }
        var_46 = (((((-19 ? (arr_47 [i_16 + 2]) : -6839))) ? ((((arr_47 [i_16 - 2]) ? 1 : 12))) : ((var_11 ? -32 : var_13))));
    }
    var_47 = var_5;

    for (int i_25 = 0; i_25 < 25;i_25 += 1) /* same iter space */
    {
        arr_76 [i_25] = ((((80 ? (arr_74 [i_25]) : (arr_73 [i_25])))) ? (max((arr_74 [i_25]), var_6)) : (min(var_6, 180)));
        var_48 = (max(var_12, 22));
        var_49 = 1;
    }
    for (int i_26 = 0; i_26 < 25;i_26 += 1) /* same iter space */
    {
        var_50 = ((+((-2034911435 ? (arr_75 [i_26] [i_26]) : var_2))));
        var_51 = (180 ? -103 : (!-3898));
    }
    #pragma endscop
}
