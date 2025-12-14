/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_10 ^= (arr_1 [i_0 + 3]);
        var_11 = (((arr_0 [i_0]) ? ((16777215 ? -7148406949325271063 : -7148406949325271091)) : ((-30260 ? 7148406949325271057 : (arr_0 [i_0])))));
        arr_4 [11] = ((((((arr_3 [1]) ? 7148406949325271063 : ((var_1 ? 18446744073709551611 : var_6))))) ? (((!(((var_0 ? (arr_3 [i_0]) : var_9)))))) : 15814309267492817265));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (((!(arr_2 [i_1]))))));
        arr_7 [i_1 + 3] [i_1] &= (14105640851143325181 & 13680);
        var_13 = (max(var_13, var_6));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_14 += var_5;
        var_15 = (max(var_15, 9507795028336786515));
    }
    var_16 = var_3;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_13 [i_3] = var_0;
        arr_14 [i_3] = (144115185928372224 ? 18446744073709551596 : 7148406949325271062);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_5] [i_3] = var_5;
                    arr_22 [i_5] [i_4] [i_5 - 2] = ((~(18446744073709551615 <= 3582570320591460530)));
                    var_17 = (var_3 ? (((arr_17 [i_3] [i_4] [i_5]) >> (var_2 - 43650))) : var_2);
                    var_18 = var_6;
                    arr_23 [i_5] [17] [i_4] [i_5] = arr_20 [i_5 + 2] [i_5 - 1] [i_5] [i_5];
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_19 = arr_6 [i_6];
        var_20 = 22860;
        var_21 = (arr_19 [i_6] [i_6] [i_6] [i_6]);
        var_22 = 7281302976882358950;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        arr_29 [14] [i_7] = var_4;
        arr_30 [i_7] [i_7] = var_5;
        var_23 &= ((65535 & (((!(arr_10 [i_7]))))));
    }
    for (int i_8 = 3; i_8 < 8;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    arr_39 [i_8] [i_9] [i_8] = ((((9223372036854775805 ? -1 : -1427083933355334642))) ? (arr_15 [i_8 + 2]) : (arr_19 [i_8 + 2] [i_8] [i_8 - 3] [i_8 - 2]));

                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        var_24 = var_7;
                        var_25 = (max(var_25, ((((((((3582570320591460529 ? -9223372036854775795 : var_7))) ? var_8 : -42123)) > (arr_37 [i_10] [i_10] [i_10]))))));
                        var_26 = 42655;
                        arr_44 [i_8 + 2] [i_9] [i_10] [i_11] = ((((var_0 ^ (arr_3 [i_8 - 1])))) ? (arr_3 [i_8 - 3]) : var_9);
                        var_27 = var_5;
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {
                        var_28 = -2320687565287861121;
                        arr_47 [i_8 + 2] [i_9] [i_10] [i_12 + 2] = (arr_19 [i_8 - 1] [i_12 + 1] [i_12 + 2] [7]);
                        var_29 = (max(var_29, ((((arr_5 [i_8 - 1]) - 14490869037429946319)))));
                        var_30 -= 25184;
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_31 = (28050 ? var_0 : 11165441096827192649);
                        var_32 -= 4517362329402670310;
                        var_33 = (min(var_33, (arr_42 [i_8 - 2])));
                        var_34 = var_1;

                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 8;i_14 += 1)
                        {
                            var_35 = (arr_53 [i_8] [i_8 - 1] [i_13]);
                            arr_54 [i_14] [i_9] [i_9] [i_9] [4] [4] = (((arr_38 [i_14 + 2] [4] [i_8 + 2] [i_13]) ? (arr_38 [i_13] [i_9] [i_10] [i_10]) : (arr_46 [i_8 - 1] [i_8 - 1] [i_14 + 1] [i_8 - 1])));
                        }
                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            var_36 += -2682973790419197525;
                            var_37 -= arr_58 [i_8] [8] [i_10] [i_13] [i_10];
                            var_38 = ((var_8 ? var_3 : (!var_0)));
                            var_39 = (max(var_39, -var_6));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            var_40 = (min(var_40, var_9));
                            var_41 ^= (!var_8);
                            arr_63 [i_8] [6] [0] = var_1;
                        }
                        for (int i_17 = 2; i_17 < 9;i_17 += 1)
                        {
                            arr_66 [i_8] [i_9] [i_10] = ((var_0 ? (arr_31 [i_17 - 1] [i_8 + 2]) : ((((arr_12 [0] [i_10]) || var_0)))));
                            arr_67 [0] [i_9] [0] [i_13] [0] [i_13] [6] = (((((-7148406949325271072 ? 6917529027641081856 : -1))) ? ((var_8 ? 22695 : (arr_50 [i_9]))) : (var_3 + var_2)));
                        }
                    }
                    arr_68 [i_8] [i_9] [i_10] |= ((!((((arr_3 [i_8 + 2]) ? (arr_3 [i_8 - 2]) : var_3)))));
                }
            }
        }
        var_42 = ((56791 ? var_1 : var_0));
        var_43 = (var_7 || var_5);
        var_44 ^= (((((3009451964164369807 ? 2320687565287861133 : -24395))) ? (arr_9 [i_8 + 2] [i_8 - 2]) : (arr_9 [i_8 + 2] [i_8 + 1])));
        arr_69 [i_8] = (arr_27 [i_8 - 2]);
    }
    var_45 = (max(var_45, var_8));
    #pragma endscop
}
