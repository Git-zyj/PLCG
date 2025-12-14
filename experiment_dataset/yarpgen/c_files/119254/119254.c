/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((-6825 + (min((~6825), -121))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 ^= (min(var_1, 55358));
                                var_12 = (((!var_1) && (((~((min(var_0, (arr_4 [i_0] [i_0] [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        arr_24 [i_6] = (max((min(1108307720798208, var_1)), (((var_6 ? (((arr_21 [i_7]) ? (arr_16 [5]) : -121)) : (((arr_16 [i_7]) ? (arr_16 [i_6]) : 70)))))));
                        arr_25 [i_7] [i_7] [i_7] [i_7] = (min(5, 186));
                        var_13 |= (((arr_15 [i_5 - 1]) ? (((arr_15 [i_5 - 1]) ? (arr_15 [i_5 - 1]) : (arr_15 [i_5 + 1]))) : ((var_8 ? (arr_15 [i_5 + 1]) : (arr_15 [i_5 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_14 = (((arr_15 [i_5 - 1]) ? (arr_20 [i_5]) : (arr_19 [i_5] [i_5 + 1])));
                        var_15 -= ((-1108307720798211 && (arr_23 [i_5] [i_6] [i_7] [i_9])));
                        var_16 = -22539;
                        var_17 = (((((var_8 ? 1108307720798243 : (arr_29 [i_5] [i_6] [i_7] [i_9])))) ? (arr_23 [i_9] [i_6] [i_5 - 1] [i_6]) : -124));
                        var_18 = 1108307720798204;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_19 |= (((~(arr_19 [i_5] [i_5 - 1]))));

                        for (int i_11 = 4; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            var_20 ^= var_3;
                            var_21 = (max(((1 + (~var_4))), ((((arr_17 [i_5 + 1]) || var_2)))));
                        }
                        for (int i_12 = 4; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            arr_37 [i_5] [i_6] [i_10] [i_10] [i_12] [i_5] [i_12] &= (min(((((arr_28 [i_6] [i_12] [i_12] [i_12] [i_12 + 1] [i_12]) > 16444))), ((-15 ? (arr_30 [i_5] [i_5] [i_7] [i_7] [i_12 + 3] [i_12]) : -22550))));
                            var_22 -= (min(((~(arr_33 [i_5] [i_6]))), ((((arr_17 [i_5]) ? var_2 : var_1)))));
                            var_23 -= ((((max(var_7, ((var_1 ? 22543 : var_3))))) ? (((((arr_28 [i_5] [i_6] [i_7] [i_10] [i_12] [i_12]) - (arr_18 [i_7]))))) : ((-12 ? (arr_30 [i_5] [i_6] [i_7] [i_5 + 1] [i_6] [i_5]) : var_1))));
                        }
                        var_24 |= max(((~(((!(arr_28 [i_5] [i_5] [i_7] [i_6] [i_5] [i_10])))))), (((arr_18 [i_5 - 1]) ? (-928387575 <= -15270) : (!13))));
                        var_25 &= (((min(var_3, ((206 ? 263670952 : (arr_26 [7] [i_6]))))) > ((115 ? (((var_7 ? var_8 : 64))) : ((var_1 ? (arr_26 [i_5] [i_10]) : -22540))))));
                        var_26 = ((var_0 ? (((arr_16 [i_5 - 1]) ? ((min((arr_20 [i_5]), var_0))) : (arr_33 [i_5] [i_6]))) : ((((-22558 + 1709857020) == var_4)))));
                    }
                    var_27 = ((1108307720798195 != (((756888596 ? ((((1 || (arr_36 [i_7] [i_7] [19] [i_6] [19]))))) : ((var_0 ? (arr_29 [i_5] [i_5] [i_5] [i_5]) : 2147483648)))))));
                    var_28 = ((var_3 || (8524079121871394805 || var_10)));
                }
            }
        }
    }
    var_29 -= (((((var_6 ? 2 : ((var_3 ? var_10 : 6))))) ? var_0 : var_10));
    #pragma endscop
}
