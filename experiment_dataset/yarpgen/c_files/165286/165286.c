/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((234 ? (((max(var_6, var_4)))) : var_7)))));
    var_21 &= var_1;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_22 = (arr_0 [i_0] [i_0 + 2]);
        var_23 = (((arr_1 [i_0 - 1]) << var_8));
        var_24 = var_12;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_25 = ((((!(arr_1 [i_0]))) ? var_16 : 20));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_26 = (((17 ? var_14 : var_1)));
                            var_27 *= (!235);
                        }
                    }
                }
            }
            var_28 = ((arr_7 [i_0] [i_0]) > var_19);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                var_29 = (arr_14 [i_6] [i_5] [i_6]);
                var_30 = (((arr_15 [i_0 - 1] [i_0 + 2]) ? var_5 : (arr_15 [i_0 - 1] [i_0])));
                var_31 = 239;
                var_32 &= (((var_10 <= 239) + (arr_9 [i_0 + 2] [i_5] [i_6 + 3] [i_5] [i_5] [i_5])));
                var_33 = var_6;
            }
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_34 = 239;
                            var_35 = (32 < 234);
                        }
                    }
                }
                var_36 = 22;
                var_37 = (max(var_37, (((234 ? (arr_20 [i_7]) : 248)))));

                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_38 ^= ((var_13 ? 20 : (((var_8 != (arr_32 [i_0] [i_5] [i_7] [i_7] [0] [0]))))));
                    var_39 = (min(var_39, 248));
                    var_40 = 21;

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_41 = 20;
                        var_42 = (max(var_42, var_18));
                        var_43 += (arr_2 [i_0]);
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_44 = var_11;
                        var_45 = (max(var_45, (((22 ? 20 : 3)))));
                        var_46 = 7;
                    }
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    var_47 = (min(var_47, (((22 ? (((var_1 ? (arr_14 [i_0] [0] [i_7 + 1]) : (arr_4 [i_0] [i_5] [i_13])))) : 222)))));
                    var_48 = (arr_18 [i_0 + 3]);
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                {
                    var_49 = 22;
                    var_50 *= (((arr_41 [i_0 + 1] [i_5] [i_7 + 2]) ? var_19 : 224));
                    var_51 = (248 ^ 215);
                    var_52 = (max(var_52, (((var_9 ? (~21) : 253)))));
                }
            }
            var_53 = (((((var_8 ? var_0 : 233))) ? (arr_40 [i_0 + 2] [6] [i_5] [i_5]) : (!234)));
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_54 = (((((var_12 ? var_4 : 236))) || (!var_16)));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 0;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 9;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 10;i_18 += 1)
                    {
                        {
                            var_55 -= var_3;
                            var_56 = (!234);
                            var_57 -= var_12;
                            var_58 = (((arr_56 [i_15] [i_17 - 1] [i_17] [i_17 + 2] [i_18 - 2] [i_18 - 1]) & (arr_34 [5] [i_15] [i_15] [i_16] [i_15] [i_16])));
                        }
                    }
                }
            }
            var_59 = arr_30 [i_0 - 1] [1] [i_15];
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 8;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 9;i_20 += 1)
                {
                    {
                        var_60 = 225;
                        var_61 = ((arr_40 [i_20 + 2] [0] [i_19 + 2] [i_19]) > (arr_40 [i_20 + 1] [i_15] [i_19 + 2] [i_19]));
                        var_62 = -var_9;
                        var_63 = (max(var_63, (((234 ? 8 : 250)))));
                    }
                }
            }
            var_64 = 25;
        }
    }
    for (int i_21 = 0; i_21 < 13;i_21 += 1)
    {
        var_65 = 234;
        var_66 += ((~((((var_10 ? var_13 : 22)) | (max(var_17, var_10))))));
    }
    for (int i_22 = 2; i_22 < 13;i_22 += 1)
    {
        var_67 = (((~(arr_68 [i_22] [0]))) | ((241 ^ (~20))));
        var_68 *= ((-((-(238 == 20)))));
        var_69 = (min(var_69, (((!(22 ^ 248))))));
        /* LoopNest 2 */
        for (int i_23 = 2; i_23 < 14;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                {
                    var_70 = (min(var_70, (((!234) == 17))));
                    var_71 = (((((var_5 ? ((var_4 ? 20 : (arr_68 [i_22] [i_24]))) : (arr_70 [i_24])))) ? var_12 : (~6)));
                    var_72 = var_13;
                    var_73 = (max(var_73, (((!(((234 ? 235 : 1))))))));
                }
            }
        }
    }
    #pragma endscop
}
