/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = ((~384617970) != (((!(arr_1 [10] [16])))));
        arr_2 [0] = (arr_1 [1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [1] = var_9;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_20 [i_2] [2] [i_3] = (((((((arr_12 [2] [i_2 + 1] [13] [14]) ? (arr_3 [i_4] [i_2]) : var_2)) < (arr_19 [i_1]))) ? (arr_1 [i_1] [i_4]) : var_3));
                        arr_21 [i_2] [4] [i_2] [4] = (((arr_19 [i_1]) ? ((((arr_1 [17] [5]) == (((arr_17 [17]) ^ var_3))))) : (((!(((~(arr_12 [2] [0] [i_3] [i_4])))))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        var_11 = var_4;
        var_12 = (arr_23 [1]);

        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            var_13 = ((var_9 && ((((((var_6 ? 1 : (arr_23 [12])))) ? var_7 : (arr_26 [i_5] [19]))))));
            var_14 *= ((-((var_0 - (arr_26 [i_6] [i_6 - 2])))));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_36 [8] [i_9] [i_8] [1] [1] [8] [i_10] = ((!(arr_25 [i_5] [i_7] [16])));
                                arr_37 [i_5 - 2] [i_9] [16] [i_9 - 1] [4] [14] = ((-var_7 ? (((arr_22 [14] [1]) ? ((2765385232 ? -384617970 : 63)) : var_0)) : (((!(arr_26 [i_5] [12]))))));
                                arr_38 [i_5] [i_5] [13] [i_5] [i_9] = (!32765);
                                var_15 -= var_9;
                            }
                        }
                    }
                    arr_39 [i_5] = (arr_33 [6] [17]);
                    var_16 = var_8;
                }
            }
        }
    }
    var_17 = (((!var_1) << var_2));
    #pragma endscop
}
