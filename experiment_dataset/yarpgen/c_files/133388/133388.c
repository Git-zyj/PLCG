/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [10] [i_2] [i_3] [10] = var_4;
                                var_15 -= (((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? 16965 : -12128)) | -118));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_25 [i_7] [i_7] [i_7] [i_5] [3] [i_7] = (((((-1663058525 < var_6) > (min(var_1, 1663058525)))) && ((!(arr_15 [8] [i_1] [i_5] [i_7])))));
                                arr_26 [i_7] [i_5] [5] [i_5] [i_5] [i_5] [9] = ((2097120 ? -5352932344366134289 : ((var_3 ? (arr_7 [i_7] [i_6] [i_0 + 1] [i_0 + 1]) : (arr_5 [i_6] [i_6] [i_6] [i_6])))));
                            }
                        }
                    }
                }
                var_16 -= ((!(3807302661 + var_5)));
                arr_27 [i_1] [11] = (((5352932344366134288 ? -430036240508342404 : var_1)));
            }
        }
    }

    for (int i_8 = 4; i_8 < 23;i_8 += 1)
    {
        var_17 -= ((~(((!(!7773))))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    arr_39 [i_8] [i_9] [i_9] = (arr_29 [i_8] [i_9 + 4]);
                    var_18 -= 0;
                }
            }
        }
    }
    var_19 = var_3;
    var_20 = ((var_11 ? (((((min(-2839, var_12)) == var_2)))) : var_13));
    #pragma endscop
}
