/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(52571198, (~var_8))), ((min(((var_17 ? var_12 : var_17)), var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (((arr_1 [i_0]) - 52571198));
        var_22 = (3663281844 - ((73 ? var_2 : 52571198)));
        var_23 = (!var_6);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_24 = (((arr_0 [i_1]) ? (arr_0 [i_0]) : var_18));
            var_25 = (min(var_25, (((~(((arr_1 [i_0]) ? 73 : var_19)))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_0] = (arr_3 [i_0] [i_0]);
            arr_8 [i_0] [i_2] [i_2] = var_16;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [9] [i_4] = ((var_15 + 2114975911) - (((arr_4 [i_0] [i_2] [i_4]) ? (arr_0 [i_0]) : 71)));
                        var_26 = -var_15;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_27 = (max(var_27, 33897));
            var_28 |= (((arr_15 [i_0] [i_0]) ? (arr_15 [i_0] [i_0]) : (arr_15 [i_0] [i_0])));

            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
            {
                arr_23 [i_0] [i_5] = (arr_18 [i_0]);

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_29 = (((arr_4 [i_0] [i_5] [i_6]) ? (arr_4 [i_6] [i_6] [i_6]) : (arr_4 [i_7] [i_6] [i_5])));
                    var_30 = (-4521342228297368758 + 25394);
                    var_31 = (min(var_31, (arr_25 [i_0] [i_5] [i_6] [i_6] [i_7])));

                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] [21] &= ((18446744073709551614 ? (arr_12 [i_0] [i_8] [i_6] [i_0] [i_5]) : (arr_12 [14] [i_5] [i_6] [i_0] [i_8])));
                        arr_30 [i_0] [i_0] [i_6] [i_7] [i_0] &= (arr_21 [i_0]);
                        arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [1] &= ((1 ? ((56755 | (arr_28 [i_8]))) : 31638));
                        var_32 &= (arr_25 [i_8 + 1] [i_8 + 1] [i_8 + 1] [4] [21]);
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_34 [i_0] [9] = ((((var_13 ? (arr_21 [i_0]) : 463457078011852483)) - (arr_13 [i_6] [i_6] [i_6] [i_6])));
                        arr_35 [i_7] [i_7] = (((!var_5) ? (arr_22 [i_6] [i_6] [i_9]) : ((((arr_21 [i_5]) != (arr_6 [i_5]))))));
                        var_33 = ((~(((arr_2 [i_5]) ? var_18 : var_12))));
                    }
                }
                for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
                {
                    var_34 = (min(var_34, 0));
                    var_35 = (arr_4 [i_10 + 1] [i_10 + 1] [i_10 + 1]);
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
                {
                    var_36 = ((463457078011852478 ? ((((!(arr_22 [i_0] [i_0] [i_6]))))) : (((arr_0 [i_0]) ? var_14 : (arr_27 [i_0] [i_0])))));
                    var_37 *= 213;
                }
                for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
                {
                    arr_46 [i_12] = (arr_44 [21] [i_12]);
                    arr_47 [i_0] [21] [i_6] [i_6] [i_12] [i_12 + 1] = (arr_21 [i_6]);
                }
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
            {
                arr_50 [i_0] [i_0] [i_5] [i_0] = 18446744073709551598;
                arr_51 [17] [i_5] [i_13] [i_13] = (arr_10 [i_0] [i_5] [i_0] [i_0]);
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 20;i_16 += 1)
            {
                {
                    var_38 = (max(var_38, (arr_9 [i_16] [i_16 + 2] [i_16])));

                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        arr_60 [i_17] [i_17] [i_14] [i_14] [i_15] [i_14] = (((arr_13 [i_14] [i_17] [i_16 + 1] [10]) >= (arr_13 [i_17] [i_14] [i_16 - 2] [i_17])));
                        var_39 = (((arr_26 [i_15] [i_16 - 1] [i_16 + 2] [i_16 + 2] [i_16 - 1] [i_17]) ? (arr_25 [i_16 - 1] [i_16] [i_16 + 1] [i_16 - 1] [3]) : (arr_48 [i_14] [i_15] [i_16 + 1])));
                        var_40 -= (((arr_15 [i_16 - 2] [i_17]) ? (arr_57 [i_14] [i_16 - 2] [i_16] [i_16]) : (arr_15 [i_16 - 2] [i_16])));
                    }
                }
            }
        }
        arr_61 [i_14] = ((511 << (((arr_18 [i_14]) - 23835))));
    }
    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
    {
        var_41 = (max(123, (max(var_16, (arr_37 [i_18] [i_18] [i_18] [i_18] [i_18])))));
        arr_65 [1] = ((52571182 ? (((max((arr_14 [i_18] [i_18] [i_18] [20] [i_18]), (!var_15))))) : (max(-463457078011852478, 0))));
        var_42 = (26125888 - 31638);
        var_43 = (max(248, 7264));
    }
    for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
    {
        var_44 = (min((((arr_5 [i_19] [i_19] [i_19]) ? (arr_5 [i_19] [i_19] [i_19]) : (arr_42 [18]))), (((arr_5 [i_19] [i_19] [i_19]) ? 255 : (arr_5 [i_19] [i_19] [i_19])))));

        for (int i_20 = 0; i_20 < 22;i_20 += 1)
        {
            var_45 = (max(var_45, var_12));
            arr_70 [i_20] = (max((min((max(0, (arr_33 [i_19] [i_19]))), var_19)), ((min(8780, (var_11 ^ -1))))));
            /* LoopNest 2 */
            for (int i_21 = 3; i_21 < 21;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 22;i_22 += 1)
                {
                    {
                        var_46 -= ((236 ? (arr_0 [i_20]) : ((((arr_57 [i_21 - 2] [i_21] [i_21 - 3] [i_21]) ? (arr_41 [i_19] [i_22] [6] [i_22]) : (max(116, 1210402448)))))));
                        var_47 = (((((((18446744073709551615 | (arr_69 [i_19] [i_20]))) - (arr_14 [i_22] [i_20] [8] [i_20] [i_19])))) ? (max((max((arr_13 [i_19] [i_21] [i_20] [i_19]), (arr_1 [i_22]))), (arr_21 [i_21 + 1]))) : ((((!(var_7 - var_3)))))));
                        var_48 = ((!((((arr_69 [i_21 + 1] [i_21 - 3]) ? (arr_69 [i_21 - 3] [i_21 - 1]) : (arr_69 [i_21 - 2] [i_21 - 1]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 22;i_23 += 1)
        {
            var_49 = (((249 ? -7264 : (arr_62 [i_19] [i_23]))));
            var_50 = (238 - 7267);
        }
        for (int i_24 = 0; i_24 < 22;i_24 += 1)
        {
            var_51 = var_17;
            arr_82 [i_19] = ((4033392520182562297 - (arr_73 [12] [12] [i_24] [i_24] [i_19] [i_24])));
        }
    }
    #pragma endscop
}
