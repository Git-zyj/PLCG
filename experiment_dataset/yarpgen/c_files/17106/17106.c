/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((var_5 ? ((-127 ? (min(var_9, 9515132323868131176)) : (((7693330457905687471 ? var_3 : 144))))) : (((((4259897076 >> (2181431069507584 - 2181431069507575)))) ? 81 : (((arr_4 [i_0]) ? 7693330457905687483 : 9532386481164054257))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_10 = (min(var_10, 16787589488383614092));
                        var_11 = ((127 / (arr_7 [i_0] [i_0])));
                        var_12 = (max(var_12, 162));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_13 = (min(var_13, 28));
                        arr_17 [i_0] [i_1] [i_0] = 106;
                        arr_18 [20] [i_0] = (((((var_6 ? 47 : var_6))) + ((var_3 ? 21 : var_5))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_14 = 9532386481164054257;
                            arr_25 [i_0] [i_1] [i_5] [i_0] = var_7;
                        }
                        arr_26 [i_0] [0] [18] [i_2] [i_5] = 42386;
                        arr_27 [i_0] [i_0] [i_2] [1] = (!((!(arr_12 [i_0] [i_0 + 1] [15] [i_0] [i_0 + 1] [i_0]))));
                    }
                    var_15 |= var_4;
                    arr_28 [i_0] [i_1] [i_0] = (arr_5 [i_0 - 1]);

                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_16 = 13082734595864887762;
                        arr_31 [i_7] [i_7] [i_7] [i_0] [6] [i_7] = ((!(var_0 <= var_6)));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [20] = ((var_4 != (1 * var_2)));
                            var_17 = -var_3;
                            arr_38 [i_0 + 1] [i_0] [i_2] [17] [15] = 1;
                            arr_39 [i_0] [i_1] [i_0] [i_8] [i_1] = (!65520);
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_8] [i_8] [i_8] [i_8] [i_0] = ((147 >= (arr_15 [i_10] [i_2 - 1] [i_1 - 1] [i_0])));
                            arr_44 [i_10] [i_0] [16] [i_0] [16] = (4294967277 + 0);
                            var_18 = (max(var_18, 36));
                            var_19 -= var_5;
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            var_20 = ((18446744073709551606 > (((67108863 ? (arr_29 [i_0] [i_1] [i_2] [i_0] [i_11]) : var_3)))));
                            var_21 = ((~(arr_0 [i_0])));
                        }

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_22 ^= var_1;
                            var_23 = (1 * 14);
                            var_24 = (max(var_24, (1659154585325937524 / 18446744073642442752)));
                        }
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            arr_53 [16] [i_0] [16] [i_8] [16] [17] = var_3;
                            var_25 += ((var_4 ? 64 : (~1)));
                        }
                        var_26 -= (((var_7 && var_8) ? (arr_15 [i_0 - 1] [i_0] [i_0] [i_0 - 2]) : (arr_46 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 1])));
                        var_27 = ((var_4 ? var_2 : -var_0));
                        arr_54 [i_0 - 2] [14] [i_2] [i_0] [4] = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 21;i_15 += 1)
                        {
                            {
                                arr_60 [i_0] [2] = 1659154585325937554;
                                var_28 = var_2;
                            }
                        }
                    }
                }
                for (int i_16 = 3; i_16 < 22;i_16 += 1) /* same iter space */
                {
                    var_29 = (arr_2 [i_0]);
                    var_30 = ((min(-30666, ((var_1 >> (var_5 + 56))))));
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 20;i_17 += 1)
                    {
                        for (int i_18 = 3; i_18 < 22;i_18 += 1)
                        {
                            {
                                arr_67 [i_0] [i_1] [i_16] [i_17 - 2] [i_0] [i_1] = ((+(((((-1 ? (arr_30 [10] [i_1] [i_0] [15] [i_18] [i_0]) : -88824821)) > (18446744073642442752 * var_1))))));
                                var_31 = (max(var_31, (((~((38156 ? 1 : (arr_11 [i_1] [6] [i_18 - 1] [10]))))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_19 = 3; i_19 < 22;i_19 += 1) /* same iter space */
                {
                    var_32 = (min(var_32, ((((arr_13 [i_19] [i_19] [i_19] [i_1] [1]) ? var_7 : ((var_2 ? var_9 : var_1)))))));
                    var_33 = ((var_7 ? (arr_68 [i_0 - 3] [i_1 - 1] [i_19 + 1] [i_19]) : 536805376));
                    arr_70 [i_0] [i_1] [i_1] [i_1] = (var_1 ? (arr_45 [i_19 - 2] [i_0] [i_1 - 1] [i_0] [i_0]) : var_1);
                }
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    arr_75 [i_0] [i_1] [13] = ((-(15212 / var_9)));
                    arr_76 [i_0] [i_1] = var_3;
                    var_34 ^= (~(arr_12 [i_0 - 1] [i_0 - 1] [i_1] [0] [i_20] [i_1]));
                }
            }
        }
    }
    var_35 = ((var_3 ? var_0 : (((((var_6 ? var_6 : var_5)) < var_1)))));
    #pragma endscop
}
