/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(-8877161288426640558, 30127));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = (max(var_17, ((max((arr_5 [i_0] [i_1] [i_1]), (max(-2383491179132634373, (~var_9))))))));
            var_18 = (((~1057011673) ? (~2233065166785834483) : (arr_1 [i_0])));
        }
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            var_19 = (((arr_2 [i_0] [i_2]) ? ((((max(3237955622, var_14))) ? var_8 : (~30116))) : ((min((!0), var_0)))));
            var_20 = (((1057011690 && var_10) >= (min((arr_3 [i_2 - 1] [i_2 - 1]), var_3))));
            var_21 += ((((((var_2 <= 2233065166785834483) * (arr_2 [i_2 - 1] [i_2 - 1])))) ? (((~-30127) ? ((var_13 >> (((arr_6 [i_0] [i_0]) - 8155531073448798303)))) : ((86 ? var_9 : 55)))) : (!var_15)));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_22 = ((((min((arr_6 [i_2 + 1] [i_2 - 1]), (arr_6 [i_2 + 1] [i_2 - 3])))) ? 26323 : ((2775 ? (arr_6 [i_2 - 4] [i_2 + 1]) : (83 ^ var_15)))));

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_23 = (max((((((arr_7 [8]) || (arr_0 [i_0]))) ? ((1726525158 ? var_6 : 1726525155)) : (!var_4))), ((((((173 ? 2945 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? 83 : var_7)))));
                    var_24 = (((((((min(0, -2959)))) - (((arr_3 [i_4] [i_0]) + 1)))) + (~var_13)));
                }
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    var_25 *= ((-var_7 >= ((max(1, 11)))));
                    arr_17 [i_0] [i_0] [i_3] [i_0] = ((arr_7 [i_0]) % (((arr_14 [i_2] [i_2] [i_2 + 1] [i_2] [i_0]) / var_8)));
                }
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_26 = (min(var_26, 2747612283));
                var_27 = (min(((19 ? 1 : var_14)), ((max(173, var_3)))));
                var_28 = (min(var_28, ((((((var_5 >= (max(11, 1547355013))))) <= (127 < 1))))));
                arr_22 [i_6] [i_0] [i_6] |= ((~(1 <= 0)));
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_29 = (((max(var_6, (arr_24 [i_7]))) >> ((((max((max(35081, 65521)), (min(65394, var_3))))) - 65514))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_30 = (((((((min(var_10, (arr_23 [i_7])))) ? ((1 & (arr_24 [i_8]))) : (((arr_28 [i_7] [i_7]) | (arr_23 [i_9])))))) ? (((arr_30 [i_8] [i_9]) ? (arr_24 [i_7]) : (arr_23 [i_8]))) : ((134 ? 16 : 10829))));
                    var_31 = (((arr_27 [i_7]) ? (max(var_15, ((max(-17322, (arr_29 [i_7] [i_7] [i_7] [i_7])))))) : (((((!(arr_23 [i_9]))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_32 &= ((var_15 % ((max((arr_34 [i_7] [i_7] [i_9] [i_8] [i_11] [i_8] [i_8]), (arr_34 [i_7] [i_8] [i_9] [4] [i_10] [i_10] [4]))))));
                                var_33 = (max(((var_15 <= (!3237955622))), (((arr_28 [i_7] [i_8]) || (((arr_27 [i_9]) <= var_3))))));
                                var_34 = (max(((12257869193889608819 ? (arr_27 [i_8]) : 255)), (arr_23 [i_10])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 += ((~(!54714)));
    var_36 = var_13;
    #pragma endscop
}
