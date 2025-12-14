/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] [i_0] = arr_1 [i_0];

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 &= (min(((min((!0), (arr_5 [14] [i_1])))), 255));
            var_16 = (var_9 ? (((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_0]) : var_9)) : 1);
            var_17 = (min(var_17, ((((arr_0 [8]) ? ((2498132987 + (arr_0 [4]))) : ((((arr_0 [14]) ? var_4 : var_11))))))));
            var_18 = (max(((((arr_6 [i_0] [i_0] [9]) <= 255))), (arr_0 [i_0])));
        }

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_19 = (((((((max(1659475523, var_6))) ? 218 : (min(var_12, var_14))))) ? (((((65535 ? 1659475523 : 1981717924))) ? var_3 : 2283543416)) : ((((((-3933 ? 2635491751 : 38847))) ? (arr_2 [i_0]) : ((((arr_8 [i_0] [i_0] [i_2]) < var_12))))))));

            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_20 = (min((arr_1 [i_0]), ((max(((79 ? -256 : var_8)), 0)))));
                var_21 = (min(12313291914218089226, ((-(arr_1 [i_0])))));
                arr_12 [i_0] [i_2] [i_0] = -1505564072;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_22 = ((var_2 ? (arr_14 [i_4] [i_0] [i_0] [i_0]) : (~4000644813)));
                var_23 = (arr_13 [i_0] [i_0] [i_0]);
                arr_15 [i_0] [i_0] [i_4] = ((~(arr_5 [i_0] [i_0])));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] = 8431011514938164289;
                    var_24 += (!-261);
                    arr_23 [i_0] [14] [i_5] [14] = var_14;
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_26 [i_0] [i_2] [i_2] [i_2] [i_2] = ((~(~var_14)));
                    var_25 = 53;

                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_26 &= (~var_5);
                        var_27 = (min(var_27, (((((arr_20 [i_0] [i_5]) ? (arr_17 [i_5] [i_0] [i_0]) : var_6))))));
                        arr_31 [i_7] [i_2] [i_5] [i_7] [i_8] &= var_10;
                        var_28 = (min(var_28, ((((arr_30 [i_5] [i_5 + 3] [i_7] [i_5 - 1] [i_5 + 2]) <= -31)))));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((4011375414 ? -11002 : 5542655363526927008));
                        arr_36 [i_2] [9] [i_7] [i_0] = ((175 ? (((0 ? 254 : 1))) : var_9));
                        var_29 ^= ((!(((-(arr_27 [i_0] [i_2] [i_5] [i_2] [1] [i_9]))))));
                        var_30 = (((254 ? 37614 : var_8)));
                        var_31 = var_2;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_40 [i_0] = (~235);
                        arr_41 [i_0] [i_7] [i_0] = var_1;
                    }
                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        var_32 = (((arr_37 [i_0] [i_0] [i_5] [i_0] [i_0] [i_11 - 1]) ? (((!(arr_0 [i_0])))) : var_7));
                        var_33 = -var_12;
                    }
                }
                var_34 &= ((1 ? (!var_10) : 1));
                var_35 |= (!88751595);

                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    var_36 = var_7;
                    var_37 = 16;
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_38 = ((-1 ? -287 : -6952816611726595282));
            var_39 ^= ((var_10 | (arr_33 [i_0] [i_13] [i_13] [i_13] [1])));
        }
        arr_48 [i_0] [i_0] = ((1 ? (!-var_12) : var_5));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_40 = (min(var_40, (!7337197245045637702)));
            arr_53 [2] [i_14] [i_14] = ((var_1 ? var_13 : (arr_6 [4] [4] [4])));
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            arr_63 [i_14] [i_16] [i_16] [i_16 + 3] [i_16] [i_18] = var_2;
                            var_41 = ((~(arr_50 [i_17 + 2] [i_16 + 3])));
                            arr_64 [i_18] [i_18] [i_16] [i_18] [i_18] = var_6;
                            arr_65 [i_18] [i_16] [i_18] [i_18] [i_18] = ((var_8 ? ((0 ? (arr_13 [i_14] [i_14] [i_16]) : 1)) : 1));
                            arr_66 [i_16] [i_16] [i_16] [i_17] [i_18] [11] = (~1);
                        }
                    }
                }
            }
            arr_67 [3] [1] = ((var_3 ? (arr_8 [0] [i_15] [0]) : (arr_8 [10] [10] [i_15])));
        }
        var_42 = var_2;
    }
    var_43 = 2251799813685247;
    #pragma endscop
}
