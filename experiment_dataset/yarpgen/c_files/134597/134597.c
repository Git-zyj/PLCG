/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (max(var_7, (min((((23 << (4294967273 - 4294967256)))), var_4))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 -= (max(45766, (!17485325280966712815)));
                    var_12 = (max(var_12, (arr_2 [i_0])));
                    var_13 = ((var_0 ? ((((!(arr_0 [i_0 - 1] [i_0 + 2]))))) : (max(((var_1 ? (arr_5 [i_0] [i_0] [i_2]) : 1246037259)), -1))));
                    var_14 = (min(((130 ? (arr_4 [i_1 + 1] [i_0]) : (arr_4 [i_1 + 1] [11]))), (arr_4 [i_1 + 1] [i_1])));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        var_15 = (max(var_15, (!var_8)));
                        var_16 = (arr_1 [i_0 + 1] [i_0 + 2]);
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        var_17 |= (((var_8 < 2754759800462441757) != (2298156568688787714 + var_9)));
                        arr_11 [1] [i_2] [2] [1] [i_0] = (min(1, 3840));
                        var_18 = (max(var_18, (arr_6 [i_0] [i_2] [i_0] [i_0])));
                    }
                }
            }
        }
        var_19 = ((15 ? (~1) : (((arr_9 [16] [i_0] [22]) ? -var_3 : (arr_6 [i_0 - 1] [i_0] [i_0] [19])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_20 = (((arr_12 [i_5]) + 18446744073709551614));
        var_21 = var_7;
        arr_15 [i_5] = ((!(((-95 ? -2298156568688787714 : (arr_8 [15] [15] [i_5] [15] [i_5]))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            {
                var_22 -= var_6;
                var_23 = 73;
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_24 = ((((max(var_4, (arr_24 [i_6 - 1])))) ? (!5319918126789196472) : (((!-1) ? (arr_0 [2] [7]) : (arr_3 [i_8 + 1] [i_8] [i_8 + 1])))));
                            arr_27 [i_6] [10] [8] [i_6] |= (((var_9 - var_9) ? var_4 : ((((arr_0 [i_7 + 1] [i_6 + 3]) ? 3906 : (arr_0 [i_7 + 1] [i_6 + 3]))))));
                            var_25 = (max(var_25, (((19792 ? 4072939709446103369 : 0)))));
                            var_26 = ((((((arr_5 [i_8 - 3] [8] [i_6]) ? (arr_25 [i_6] [i_8] [5] [i_6]) : var_3))) ? (var_7 > -20049) : (max(-2298156568688787690, var_3))));
                            var_27 |= ((566868331 ? (((arr_19 [i_6 + 1]) ? (arr_18 [i_7 + 1] [i_6 + 3]) : -9191316059599263481)) : (((arr_6 [i_9 - 2] [i_8 + 1] [i_7 + 1] [i_6 + 1]) ? (arr_18 [i_7 + 1] [i_6 + 3]) : var_8))));
                        }
                    }
                }
            }
        }
    }
    var_28 = 906094283;
    #pragma endscop
}
