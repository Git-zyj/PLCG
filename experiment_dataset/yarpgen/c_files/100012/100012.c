/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [17] [i_0] [i_1] = ((var_6 ? var_8 : var_9));
                                var_13 = ((var_1 & (((894133464 ? (arr_1 [i_0]) : (arr_5 [i_4 - 2] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_14 &= (((arr_9 [i_2]) ? 4904694738415990888 : (arr_9 [i_2])));
                                var_15 = (((arr_4 [i_5 + 1] [i_0 + 2] [i_0 + 2]) && -65517));
                                var_16 = ((((((arr_4 [i_0] [17] [i_5]) ? 3400833832 : (arr_21 [i_1] [i_0])))) ? (arr_18 [i_0] [i_0 + 2] [i_0] [i_5 + 1]) : var_6));
                                arr_22 [i_0] [9] [i_2] [i_5] = -var_2;
                            }
                        }
                    }
                    var_17 = 894133472;
                    var_18 = (max(var_18, ((((((var_4 ? (arr_15 [i_2] [i_1] [22]) : (arr_18 [14] [i_1] [i_2] [i_1])))) ? ((var_7 ? (arr_0 [i_2]) : -19)) : -var_5)))));
                }
            }
        }
        arr_23 [i_0 - 1] [i_0] = ((((var_8 ? 11963500521178822115 : 6483243552530729515)) << (((~3400833840) - 894133392))));

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_19 = ((21 ? 243 : -800423249));
            arr_26 [i_0] = ((~((-19 ? 0 : (arr_21 [18] [i_0])))));
            var_20 = (((113 << (800423274 - 800423253))));
        }
        var_21 += (arr_7 [i_0] [0]);
    }
    var_22 = -43;
    var_23 = max(var_3, ((~(1 != var_4))));
    var_24 = ((800423274 ? (((~-1) ? ((var_9 << (8191 - 8190))) : var_6)) : (((((((max(var_4, var_10)))) != ((243 ? var_11 : var_4))))))));
    #pragma endscop
}
