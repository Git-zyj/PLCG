/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max((arr_0 [i_0]), (((((var_6 ? var_11 : var_11))) ^ ((~(arr_1 [i_0] [i_0])))))));
                var_20 = ((~(max(((max(1, 1))), (min(4294967276, var_15))))));
                arr_6 [i_0] [i_1] [i_1] = max((((1632045440 / 72057594037923840) != (!7))), (min((0 <= 28079), (((arr_4 [i_1]) >= var_16)))));
                arr_7 [i_0] [i_1] = (((~var_6) * (((var_1 ^ (var_4 < var_4))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = ((((min(4294967274, (arr_12 [i_0] [i_1] [i_0] [i_2] [i_2])))) ? (((arr_2 [i_2] [i_1] [i_0]) - -9)) : (min(var_17, (arr_12 [i_3] [i_0] [i_0] [i_4] [i_4])))));
                                var_22 = (((((arr_5 [i_2]) == (2147483647 && 3))) || (((~(min(-1892518681, 0)))))));
                                var_23 = (arr_5 [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_24 = (max((!var_0), (((arr_15 [i_5]) % -3959871716712933209))));
        arr_17 [i_5] = (((((196 ? 10982 : 24))) ? (max(4278190080, 12)) : ((((var_14 == (arr_16 [i_5] [i_5])))))));

        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            arr_20 [i_5] = (~1);
            var_25 = (((((((var_5 >> (arr_19 [i_6]))) % 65535))) ? var_5 : (((10 ? var_10 : 85)))));
            arr_21 [i_5] = var_18;
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            var_26 = var_17;
            var_27 = (max(var_13, (min(((min((arr_23 [i_5] [17] [i_5]), 1))), (arr_16 [i_5] [i_5])))));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_35 [i_5] [i_5] [i_5] [i_10 - 2] [17] = ((((((!var_6) == ((~(arr_16 [i_5] [i_11])))))) != (((min(var_15, var_7))))));
                            arr_36 [i_5] [i_8] [i_5] [i_10] [i_5] [i_5] = (~(((!((1 != (arr_29 [i_5] [i_5] [i_8] [i_10 - 2])))))));
                        }
                    }
                }
            }
            var_28 = ((((max(2694, -23369)))) < var_6);
            arr_37 [i_5] [i_8] [i_8] = (max(2967290429, var_3));
            var_29 = ((var_14 ? (((((max(4, 1)))) - (57132 / 4294967295))) : ((min((max(-298331221, (arr_16 [i_5] [13]))), (((!(arr_15 [i_5])))))))));
        }
        var_30 = ((~(40 == var_13)));
        var_31 = (arr_19 [0]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_41 [i_12] = var_11;

        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            arr_44 [i_13] [i_13] = (((arr_25 [i_12] [i_13]) && (arr_25 [i_12] [i_13])));
            var_32 = (((66060288 ? var_7 : var_11)) << 1);
            var_33 = var_6;
            arr_45 [i_13] [i_13] = ((var_3 != (arr_43 [i_12])));
        }
        for (int i_14 = 1; i_14 < 17;i_14 += 1)
        {
            var_34 = (arr_46 [i_14]);
            var_35 = 1;
            arr_49 [i_14] [i_14] = (((arr_28 [i_12] [i_14 + 2] [i_14 + 2] [i_12]) & (arr_26 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 2])));
        }
        arr_50 [i_12] = (((!1) ^ (2 + 1)));

        for (int i_15 = 1; i_15 < 17;i_15 += 1)
        {
            var_36 = (((var_10 != var_1) && (99 != 3828)));
            var_37 = (((((4294967289 >> (55471 - 55465)))) ? ((-8090 ? 127 : 1536)) : 1));
        }
        arr_53 [15] = ((14 ? 29971 : 1));
    }
    #pragma endscop
}
