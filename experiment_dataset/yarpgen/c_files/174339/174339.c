/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((0 ? var_16 : ((199 ? 203 : 8155215821183984004))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 -= (+((96 ? (arr_0 [i_1]) : var_1)));
                arr_6 [i_0 - 2] = ((-(arr_2 [i_0 - 2])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (((-(max(var_13, var_12)))));
                            var_21 = (min(var_21, ((((max((arr_8 [i_0 - 2] [i_1] [i_2] [i_0 - 3]), (arr_3 [i_0 - 3] [i_0] [i_0])))) ? ((((((19 || (arr_12 [i_0] [i_2]))) || ((max(255, var_13))))))) : (((!-13) ? ((var_13 ? var_5 : -1766674703663969600)) : (min(-13, -12))))))));
                            var_22 = (min(var_22, (((-74 ? ((-(var_13 & -64))) : var_8)))));
                            arr_13 [i_3] [i_2] [i_2] [i_0] = (max(((-(arr_8 [i_0] [i_0 - 2] [i_0] [i_0 - 1]))), -var_14));
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = min(var_12, var_14);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                var_23 = (min(var_23, (arr_16 [i_5])));
                arr_20 [i_5] = (((((!-13) ? (arr_19 [i_5]) : 1)) + (((max(120, 252))))));

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_5] [16] [i_4] [i_8] &= (!-7);
                                var_24 *= ((((((31 * var_15) ? 1 : (arr_16 [i_4])))) ? (((min(117, (arr_18 [i_5]))) % (((~(arr_16 [i_4])))))) : (((var_3 ^ var_0) ^ (((arr_21 [11] [i_6] [i_6] [14]) ^ (arr_19 [i_4])))))));
                                var_25 = (((~(((!(arr_23 [i_4] [i_5])))))));
                                arr_29 [i_4] [i_4] [i_5] [i_4] [1] = (((arr_15 [i_5]) ? (arr_25 [11] [i_6] [i_5] [i_4]) : (max((((var_11 >> (158 - 139)))), ((var_4 ? 1 : (arr_19 [i_5])))))));
                            }
                        }
                    }
                    var_26 += (((-var_0 + (var_3 | var_5))));
                }
                /* vectorizable */
                for (int i_9 = 4; i_9 < 14;i_9 += 1)
                {
                    var_27 &= ((~((~(arr_19 [i_4])))));

                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_5] [i_5] = ((117 ^ (arr_24 [i_10] [i_10] [0] [5] [i_9 - 3])));
                        var_28 += (var_13 && var_0);
                        arr_35 [i_5] [i_10] = var_9;
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_4] [i_5] [i_5] [i_11] [i_11] = ((((-(arr_16 [i_4])))) && (((-1766674703663969592 ? 1 : var_9))));
                        arr_41 [i_4] [i_5] [i_4] = (((arr_30 [14] [14] [i_5] [14]) ? 7 : 4503599627370480));
                        arr_42 [i_5] [i_4] [i_4] [i_5] = (arr_38 [i_4] [i_5] [i_9 - 4] [i_5]);
                        var_29 = (((~(arr_38 [i_4] [i_4] [i_4] [i_9]))));
                        arr_43 [i_4] [i_5] [i_9] [i_5] = (arr_30 [i_11] [i_5] [i_5] [i_4]);
                    }
                    var_30 ^= var_1;

                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        arr_47 [i_5] = ((!(arr_37 [1] [i_4] [i_9] [i_9] [i_5] [i_9])));
                        arr_48 [i_4] [i_5] [i_5] [i_5] [i_12] [i_5] = ((arr_37 [i_4] [i_9 + 4] [i_9 - 2] [i_12] [i_5] [i_4]) ? (arr_16 [i_9]) : (arr_23 [i_4] [i_5]));
                    }
                    for (int i_13 = 4; i_13 < 15;i_13 += 1)
                    {
                        arr_52 [i_5] = (((arr_46 [i_4] [i_5] [i_9] [i_13 - 1]) ? (arr_31 [i_4] [i_5] [i_5]) : 124));
                        arr_53 [i_5] [i_5] [i_9] = ((((7721667692498306689 ? -453543926 : 0)) <= (arr_33 [15] [15] [i_13 - 3] [i_13] [i_9 - 4])));
                        var_31 = (((arr_51 [i_4] [i_9 - 1] [i_4] [i_13 + 1]) ^ -4014021946648702434));
                    }
                }
            }
        }
    }
    var_32 = ((var_3 / 117) - (((var_3 + -102) / ((116 ? 19 : 5793832620491120594)))));
    var_33 = (max(var_33, var_8));
    #pragma endscop
}
