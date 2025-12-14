/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((((min((max(23803, (arr_2 [i_0]))), (!1)))) ? (arr_2 [i_0]) : (!var_12))))));
        var_21 = (19 ? 1 : ((((arr_2 [i_0]) / var_1))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_22 = ((~(min((arr_1 [i_1]), (arr_4 [13] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    var_23 = ((arr_4 [i_1] [i_1]) ? (((max(1090715534753792, 2945425987759421310)) / -var_17)) : ((((arr_4 [i_1] [i_1]) / (arr_8 [i_1] [i_1] [i_3 - 2])))));
                    var_24 = (max(23808, (arr_1 [i_1])));
                    var_25 *= ((((var_2 / (min(9726931679936904662, -16))))) ? (!1) : 1);
                    var_26 = (min((((min(536870911, (arr_3 [i_3] [i_2]))))), (arr_8 [i_3 + 1] [i_2 - 3] [i_3])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_27 ^= (~var_16);
                                var_28 = ((-(((!(arr_18 [i_4] [i_4]))))));
                                var_29 = (min(var_29, var_16));
                                var_30 -= (arr_13 [i_5 - 4] [i_8 + 1]);
                                var_31 = (max(var_31, ((((var_15 / 536870926) ? -41714 : ((var_2 / (arr_22 [i_4] [i_4] [i_6] [i_7] [i_8 - 1]))))))));
                            }
                        }
                    }
                    var_32 = ((((var_11 ? 34358689792 : (arr_16 [i_4] [i_4]))) * (((arr_10 [i_6]) / var_17))));
                }
            }
        }
        var_33 *= ((+((536870911 ? (arr_22 [i_4] [i_4] [i_4] [i_4] [i_4]) : var_10))));
        var_34 *= ((var_18 ? var_11 : (arr_18 [i_4] [i_4])));
        var_35 ^= -var_10;
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_36 = (1 + 2);

        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_37 = -16726604230610689484;
                var_38 -= (-((4944 ? (max(var_13, 65535)) : 1720139843098862148)));
            }

            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                var_39 = (min(var_39, ((((arr_29 [i_12] [i_10] [i_10] [0]) ? (((-9223372036854775807 - 1) / -1143521534610486098)) : (!-1143521534610486081))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_40 = ((((((arr_28 [i_13] [i_12] [i_10] [i_9]) / (arr_28 [i_14] [i_13] [i_12] [i_9])))) ? (arr_28 [i_14] [i_13] [i_9] [i_9]) : (((arr_28 [i_14] [i_13] [i_12] [i_9]) ? (arr_8 [i_14] [i_10] [i_9]) : (arr_8 [i_14] [i_13] [i_12])))));
                            var_41 ^= ((-((max((max(2, (arr_5 [i_12] [i_9]))), (arr_36 [i_14] [i_12] [i_13] [i_12] [i_12] [i_9]))))));
                        }
                    }
                }
                var_42 = ((min(((((arr_18 [i_9] [i_10]) / var_16))), ((181 ? (arr_7 [i_12] [4] [i_9]) : 4)))));
                var_43 ^= (-((-108 ? 357199236 : (arr_35 [i_12] [i_10] [i_9] [i_9]))));
            }
            var_44 = 357199236;
        }
        var_45 *= ((!((!(((var_10 ? 16776704 : var_12)))))));

        /* vectorizable */
        for (int i_15 = 3; i_15 < 18;i_15 += 1) /* same iter space */
        {
            var_46 = ((var_11 ? (arr_15 [i_15 - 2] [i_15 + 1] [i_15 + 2]) : (arr_27 [i_9] [i_15] [17])));
            var_47 = (min(var_47, ((((arr_21 [i_15] [i_15] [i_9]) ? (arr_10 [i_15 - 2]) : var_10)))));
            var_48 = -17509477359695427911;
            var_49 = ((((var_3 ? (arr_19 [9] [16] [i_15] [24]) : 16776704)) / 98));
        }
        /* vectorizable */
        for (int i_16 = 3; i_16 < 18;i_16 += 1) /* same iter space */
        {
            var_50 = ((2 ? (~4398042316800) : (((~(arr_37 [i_9] [i_9] [9] [i_9]))))));
            var_51 = arr_39 [i_16] [i_16 + 2] [i_16 + 2] [i_16 - 2] [i_9];
            var_52 = (min(var_52, (~-2147483626)));
        }
    }
    var_53 = ((var_18 ? (!-1) : var_2));
    var_54 = var_3;
    var_55 |= (!-2147483626);
    #pragma endscop
}
