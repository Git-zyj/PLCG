/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((-(3568775578262448545 == var_2))))));
                            var_13 = ((max((((var_9 || (arr_2 [7] [i_1] [i_2])))), 18446744073709551615)));
                        }
                    }
                }
                arr_10 [10] [i_0 + 1] [i_1] = (((-549755813888 && (((29 ? 18446744073709551605 : -549755813883))))) ? -3568775578262448525 : 16352);
                var_14 = (max(var_14, var_3));
                var_15 = ((((((arr_8 [i_0]) / var_5))) ? ((max((arr_2 [i_0 - 2] [i_1] [i_1 + 2]), (arr_2 [i_0 + 1] [i_1] [i_1 + 1])))) : (arr_3 [i_0 + 2] [i_0 + 1])));
                arr_11 [i_1] = (arr_1 [i_1] [i_0]);
            }
        }
    }
    var_16 -= (max(0, 10));
    var_17 += (((((-((8866 ? 11868 : var_7))))) == (min((min(var_6, 6201128029559337225)), 6201128029559337233))));

    /* vectorizable */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        arr_16 [4] = 262143;
        var_18 = ((~(arr_14 [i_4] [i_4 + 3])));
        var_19 = (((arr_13 [i_4]) ? (arr_15 [i_4] [i_4 + 2]) : var_5));
        var_20 ^= (arr_15 [i_4] [i_4 + 3]);
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_21 = var_9;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_22 = (min(var_22, ((max((arr_19 [i_5]), 4294950932)))));
                    arr_25 [i_5] = (min(18446744073709551615, (arr_20 [i_6 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
