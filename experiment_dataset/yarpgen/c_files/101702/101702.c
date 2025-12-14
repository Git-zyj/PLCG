/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((-(min(1457800904, -1)))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_0 [i_1 + 1] [i_1 + 1]);
                var_18 = (min(var_2, (arr_4 [i_0] [i_0] [i_0])));
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_19 &= var_13;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_20 -= (max(177, ((18446744073709551615 + (((-32767 - 1) ? var_3 : (arr_14 [13] [13] [13] [13] [i_6])))))));
                                var_21 = (((arr_0 [i_2 - 1] [i_2]) ? (((arr_13 [i_2] [i_4 - 2] [i_2 - 1] [i_2]) ? 6272225206530825355 : (arr_13 [i_2] [i_4 - 2] [i_2 - 1] [i_2]))) : (min((arr_13 [i_2] [i_4 - 2] [i_2 - 1] [i_2]), (arr_8 [i_2])))));
                                var_22 = (max(var_22, (min(((!(arr_2 [i_2 - 1] [i_4]))), 0))));
                                var_23 = 18446744073709551615;
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_24 = (min(var_24, (((min(184, (arr_15 [i_7 + 1] [i_3 + 4] [5] [11] [i_4])))))));
                        var_25 -= (min((min((((arr_1 [9] [i_3]) ? 0 : (arr_15 [i_2] [i_2] [i_2] [10] [14]))), var_4)), (arr_8 [i_3 + 2])));
                    }
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {
                        var_26 = ((((((arr_9 [i_2 - 1]) + (arr_9 [i_2 - 1])))) ? ((((arr_9 [i_2 - 1]) ? (arr_9 [i_2 - 1]) : (arr_9 [i_2 - 1])))) : (((arr_9 [i_2 - 1]) ? 5168194596168031485 : var_6))));

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_27 &= (min(var_6, 72));
                            var_28 = (arr_4 [4] [i_2 - 1] [i_2 - 1]);
                        }
                        for (int i_10 = 3; i_10 < 14;i_10 += 1)
                        {
                            var_29 = (max(var_29, 2470400978783134581));
                            var_30 = ((+(((arr_25 [5] [i_3] [i_3] [i_2]) ? ((var_3 ? var_6 : (arr_1 [i_4] [0]))) : ((((arr_25 [i_2] [i_8] [3] [i_2]) ? var_5 : var_12)))))));
                            var_31 = -6389878133893862136;
                            arr_30 [1] [i_3] [i_4] [4] [i_2] = ((-5168194596168031486 - (arr_8 [0])));
                        }
                        arr_31 [i_2] = (i_2 % 2 == 0) ? ((((((((max(var_15, var_4))) >> (((min((arr_29 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [1] [i_2]), (arr_23 [i_8] [i_4 - 2] [i_3 + 3] [i_2]))) - 3639633440734300848))))) ? var_7 : (((19449 ? 2470400978783134581 : 0)))))) : ((((((((max(var_15, var_4))) >> (((((min((arr_29 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [1] [i_2]), (arr_23 [i_8] [i_4 - 2] [i_3 + 3] [i_2]))) - 3639633440734300848)) - 2923043079882480694))))) ? var_7 : (((19449 ? 2470400978783134581 : 0))))));
                    }
                }
            }
        }
    }
    var_32 = (var_9 + var_1);
    #pragma endscop
}
