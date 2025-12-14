/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (min(((-1680938777 ? (75 <= var_7) : var_3)), ((min(var_4, 22261)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (+((-1680938777 ? (arr_8 [i_0]) : ((1680938787 ? 123 : (arr_0 [i_0]))))));
                    var_13 = 1;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_14 *= ((((((!(((107 ? 1680938779 : 1))))))) <= (max(var_4, (((arr_6 [i_0]) ? (arr_15 [i_2] [i_3] [i_4]) : (arr_5 [i_0] [i_0] [i_0])))))));
                            var_15 = 2030544792;
                            var_16 = (min(var_16, 112));
                        }
                        var_17 = ((-(arr_12 [i_2 + 1])));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_18 ^= var_0;

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 24;i_6 += 1)
                        {
                            var_19 *= (((var_10 ? (arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_3 [i_2] [i_1]))));
                            arr_22 [i_5] = (((((-5509498683422629124 ? var_0 : (arr_16 [i_1] [i_1])))) ? ((((arr_9 [i_2]) ? (arr_1 [i_2]) : -1680938781))) : var_8));
                            arr_23 [i_0] [i_0] [i_2] [i_5] [i_2] = var_2;
                            var_20 = (min(var_20, (((-5509498683422629131 ? -62 : 1)))));
                            var_21 = ((((arr_19 [i_0] [i_1] [i_2] [i_5] [i_6]) >= -36)));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_0] [i_0] = -15226;
                            var_22 = (max(var_22, (((!(arr_19 [i_1] [i_2 + 1] [i_2] [i_2 - 2] [i_7]))))));
                            var_23 = (((arr_2 [i_2 - 1]) ? var_1 : ((2244153592 ? (arr_19 [i_7] [i_5] [i_2] [i_1] [i_0]) : (arr_10 [i_0] [i_1] [i_2] [i_5] [i_7])))));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            var_24 = (arr_29 [i_0] [i_1] [i_2] [i_5] [i_8]);
                            var_25 = ((+(((arr_21 [i_8] [i_5] [i_2] [i_1] [i_0] [i_0]) ? (arr_21 [i_8] [i_5] [i_2] [i_1] [i_0] [i_0]) : var_6))));
                            var_26 -= (arr_0 [i_5]);
                            arr_30 [i_8] [i_2] = (max(1, (((arr_6 [i_2 - 1]) ? (arr_16 [i_2 + 2] [i_2]) : var_5))));
                            var_27 = (max(var_27, (((-((((arr_1 [i_0]) != (arr_1 [i_0])))))))));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_5] [i_5] = (!122);
                            var_28 *= ((var_7 ? (((12388717849731062729 ? (arr_1 [i_9]) : (arr_6 [i_1])))) : (max((arr_19 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2] [i_2]), ((var_9 ? 1680938786 : var_5))))));
                            var_29 = ((((arr_21 [i_2 - 2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2]) ? (arr_21 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_21 [i_2 + 2] [i_2] [i_2 - 2] [i_2] [i_2] [i_2]))));
                        }
                        var_30 = (max(var_30, (arr_5 [i_1] [i_2] [i_5])));
                        var_31 = (min(var_31, ((max(var_2, (((arr_5 [i_5] [i_1] [i_0]) ? (max(14916734229202428485, (arr_18 [i_5] [i_1] [i_1] [i_5] [i_0]))) : var_8)))))));
                        var_32 += (max(1680938758, ((((max(-3237, 197))) ? (0 % 63) : 136))));
                    }
                    var_33 *= (max(((((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0]) : var_9)) == 692592568329483482))), (min(4158805149668492318, (arr_8 [i_0])))));
                }
            }
        }
        arr_34 [i_0] [i_0] = (((((-1680938788 ? 5501715798270106644 : 103))) ? (arr_12 [i_0]) : ((((((max(var_10, (arr_6 [i_0])))) > (min(var_7, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            var_34 = (3546281460982461716 % 18446744073709551615);
            var_35 = (min(var_35, (((((((arr_2 [i_10]) / (arr_3 [i_11] [i_10])))) ? (((arr_2 [i_11]) ? (arr_8 [i_10]) : (arr_37 [i_10] [i_10]))) : (((-(arr_25 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))))))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_36 = (max(var_36, -74));
                            arr_47 [i_14] [i_14] [i_13] [i_12] [i_11] [i_10] = (((arr_0 [i_10]) == (arr_0 [i_10])));
                            var_37 = ((!(arr_26 [i_10] [i_11] [i_13] [i_14])));
                        }
                    }
                }
            }
        }
        var_38 = (max(var_38, (!-12)));
        var_39 = ((!(!40855)));
        var_40 = (min(var_40, (arr_31 [i_10] [i_10] [i_10] [i_10] [i_10])));
    }
    #pragma endscop
}
