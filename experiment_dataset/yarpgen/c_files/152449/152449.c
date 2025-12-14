/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] [i_2] = var_10;

                            for (int i_4 = 1; i_4 < 15;i_4 += 1)
                            {
                                var_13 = (((((var_5 ? ((var_11 ? var_5 : 83)) : ((var_6 ? 168 : var_2))))) ? ((max(var_12, 75))) : 0));
                                var_14 = ((-var_12 ? (min(69, (min(65535, 1104653601473393594)))) : (((~var_7) ? ((max(var_10, 1201226438))) : var_6))));
                            }
                            var_15 = ((min(((1201226432 ? 164 : var_4), 1))));
                            arr_12 [i_0] [i_2] [i_0] [i_0] = ((((min((max(var_5, -1201226438)), (var_8 - -101)))) ? (((max((var_11 <= -32760), 12525)))) : ((var_11 ? 56 : (max(413225206933714092, 5224713563602634560))))));
                            var_16 = ((var_7 && ((((max(var_4, var_3)))))));
                        }
                    }
                }
                var_17 = (max((((~112) ^ (74 ^ var_6))), var_9));
                arr_13 [i_0] [i_1] [i_1] = (101 * (((var_6 == (var_10 / 921495620185343127)))));

                /* vectorizable */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    arr_16 [i_0] [i_5] [i_0] [i_0] = ((1 ? var_12 : var_1));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_18 = -var_11;
                        var_19 = (!0);

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_25 [i_0] [i_5] [i_5 + 2] [i_6] [i_0] = (var_7 - 18446744073709551615);
                            arr_26 [i_7] [i_5] [i_5 + 1] = ((var_7 ? (!50868) : ((var_0 ? 607665453 : var_8))));
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            arr_29 [i_0] [i_5] [i_6] [i_6] [i_6] = (~42);
                            arr_30 [i_1] [i_5 - 1] [i_5] [i_8 + 1] = (((var_7 ? var_11 : var_11)));
                            var_20 = (max(var_20, var_0));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_21 = (((((var_8 ? var_8 : var_11))) ? var_7 : -17977));
                            arr_34 [i_9] [i_5 - 1] [i_5] [i_6] [i_9] [i_6] = 1;
                            arr_35 [i_0] [i_5] = ((1 % 111) && 3687301839);
                            var_22 *= ((4227557624 ? var_1 : var_11));
                            var_23 = -var_2;
                        }
                        var_24 = 3;
                        var_25 = var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = var_3;
                                arr_41 [i_10 - 1] [i_1] [i_5] [i_10 + 2] [i_0] [i_0] [i_1] = -380997111;
                            }
                        }
                    }
                    var_26 -= (var_11 ? (var_1 / 1600474047) : ((var_7 ? var_6 : var_10)));
                    var_27 = (max(var_27, (1 && var_5)));
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    var_28 = (var_10 > var_9);
                    arr_46 [i_0] [i_12] = var_3;

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_29 = 1;

                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            arr_53 [i_14] [i_13] [i_12] [i_12] [i_1] [i_0] [i_0] = 3218917002831454968;
                            arr_54 [2] |= (min((!var_6), (min(114, 4294967287))));
                            var_30 = ((((var_2 != var_11) >= (var_5 != 50868))) ? (max(9027976923983952820, (~var_6))) : var_9);
                        }
                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 14;i_15 += 1)
                        {
                            var_31 |= ((32758 >> (171 - 165)));
                            var_32 = var_6;
                            var_33 = (min(var_33, ((((((-1079082121 + 2147483647) >> (32764 - 32737))) <= (var_5 != var_9))))));
                            var_34 = (min(var_34, (((var_7 ? -103 : var_1)))));
                        }
                        arr_58 [i_1] [i_1] [i_12] = (max(1, var_3));
                    }

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        arr_61 [i_0] [i_12] [i_12] [i_16] [i_12] [i_0] = 2923;
                        var_35 = var_7;
                    }
                    var_36 += (((((~(57496 & 34913)))) ? (min(var_7, ((max(var_3, 0))))) : ((-32763 ? 30621 : -112))));
                }
            }
        }
    }

    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        var_37 = ((var_9 ? var_6 : ((var_8 ? (max(50, var_6)) : var_0))));
        arr_65 [i_17] = var_8;
    }
    var_38 = (max(var_1, (var_12 == var_4)));
    #pragma endscop
}
