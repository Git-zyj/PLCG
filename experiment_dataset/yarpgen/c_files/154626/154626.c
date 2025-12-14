/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (arr_6 [i_0] [i_0] [i_2])));
                    arr_8 [i_1] [i_1] = (min((((-var_5 <= (arr_0 [i_2] [i_1])))), (min((arr_7 [i_0]), var_6))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_1] [i_0] [i_2] [i_3] [i_3] |= ((((~(~var_11))) | (var_13 ^ var_11)));
                        arr_13 [i_0] [i_2] [i_1] [i_0] &= ((-(var_1 & var_14)));
                    }
                }
            }
        }
    }
    var_20 = (((var_10 == var_7) ? ((0 ? var_15 : (var_4 > var_11))) : var_7));
    var_21 = (-(((~var_9) ? var_9 : (var_1 % var_15))));

    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        arr_16 [i_4] = (!((((((var_8 ? var_17 : var_12))) ? (var_0 == 1714796449) : (var_3 == 1072693248)))));
        arr_17 [i_4] [i_4] = -var_13;
        var_22 = (arr_10 [i_4] [i_4 - 1] [i_4 - 1] [i_4]);
        var_23 -= ((((((((arr_5 [i_4 - 1] [i_4] [i_4 - 1]) >> (var_3 - 332128853)))) ? ((~(arr_11 [i_4] [i_4] [i_4 + 1] [1]))) : var_18)) <= (5715588873502647354 < var_6)));
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_24 |= var_1;
        var_25 -= -var_12;
        var_26 = (((((var_6 ? var_9 : (arr_0 [i_5 + 3] [i_5 + 4])))) && ((!(((var_11 ? var_6 : 213)))))));
    }
    for (int i_6 = 3; i_6 < 14;i_6 += 1)
    {
        var_27 = (min(((((min(var_4, (arr_9 [i_6] [i_6 - 2] [i_6] [i_6])))) ? var_12 : (min((arr_11 [i_6 + 1] [i_6] [i_6] [i_6]), var_5)))), (((-((min(var_6, var_16))))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    var_28 = (min(var_28, 33096));
                    var_29 -= ((~((min((arr_11 [i_6] [i_6 + 1] [i_6 - 2] [i_6]), var_18)))));

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_30 = (arr_15 [i_6]);
                        arr_33 [i_6] [i_7] [i_8] [i_9] = (((~((max((arr_11 [i_6 - 2] [4] [7] [i_9]), var_1))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_31 = (max(var_31, ((max((min((~var_13), (arr_23 [i_10 + 4]))), ((-(!var_14))))))));
                                arr_38 [i_6 + 1] [i_10] [i_8] [i_11] [8] |= (arr_11 [11] [11] [16] [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
