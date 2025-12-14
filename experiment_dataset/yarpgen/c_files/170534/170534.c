/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_12);
    var_15 = var_6;
    var_16 += (min((17592186044415 | var_12), 6889219634902906830));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_18 *= (6889219634902906830 && 584971793);
                        var_19 = (arr_2 [i_3] [10] [i_3]);
                        var_20 = (max(var_20, (((var_4 ? (arr_1 [i_1 - 1] [i_1 - 1]) : (arr_1 [i_1 - 1] [i_1 - 1]))))));
                        var_21 |= (2915824647425356417 > 0);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_1] = 18446744073709551615;
                        var_22 = (((((18446744073709551612 ? var_10 : (arr_12 [i_1] [i_1])))) ? 896 : 3250980149480011417));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_23 *= (-1152921504606846976 < var_4);
                            arr_18 [i_0] [i_0] [i_1] [i_0] [i_5] = (((arr_1 [i_0] [i_0]) ? var_6 : var_5));
                            var_24 = var_12;
                        }
                    }
                    arr_19 [i_1] [i_1] = ((~(((arr_5 [i_2] [i_2] [i_2]) ? var_0 : -1924302772863137675))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 16;i_7 += 1)
            {
                {
                    arr_24 [i_0] [i_6] [i_6] [i_7] = (arr_0 [i_7 - 4]);
                    var_25 ^= ((((144115188075855871 ? -501600669704782920 : var_0)) * ((0 ? var_4 : 18446744073709551605))));
                    arr_25 [14] [i_6] [i_6] [i_0] = (((var_9 ? (arr_20 [i_7] [15] [i_0]) : (arr_7 [i_7] [i_6]))) % (((18446744073709551614 ? (arr_22 [i_0] [i_6] [i_7 - 4]) : -7030023383162657710))));
                }
            }
        }
    }
    #pragma endscop
}
