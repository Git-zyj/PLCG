/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((max(9, var_4)) * ((var_6 ? var_0 : var_3))))));
    var_11 ^= ((var_7 * (min(var_2, var_3))));
    var_12 = (max(var_12, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_1] |= (((!7) != ((var_8 ? var_6 : (arr_4 [i_2])))));
                    var_13 = (((((7 ? var_1 : 18456))) ? (~var_0) : 9223372036854775807));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    arr_11 [i_0] = (!var_4);
                    var_14 ^= (arr_5 [i_1] [i_0]);
                    var_15 &= ((-(arr_4 [6])));
                    var_16 |= (arr_8 [i_3]);
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_17 = -33;
                    arr_16 [i_0] [i_0] [i_0] [i_0] = var_8;
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] = (((var_8 + var_6) ? (arr_13 [i_0] [i_1] [i_1]) : var_3));

                    for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_18 ^= var_1;
                        var_19 = (((var_4 != -7589731646017956519) != (((arr_5 [i_0] [i_0]) ? (arr_8 [i_0]) : var_1))));
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_20 = var_4;
                        arr_27 [i_0] [7] = ((-((var_9 ? 0 : var_1))));
                    }
                    for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_21 = (arr_25 [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_5] [i_5]);
                        var_22 -= 5476;
                    }
                    for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 3; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_23 = (((~var_9) ? (((var_3 ? var_3 : (arr_8 [i_0])))) : ((var_9 ? 0 : 13497483899863232807))));
                            arr_34 [i_0] [i_0] = ((!(arr_5 [i_9 + 2] [i_10])));
                        }
                        for (int i_11 = 3; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            arr_37 [15] [i_1] [i_1] [i_9] [i_11] = var_5;
                            var_24 = 260096;
                            var_25 = (max(var_25, ((((((arr_19 [i_0] [i_0] [i_0] [i_0]) ? 1 : 47072)) ^ 151)))));
                        }
                        var_26 = (~var_0);
                    }
                    arr_38 [i_0] [i_0] [i_0] = (arr_17 [i_0] [i_0] [i_5]);
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_47 [i_0] [i_12] [i_0] = -0;
                                var_27 = 1;
                                arr_48 [i_0] [i_12] [i_0] [i_0] [i_12] [i_0] = (((~(min(var_4, var_1)))));
                                arr_49 [i_12] = ((~(arr_1 [i_0])));
                            }
                        }
                    }
                    var_28 = (((((max(18456, var_2)) ? ((var_1 ? 0 : (arr_5 [i_12] [i_0]))) : (((var_1 ? -50 : var_3)))))));
                    var_29 = (max((((arr_33 [i_0] [i_0] [i_0] [i_1] [i_1] [i_12]) / var_6)), (((var_0 ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : (!47080))))));
                }
                /* vectorizable */
                for (int i_15 = 1; i_15 < 19;i_15 += 1)
                {
                    var_30 = ((-23837 * ((-(arr_45 [i_0] [i_0] [i_0] [i_0] [i_0])))));

                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_58 [i_0] [i_0] [i_15] = ((!(arr_50 [i_15])));
                            arr_59 [i_15] [i_1] [i_15] [i_16] [4] [i_1] [i_17] = (!(!var_7));
                            var_31 *= 1;
                        }
                        for (int i_18 = 1; i_18 < 18;i_18 += 1)
                        {
                            var_32 = (max(var_32, var_2));
                            arr_64 [i_0] [i_15] [i_0] [i_16] [i_18] = ((var_8 ? (((var_6 ? (arr_1 [i_0]) : var_4))) : 4294967295));
                            arr_65 [i_0] [i_1] [i_0] [i_18] [i_15] [i_18] = (((~4294967295) ? (arr_52 [i_18 - 1] [i_15 + 1]) : ((((!(arr_40 [i_0] [i_1] [i_0] [i_16])))))));
                            var_33 = (arr_17 [13] [i_15] [i_0]);
                            var_34 = var_1;
                        }

                        for (int i_19 = 2; i_19 < 18;i_19 += 1)
                        {
                            var_35 = (min(var_35, 1));
                            var_36 -= ((((var_5 ? var_8 : var_5))) ? -var_1 : ((var_4 ? (arr_54 [i_19] [i_16] [2] [i_1] [i_0]) : (arr_10 [i_0] [i_0]))));
                            var_37 -= ((!(arr_63 [i_15 + 1] [i_19 + 2] [16] [i_16])));
                            arr_70 [i_0] [i_1] [i_1] [i_15 - 1] [i_16] [i_19 + 2] [i_15] = ((4294967278 ? 4294967283 : 18456));
                        }
                    }
                }
                var_38 = (arr_12 [i_0] [i_0]);
                var_39 = ((1 ? ((47080 ? ((var_9 ? 18454 : var_3)) : 1)) : (-32767 - 1)));
            }
        }
    }
    var_40 -= (~var_8);
    #pragma endscop
}
