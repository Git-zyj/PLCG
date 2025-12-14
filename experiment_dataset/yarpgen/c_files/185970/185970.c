/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [4] [i_0] &= var_5;
        arr_4 [i_0] = 4194240;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_10 = (max(var_10, ((((arr_12 [i_1 + 1] [i_1 + 1] [i_2 - 3] [i_2 - 4]) ? -1860942668 : -32759)))));
                    var_11 = ((((~(arr_5 [i_1] [i_1])))) > (((arr_0 [i_2]) ? (arr_12 [11] [12] [11] [i_1]) : 0)));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_18 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_4] [i_1] = (((((arr_0 [i_4]) ? 1 : var_8)) - (var_1 == var_3)));
                                arr_19 [i_4] [i_3] [i_3] [i_4] [i_4] = (((arr_13 [i_2 + 1]) < var_7));
                            }
                        }
                    }
                    var_12 = (min(var_12, ((((arr_15 [i_2] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1]) > (((arr_0 [i_2]) ? var_0 : 18700)))))));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = ((-(max((arr_20 [i_1 - 1] [i_2 - 3] [i_2 + 1]), var_7))));
                                var_13 = (((((-7752429290675535292 ? (((4194240 ? 32758 : 0))) : 1114958991183627232))) == ((~(arr_22 [i_2] [i_2 - 2] [i_2 + 2])))));
                                var_14 = (arr_7 [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (((4194241 >= 32763) << (((((min(1114958991183627257, -1860942668)) + 107)) - 3))));

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_32 [i_9] [1] = -1860942668;
        arr_33 [i_9] = (arr_29 [i_9]);
        arr_34 [i_9] = 32758;
        var_16 = var_4;
        arr_35 [i_9] [i_9] = arr_15 [8] [i_9] [8] [i_9] [i_9] [i_9];
    }
    #pragma endscop
}
