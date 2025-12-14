/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = (var_18 >= (var_15 <= var_4));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [9] = ((((((1 >= 3619738667443501922) & var_5))) - (6664467640590836282 << 15)));
                    var_20 = (max(var_10, (max(var_17, var_1))));

                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        var_21 = ((!var_7) ? (((var_14 / var_13) + (var_0 <= var_0))) : (((-var_7 * (var_14 || var_6)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_22 = (((var_5 ^ var_17) | (var_16 && var_11)));
                            var_23 = var_17;
                            arr_15 [i_4] [i_1] [7] [i_1] [i_4] = ((-(var_18 + var_10)));
                            arr_16 [i_1] [0] [9] = (((var_10 || var_9) ? (!var_9) : ((var_7 ? var_9 : var_18))));
                            var_24 = ((var_16 & var_18) || var_0);
                        }
                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            arr_19 [i_5 + 1] [i_3] [i_1] [i_1] [i_1] [i_0] = (((-var_5 + 2147483647) >> (-var_14 - 8285217996675173878)));
                            var_25 -= ((-1939138241 > 13) ? -var_5 : (((min(var_6, var_4)))));
                            var_26 = (((((!254) * ((var_8 ? var_4 : var_18))))) ? (((~(~var_12)))) : (min(((var_10 ? var_18 : var_10)), var_7)));
                            var_27 ^= (((((((max(var_17, var_15))) ? (max(var_3, var_14)) : (var_14 * var_15)))) ? var_5 : (var_4 >> var_7)));
                        }
                        var_28 = (max((min(1939138250, -6575356236811368217)), (((-(var_18 || var_18))))));
                        arr_20 [i_1] [1] [i_2] [i_3] = (min((min(((var_5 >> (var_13 - 12923303946801153637))), -var_4)), ((-(var_8 * var_9)))));
                        var_29 = ((((var_2 && (!var_7)))) > (!-var_0));
                    }
                }
            }
        }
        var_30 = (((-(var_12 >= var_10))));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        arr_25 [i_6] = (var_14 || ((((-47 > 169614768867083409) ^ var_18))));
        var_31 = ((((((!var_6) - (var_3 >= var_17)))) > (min((max(var_5, var_14)), (var_4 | var_6)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                {
                    var_32 = (min(var_32, (-var_11 | -var_7)));
                    arr_32 [i_8] [i_6] [i_6] [18] = (((var_12 ^ var_7) + ((-(!var_13)))));
                    arr_33 [i_6] [i_7] [i_6] = (max(14, 47));

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_36 [i_9] [0] [i_6] [i_6] [0] = ((((max((-47 ^ 0), ((-6241998919853515745 ? 254 : 8))))) ? (max(((var_18 ? var_17 : var_14)), (((var_5 ? var_7 : var_5))))) : (min(var_10, (((var_13 ? var_15 : var_17)))))));
                        arr_37 [i_6] [i_7] [i_6] [i_9] [i_9] = (((((!var_13) ? var_3 : var_0))) >= ((max(var_4, var_1))));
                        var_33 = (max(var_33, (((var_1 + var_12) ? (((((((var_16 ? var_6 : var_3))) || (!var_4))))) : ((((min(-1939138258, -1939138241))) | ((122 ? 324781901174509362 : -47))))))));
                        var_34 = (((((-var_7 ^ ((var_16 ? var_3 : var_13))))) ? ((((max(var_3, var_2))) / (var_1 * var_13))) : (((-var_3 >> (var_15 - 6003))))));
                    }
                }
            }
        }
        arr_38 [i_6] [i_6] = ((~((min(var_8, var_6)))));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_35 = (((((var_7 ^ var_13) || var_2)) ? (((!(~var_16)))) : (((!(~var_15))))));
        arr_43 [i_10] [3] = ((((!(((var_16 ? var_14 : var_14))))) ? (!var_0) : (((!4236335104) >> ((var_6 ? var_17 : var_15))))));
        var_36 ^= ((!((((((-407409420 + 2147483647) >> 0)) ^ (-1939138241 | -1672854287))))));
        var_37 = (max((~var_5), var_15));
    }
    var_38 -= ((((!((min(var_7, var_3)))))));
    #pragma endscop
}
