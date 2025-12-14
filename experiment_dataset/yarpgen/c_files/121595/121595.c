/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 += ((((18446744073709551615 ? 26 : (arr_6 [5] [i_0 - 2] [i_0]))) + (((0 ? -47 : 112)))));
                var_18 = (min((arr_4 [i_0 + 1] [i_0 - 2] [i_1 - 1]), (max(var_0, -7))));
            }
        }
    }
    var_19 = ((var_0 ? var_11 : ((~((max(var_1, 1)))))));

    for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((var_1 ? (min(1, (arr_10 [i_2 + 2] [i_2]))) : (((arr_10 [i_2 + 2] [i_2 + 2]) ? var_4 : var_9))));
        arr_12 [1] = ((~(max((arr_8 [i_2 + 1]), (arr_8 [i_2 + 3])))));
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_20 = (min(var_20, (arr_15 [i_3 - 1] [i_3 + 3])));
                    var_21 += min((!7425515324090262189), (((arr_15 [i_4] [i_4]) ? (((min((arr_9 [i_3]), (arr_9 [i_3]))))) : var_14)));
                    arr_21 [i_3] [i_4] [i_5] = ((9127230835535560846 ? -1 : -47));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_22 += (((arr_22 [i_3 + 1] [i_3 - 1] [22] [i_3 + 1]) <= (((281474976710655 ? (115 == var_5) : (arr_19 [i_3 - 1] [i_4] [i_6] [i_6]))))));
                        var_23 = var_0;
                        var_24 += (min(((var_4 ? (((var_2 ? (arr_19 [22] [i_4] [i_5] [i_6]) : (arr_10 [17] [i_5])))) : -var_15)), (~var_7)));
                        arr_24 [6] [21] [i_5] = min(18446744073709551615, 12710426969440867350);
                        arr_25 [i_3] [7] [7] [21] = var_14;
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        var_25 = (((~18446744073709551615) - var_10));
                        var_26 = (max(var_26, (min(((~(arr_27 [i_3 + 2]))), (((arr_23 [i_3 - 3] [i_3 - 3] [i_3 + 2] [i_3]) ? (arr_27 [i_3 + 3]) : (arr_20 [i_3 + 1])))))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            var_27 = var_0;
                            var_28 = -109;
                            var_29 += ((((var_2 ? var_10 : -18446744073709551615)) << (536870911 && 0)));
                        }
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            var_30 = (min((0 <= 0), 1));
                            var_31 = (max(var_31, (((((max(1, (18446744073709551591 + 5559249072191500895)))) ? ((117 ? 46 : 1)) : (!var_1))))));
                            var_32 = 15;
                            arr_36 [i_3] [i_4] [i_8] [i_8] [i_10 + 1] = ((((((max(-1, 3277560600433361101))) ? ((10505770515929781778 ? 35 : 1821706321621968396)) : (var_8 / -101)))) ? (((((~(arr_20 [i_5])))) ? (min(1, 7848452011581584320)) : 1956678139323702171)) : (((-(!var_15)))));
                        }
                        arr_37 [i_3] [i_3] [i_8] [i_5] [i_8] = var_12;
                        arr_38 [i_3] [i_8] [i_5] [i_4] = arr_15 [i_8] [11];
                    }
                }
            }
        }
        var_33 -= (min((((var_15 ? (arr_23 [i_3 - 1] [i_3 + 3] [2] [i_3]) : (arr_23 [i_3 - 1] [i_3 + 3] [1] [i_3 - 3])))), ((((((arr_15 [i_3] [i_3]) ? 13941275437063314949 : (arr_8 [i_3])))) ? (arr_26 [i_3 + 3] [i_3 - 2]) : ((12764702570734391903 ? 6168570053075653441 : var_1))))));
        arr_39 [i_3] |= ((((10505770515929781778 ^ (((arr_28 [i_3] [i_3] [9] [i_3] [9]) ? 12764702570734391903 : var_13))))) ? (!1) : (max((arr_27 [i_3 - 1]), (arr_27 [i_3 - 1]))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_43 [i_11] = var_3;
        var_34 = (min(var_34, (((!(~var_10))))));
    }
    #pragma endscop
}
