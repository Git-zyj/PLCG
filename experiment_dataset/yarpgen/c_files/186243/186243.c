/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_10 = 15955164864773421678;
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = 13;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_11 -= ((!(arr_14 [i_1 + 1] [i_1 + 1] [0] [i_2] [i_5])));
                            var_12 ^= (arr_12 [i_1 + 1] [i_1 + 1]);
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            var_13 ^= ((((((arr_2 [i_2]) ? 0 : 16357739727892467117))) ? var_0 : (var_3 && var_6)));
                            arr_22 [i_0] [i_1] [1] [i_4] [i_0] = -var_7;
                            var_14 = (min(var_14, var_2));
                        }
                        arr_23 [i_0] = (((arr_7 [i_1 + 1] [i_1 + 1] [i_0]) != (arr_20 [i_1 + 1] [i_4] [i_4] [i_0] [i_4])));
                        arr_24 [i_0] [i_0] [i_2] [i_0] = (arr_10 [i_0] [i_1 + 1] [i_1] [i_1 + 1]);
                        arr_25 [i_0] [i_0] [i_2] [i_2] [i_4] = (((-50 <= 8318875652216997076) ? var_3 : (-3 % 1)));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        arr_28 [i_7 + 2] [i_1 + 1] [i_2] [i_0] = arr_15 [i_1] [i_0];

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_7 - 1] [i_0] = -1318081095;
                            var_15 = ((1 ^ ((0 & (arr_3 [i_1] [i_1 + 1] [i_2])))));
                            arr_33 [i_7 + 2] [i_0] [i_7] [4] [i_7] [i_7 - 1] = arr_6 [i_8] [i_0] [i_0];
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_36 [i_9] [i_2] [i_0] [i_9] [i_2] = (!-35631220);
                            arr_37 [i_7] [i_7] [i_0] [i_7] = (21 % 15);
                            var_16 = (max(var_16, var_9));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_40 [i_0] [1] [i_2] [i_2] [i_10] = (((-798 * 0) ? -239 : var_1));
                            arr_41 [i_0] = (var_5 && var_3);
                        }

                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            var_17 -= var_0;
                            arr_44 [i_11 - 1] [i_0] [i_0] [i_0] [i_0] = 15508;
                            arr_45 [i_0] [i_0] [i_0] [i_7] [i_0] [i_11] = -53;
                            var_18 = var_9;
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_19 ^= 1;
                        var_20 -= (arr_12 [i_1 + 1] [i_1 + 1]);
                    }

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {

                        for (int i_14 = 2; i_14 < 9;i_14 += 1)
                        {
                            var_21 = (min(var_21, 1));
                            var_22 ^= ((-120 ? 28867 : (((!(arr_26 [1] [i_13] [6] [i_1 + 1] [1]))))));
                            var_23 -= (((!var_3) ? var_8 : var_0));
                            var_24 ^= 227;
                            var_25 ^= (var_1 != 228);
                        }
                        var_26 = (min(var_26, -9));
                    }

                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 0;
                            arr_62 [i_0] [i_0] [i_0] [i_0] = 1;
                            var_27 = var_7;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, (arr_6 [i_17] [6] [i_0])));
                            arr_67 [i_1] [i_1] [i_1] [i_15] [i_17] [i_17] [i_0] = ((((var_8 ? (arr_30 [i_0] [i_0] [i_2] [i_15] [i_17]) : 9223372036854775807)) << (1857064752 - 36631)));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                        {
                            arr_70 [i_0] [i_0] [i_0] [i_0] [i_15] [i_18] = (!((min((((!(arr_47 [i_2] [i_0])))), ((3110874442 ? var_5 : (arr_11 [8] [8])))))));
                            arr_71 [i_0] = ((1 && (var_8 * var_2)));
                            var_29 = var_7;
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            var_30 -= (!0);
                            arr_74 [i_0] [i_1] [i_2] [i_1] [i_0] = (~-var_9);
                            var_31 = (arr_16 [i_19] [i_0] [i_15] [i_15] [i_0] [i_0]);
                        }
                        arr_75 [i_15] [i_0] [i_0] [i_0] = (~var_3);
                        var_32 ^= 4125843777;
                    }

                    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        var_33 = (max(var_33, var_2));
                        arr_79 [i_0] [i_0] [i_20] [i_20] [i_20] [i_0] = (((1 * 0) ? var_0 : (((!(47957 || 3163416150))))));
                        var_34 = (arr_7 [i_0] [i_1 + 1] [i_0]);

                        /* vectorizable */
                        for (int i_21 = 1; i_21 < 1;i_21 += 1)
                        {
                            arr_83 [i_0] [i_1 + 1] [9] [i_1] [i_1 + 1] [i_1 + 1] [i_0] = var_0;
                            arr_84 [i_0] [i_0] [i_2] [i_20] [i_21] = (((arr_57 [i_0] [i_1 + 1] [i_1 + 1]) && (!0)));
                        }
                    }
                    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                    {

                        for (int i_23 = 0; i_23 < 11;i_23 += 1)
                        {
                            var_35 -= -106;
                            arr_90 [i_0] [i_1 + 1] [i_0] = (((min(1, -1))) / (((arr_46 [i_2] [i_2] [i_1 + 1] [i_22] [i_0] [i_1]) - -15)));
                            var_36 = (min(var_36, ((min((-85 ^ 3404521959), (((-101 ? 33554428 : (min(-59, 1779431048))))))))));
                        }
                        var_37 = ((((max(44, 1))) ? 8087658543899234629 : ((((var_3 != (arr_81 [i_22] [i_2] [i_0] [i_0] [i_0])))))));

                        for (int i_24 = 0; i_24 < 11;i_24 += 1)
                        {
                            var_38 ^= var_3;
                            var_39 = var_9;
                            arr_93 [i_0] = 11922840;
                            arr_94 [i_0] [i_1] [i_2] [i_22] [0] = 0;
                            arr_95 [i_24] [i_0] [i_2] [i_0] [i_0] = (arr_48 [i_0] [i_1 + 1] [i_1 + 1] [i_2]);
                        }
                    }
                }
            }
        }
    }
    var_40 = (min((~var_8), ((1 * (var_2 <= var_4)))));
    #pragma endscop
}
