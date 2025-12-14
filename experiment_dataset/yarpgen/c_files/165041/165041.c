/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_11;

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_21 |= var_17;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = ((var_8 ? ((var_5 ? (((var_4 ? var_19 : var_10))) : ((var_19 ? var_9 : var_11)))) : var_6));
            var_22 = (((((var_6 ? var_0 : var_8))) ? (((var_4 ? var_9 : var_13))) : ((var_13 ? var_11 : var_11))));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
            {
                var_23 = ((var_18 ? var_6 : var_8));
                arr_9 [i_0 + 1] [i_0] [i_1] [i_2] = var_12;
                var_24 += ((var_11 ? var_13 : var_1));
                arr_10 [i_0] [i_0] [i_1] = ((2782 ? -1 : 8662));
                var_25 = var_9;
            }
            for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
            {
                var_26 = (min(var_26, ((((((88 ? 20720 : 8774041331968632598))) ? var_17 : ((var_2 ? var_8 : (((-1024 ? 1 : 2753897857))))))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_27 = ((var_8 ? ((var_10 ? var_19 : var_15)) : var_12));
                            arr_21 [i_3] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 2] = var_12;
                        }
                    }
                }
                var_28 = (((((-51 ? 202 : 227))) ? var_11 : ((var_10 ? var_7 : var_9))));
            }
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                arr_25 [i_1] [i_1] = ((((((((var_6 ? var_8 : var_15))) ? var_17 : ((var_14 ? var_9 : var_17))))) ? (((var_0 ? var_9 : var_17))) : ((var_9 ? var_11 : var_19))));

                /* vectorizable */
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    arr_28 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] = ((-98 ? -29 : 53));
                    var_29 = (min(var_29, (((var_19 ? var_10 : var_19)))));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_30 = ((var_12 ? ((var_16 ? -1004723093663938714 : -55)) : (((1973549126097365730 ? var_1 : 65535)))));
                    arr_31 [i_0] [i_1] [i_6] [4] = (((((var_17 ? var_0 : var_6))) ? ((var_4 ? var_18 : var_9)) : (((var_16 ? var_6 : var_19)))));
                }
                arr_32 [i_0] [i_0] [i_6] = (var_0 ? ((((((11909 ? 6 : 99))) ? -25085 : -11882))) : ((-11910 ? 0 : 40287)));
            }
            for (int i_9 = 4; i_9 < 7;i_9 += 1)
            {
                var_31 = (((((7 ? 1 : 0))) ? ((6733 ? 1307530297955576030 : var_10)) : 186));
                arr_35 [i_0] [i_0] [i_1] [i_9] = (((((var_3 ? var_11 : var_16))) ? ((var_5 ? var_6 : var_9)) : ((var_11 ? var_6 : var_10))));
            }
            arr_36 [i_0] [i_0] [i_1] = (((((var_16 ? var_16 : var_19))) ? (((var_16 ? var_17 : var_2))) : ((var_15 ? var_8 : var_5))));
        }
        var_32 += (((((var_8 ? var_9 : var_6))) ? (((var_2 ? var_3 : var_6))) : ((var_5 ? var_11 : var_0))));
        var_33 = (((((var_1 ? var_0 : var_11))) ? var_1 : ((156 ? 0 : 5702))));

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_39 [i_0] = ((-11909 ? 7709263360979955375 : 1));

            /* vectorizable */
            for (int i_11 = 1; i_11 < 8;i_11 += 1)
            {
                var_34 = ((var_3 ? var_6 : var_3));
                arr_43 [i_0 - 1] [i_11] [i_0 - 1] [i_11 + 2] = ((var_17 ? var_6 : var_19));
            }

            /* vectorizable */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_35 = (var_2 ? var_16 : var_4);
                arr_47 [i_12] [i_10] [i_10] [i_0 - 2] = ((-1 ? 25 : 3644489969));
                var_36 = ((var_10 ? var_6 : var_1));
                var_37 = (max(var_37, (((8774041331968632598 ? 21811 : 3)))));
                arr_48 [i_12] [i_10] [i_0] &= var_7;
            }
            var_38 = (((((var_7 ? var_9 : var_15))) ? ((var_16 ? var_12 : var_15)) : var_4));
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            arr_51 [i_13] = (((((1966080 ? 1 : 8))) ? (((var_7 ? var_1 : var_3))) : var_11));
            arr_52 [i_13] [i_13] [i_13] = var_16;
            arr_53 [i_13] [i_13] = (((((var_16 ? var_16 : var_13))) ? ((var_9 ? var_19 : var_6)) : (((var_13 ? var_19 : var_12)))));
            var_39 *= (((((var_18 ? var_4 : var_5))) ? ((var_17 ? var_11 : var_11)) : ((var_10 ? var_18 : var_12))));
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 9;i_14 += 1)
        {
            var_40 = var_15;
            arr_58 [i_0] [i_0] [i_0] = ((var_5 ? var_16 : var_1));
            var_41 *= var_6;
            var_42 = ((190139309 ? 0 : -9223372036854775803));
            arr_59 [i_0] = (((((var_18 ? var_18 : var_3))) ? var_4 : var_17));
        }
        /* vectorizable */
        for (int i_15 = 2; i_15 < 8;i_15 += 1)
        {
            var_43 = (min(var_43, var_18));
            var_44 = ((var_11 ? var_15 : var_12));
            arr_64 [i_15] = ((var_3 ? var_4 : var_1));
            arr_65 [i_0 - 1] [i_15] = ((224 ? 4448 : -16721));
        }
    }
    for (int i_16 = 2; i_16 < 9;i_16 += 1) /* same iter space */
    {
        arr_68 [i_16] = ((var_11 ? (((var_2 ? var_9 : var_0))) : ((var_0 ? var_12 : var_15))));
        var_45 = (max(var_45, var_12));
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 20;i_17 += 1)
    {
        var_46 = (min(var_46, (((var_9 ? var_16 : var_11)))));
        var_47 = var_17;
    }
    for (int i_18 = 2; i_18 < 17;i_18 += 1)
    {
        var_48 &= var_11;

        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            var_49 = (((((var_4 ? var_17 : var_3))) ? ((var_3 ? var_8 : var_13)) : (((-3049576576765780779 ? -111 : -16739)))));
            arr_76 [i_19] [i_18 + 1] [i_18 + 2] = (((((var_5 ? var_15 : var_10))) ? ((var_0 ? var_8 : var_11)) : var_14));
            var_50 = (max(var_50, var_3));
            var_51 = (min(var_51, ((((((var_7 ? var_8 : var_19))) ? ((var_0 ? 21815 : var_15)) : var_19)))));
        }
        for (int i_20 = 0; i_20 < 19;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 19;i_22 += 1)
                {
                    {
                        arr_86 [i_22] [i_20] [i_21] [i_20] [3] [i_18 + 2] = var_11;
                        arr_87 [i_21] &= var_17;
                    }
                }
            }
            arr_88 [i_18] = var_16;
            arr_89 [i_20] = var_5;
        }
    }
    #pragma endscop
}
