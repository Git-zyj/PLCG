/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_6));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = ((((~(arr_1 [i_0]))) / (((arr_0 [i_0] [i_0]) ? 1 : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (((((((!1) >= var_13)))) / (arr_4 [i_2 + 1])));
                    arr_9 [i_1] = (((((arr_7 [i_0] [i_1] [i_2]) / (arr_7 [i_0] [i_0] [i_2]))) / 71));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_17 = (((!var_1) - (arr_6 [i_2 + 4] [i_3] [i_3] [i_3])));
                        var_18 ^= ((3005199602624329051 * ((3 ? 1 : var_9))));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_19 = (min(var_19, ((-((205 | (arr_7 [i_2 + 2] [i_2 + 3] [i_4 + 1])))))));
                        var_20 |= ((((arr_3 [i_0] [i_4 + 2]) ? (arr_11 [i_4] [i_4] [i_4] [i_4 + 2]) : 1)));
                        arr_15 [i_0] [i_1] [i_2] [i_4] = 1;
                        var_21 = ((1490416494 ? 1 : (((arr_6 [i_4 - 2] [i_4] [i_4] [i_2 + 4]) | (arr_6 [i_4 - 2] [i_2] [i_2] [i_2 + 4])))));
                    }
                    var_22 = ((-1152921504606846976 / ((((arr_5 [i_0] [i_1] [i_1] [i_2]) << 1)))));
                }
            }
        }
    }
    var_23 = var_9;
    var_24 = ((((min(13, var_7))) ? 33285996544 : 51));

    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = ((5332335288480731793 ? (arr_6 [i_5] [i_5] [i_5] [i_5 + 1]) : 1));
        var_25 = 1;
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        var_26 = (((((var_14 ? var_8 : (arr_11 [i_6] [i_6] [i_6 - 3] [i_6])))) ? 66 : (((8388607 * var_1) ? ((185 ? 1 : 28)) : ((((arr_19 [i_6] [i_6]) <= 45)))))));
        var_27 |= (((((65522 ? 214 : ((32754 ? 2147483639 : 213))))) >= (239 ^ 2631563883513167577)));
        var_28 &= (117 == -16922);
        var_29 -= (22 < 2046);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_30 = (5871335543244425707 / -3752796531235211168);
            var_31 = (var_6 ^ var_6);
            var_32 = var_12;
            var_33 &= (1994 % var_12);
        }
        arr_28 [i_7] |= (-28855 ? 12 : 147);

        for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_34 = (var_14 & var_13);
            var_35 ^= ((-1085269559 ? 54 : 1085269558));

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_38 [i_7] [i_9] [i_10] [i_9] [i_12] = (var_13 > 8192);
                            arr_39 [i_9] [i_9] [i_10] [i_11] [i_12] = (~3005199602624329041);
                            var_36 = (!var_9);
                        }
                    }
                }
                var_37 ^= (((((arr_31 [i_10] [i_10] [i_9] [i_7]) << (var_12 - 1355118730786476089))) / 73));
                arr_40 [i_9] [i_9] [i_10] = arr_11 [i_10] [i_9] [i_7] [i_7];
                var_38 = (max(var_38, (arr_0 [i_7] [i_9 + 2])));
            }
        }
        for (int i_13 = 3; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_39 = var_5;
            var_40 |= 1;
        }
        for (int i_14 = 3; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_41 = (max(var_41, (9223372036854775797 < 1)));
            arr_45 [i_7] [i_14] = ((arr_10 [i_14] [i_14] [i_7] [i_14] [i_14 + 2] [i_14]) - (arr_10 [i_14] [i_14] [i_7] [i_14] [i_14 - 2] [i_14]));
        }
    }
    #pragma endscop
}
