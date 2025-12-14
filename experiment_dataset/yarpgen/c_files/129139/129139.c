/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (((((max((arr_4 [i_0]), (arr_8 [i_0] [i_0] [i_2]))) <= (arr_0 [i_0]))) || var_5));
                    var_16 |= ((((!((max(110, (arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] [i_1] [i_4] [4] [i_1] = (((((-(((arr_3 [i_2] [i_1] [i_0]) | var_2))))) ? (((arr_7 [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_0]))) : 1));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_11 [i_2]), (~var_0)))) || (((arr_12 [i_0]) == ((((!(arr_11 [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_17 = (~var_5);
                    arr_21 [i_5] [i_5] [i_6] = (~1);
                    arr_22 [i_5] [i_5 + 3] [i_5 + 3] [i_5] = var_1;
                    arr_23 [i_5] [i_5] [i_5] = 1;
                }
            }
        }
        arr_24 [i_5] = (arr_18 [i_5] [i_5] [i_5]);
        arr_25 [i_5] = (-9223372036854775802 ? ((1 ? var_10 : var_12)) : (2047 >= 1));
        var_18 -= (~var_1);
    }
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        var_19 = (min(var_4, (-1827799605 * var_9)));
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_20 *= ((((~(~var_9))) | (!var_4)));
                        var_21 = (!15);
                        var_22 = (min(var_22, ((max(((max(var_13, var_0))), (max((arr_0 [i_8 - 1]), (arr_0 [i_8 + 1]))))))));
                        var_23 = (((((var_11 != var_3) ? var_11 : (arr_34 [i_9 - 1] [i_9 + 1] [i_9]))) != (((~var_9) ? ((var_0 ? (arr_31 [i_8] [i_8] [i_8] [i_8]) : (arr_1 [i_8] [i_11]))) : (((1 & (arr_5 [i_8]))))))));
                    }
                }
            }
        }
        var_24 = (min(var_24, (max((((var_11 ? var_8 : 1))), var_10))));
    }
    var_25 = (min(var_25, -var_14));
    var_26 = 63485;
    var_27 = var_9;
    #pragma endscop
}
