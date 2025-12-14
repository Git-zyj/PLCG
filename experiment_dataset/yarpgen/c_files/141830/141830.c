/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [20] = ((var_12 ? (((arr_4 [i_1 - 1]) / (arr_3 [i_1] [i_1 - 2] [i_0]))) : ((min((max((arr_0 [i_0]), 230069020546292939)), -4395)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = 1;
                            var_14 = ((((((max(var_5, var_0))) ? (arr_7 [i_3] [i_2] [i_1] [i_0]) : ((((arr_3 [i_0] [i_1 - 3] [i_2]) || var_5))))) % (arr_8 [i_1] [i_3])));
                        }
                    }
                }
                arr_12 [i_0] [i_1] = (max((((((~(arr_4 [i_0]))) == var_2))), ((var_0 ? (22057 - 1317889881598557862) : (arr_2 [i_0])))));

                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    arr_15 [i_0] = (min(-var_2, (min((arr_2 [i_1 - 3]), 4374))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] = ((!(4395 == 25644)));
                                var_15 = ((((min(var_6, var_6)) ? (((max((arr_1 [i_0]), -20388)))) : 3872074792363937931)));
                                var_16 = 1;
                                arr_23 [i_0] [i_1] [i_4] [i_4] [i_5] [19] [13] = ((+(min((min((arr_21 [i_0] [i_0] [i_0]), (-32767 - 1))), (!var_4)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_17 = (arr_24 [i_0] [i_4 - 2] [i_1 - 3] [i_8]);
                                var_18 += (arr_19 [i_0] [i_1] [i_4]);
                                arr_30 [i_0] [i_0] [i_7] [i_4] [19] [i_7] [i_8] = ((((((arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 3]) ? (arr_6 [i_1 - 2] [i_1 + 1] [i_1 + 1]) : 2999532464))) || (arr_2 [i_4 - 1])));
                                var_19 = (max(var_19, (((((min(var_4, 3805978284059206420))) ? -120 : (805 & var_12))))));
                                arr_31 [i_0] [i_4] [i_4] [i_7] [i_4] [i_4 + 2] &= ((((((-12361 + 2147483647) >> (((arr_21 [i_1 - 3] [i_1 - 2] [i_4 + 3]) - 5463221296845511356))))) ? var_11 : (!5283052791176227541)));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_20 = (min(((min(0, (arr_9 [i_1 - 3] [i_1] [i_1 + 1] [i_0] [i_0])))), 14574669281345613684));
                    var_21 = (max(var_21, (arr_27 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                arr_48 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = (min(((((55019 << (arr_6 [i_11] [i_13] [i_14]))))), (min(38244, 3204700290892049246))));
                                var_22 = (((max(var_12, ((max(var_2, (arr_39 [i_14] [i_14])))))) + (((((~1) < ((var_4 ? 18597 : var_4))))))));
                                arr_49 [i_10] [i_10] [i_10] [i_10] = arr_13 [i_10] [i_11] [11] [13];
                            }
                        }
                    }
                    var_23 -= (!((((((var_11 ? (arr_34 [i_12] [i_11]) : 10385))) ? (var_6 / var_9) : 65521))));
                    arr_50 [i_10] [3] [i_11] [i_12] = ((-91 ? ((var_4 ? 11782 : (arr_21 [i_10] [i_11] [i_12]))) : (32767 / -7755946392760983162)));
                }
            }
        }
    }
    #pragma endscop
}
