/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((var_13 << (931447774 - 931447761)));
    var_20 = (max(1199504162, var_2));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 *= (max((~var_1), 22));
        arr_2 [i_0] [10] = (max(2147483647, ((1371819145 ? (arr_1 [i_0]) : ((var_10 ? (arr_0 [i_0]) : var_18))))));
        arr_3 [i_0] = (min(0, -1181035006));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = ((~((-(arr_6 [i_1] [7])))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_23 = (((((((3095463144 ? var_14 : 25412))) ? (!var_9) : (var_18 | var_11)))) ? (((!4108) ? ((max((arr_5 [i_1]), var_1))) : (arr_4 [i_2 + 1] [i_2 + 1]))) : (~var_17));
                    arr_12 [i_3] [i_1] [i_1] [i_1] = ((((min((1199504162 <= 1199504160), (max((arr_5 [i_1]), var_3))))) & (((var_9 < var_15) ? 1 : (var_16 && var_12)))));
                }
            }
        }
        arr_13 [i_1] = ((!(arr_7 [9] [9])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_24 *= var_0;
                    arr_20 [i_5] [i_4] [i_5] = (-(max(-28896, ((1 ? 3095463130 : var_9)))));
                    var_25 = min(var_16, (min(var_18, 1756609593)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 19;i_6 += 1)
    {
        var_26 = ((!(!var_4)));

        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            var_27 *= (arr_21 [i_6] [i_6]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_28 = ((!(arr_15 [1] [i_7 - 3] [i_7 - 1])));
                        var_29 += -8883;
                    }
                }
            }

            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                var_30 = ((!(arr_26 [i_6 - 3])));
                var_31 = (max(var_31, (~var_4)));
            }
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        arr_39 [i_11] &= (3499308340 ? (1756609583 != var_14) : 1199504160);
        var_32 &= ((((!3095463151) || var_9)) ? (~var_13) : ((-(arr_37 [i_11]))));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 22;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_33 *= ((-(arr_51 [i_12])));
                                arr_56 [i_14] [i_12] [i_12] = (var_13 ? -1756609601 : (var_12 <= var_18));
                                arr_57 [i_14] [i_14] = arr_46 [i_15 - 2] [i_12 - 2] [i_11];
                                arr_58 [i_14] [9] = (1199504160 - var_13);
                            }
                        }
                    }
                    var_34 = ((3095463136 ? ((((1067455942 / -1756609594) * 4294967295))) : (((arr_55 [i_12] [i_13 - 1] [i_13] [i_13 - 2] [i_12]) ? (arr_50 [i_11] [i_11] [i_11] [i_12 + 2]) : 3095463122))));
                }
            }
        }

        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            var_35 = ((max((arr_49 [i_11] [i_11] [i_11] [1]), var_3)) ? (((!(arr_48 [i_11] [i_11] [i_11] [i_11])))) : (((var_10 == (!2074375166)))));
            var_36 = (415867818 / -56);
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        var_37 = ((max(((-146046213 ? 3605600977 : 1756609579)), var_12)));
                        var_38 = var_14;
                    }
                }
            }
        }
    }
    var_39 = (max(0, var_18));
    var_40 = var_4;
    #pragma endscop
}
