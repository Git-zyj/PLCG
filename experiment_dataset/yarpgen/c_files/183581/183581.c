/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = max(((-(244 * 1914313163))), (0 < 87));
        var_12 = var_3;
        var_13 = (min(((-1240467678864933895 ? var_3 : var_8)), (min(3014834598, 929109792))));
        var_14 = ((-(max((var_7 * var_9), (55322 < 1240467678864933904)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = var_8;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        arr_12 [i_4] [i_1] [3] [i_3] [i_1] [i_1] = (var_1 & var_4);
                        arr_13 [i_1] [i_2] = (min((max(var_3, var_5)), (((var_4 < (!-1240467678864933897))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] [i_3] [i_1] [i_1] = (min((max(-1240467678864933910, ((max(58541, 169))))), -1));
                                var_16 = (min(var_16, var_7));
                            }
                        }
                    }
                }
            }
        }
        var_17 = (max((((var_5 || 127) % ((86 ? -1240467678864933895 : 1240467678864933918)))), ((min(var_9, (!1240467678864933874))))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_22 [i_1] [i_1] [i_1] = (~var_7);
            arr_23 [i_1] [i_1] [i_7] = (((var_2 < var_10) ? var_7 : var_7));
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_18 = (max(var_18, (((-(max((max(-7746110104801945094, -26)), ((min(var_0, 25))))))))));
                            arr_37 [i_11] [i_8] [i_9] [i_1] [i_9] [i_8] [i_1] = (max((~var_6), (((-22 + 2147483647) << (var_8 - 26333)))));
                            var_19 = var_2;
                        }

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            arr_40 [i_1] [i_10] [17] [i_8] [i_1] = 4165669149;
                            var_20 = 1240467678864933912;
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_45 [i_1] [i_8] [i_9] [i_10] [i_8] [i_1] [i_13] = ((((var_0 || ((max(87, 137))))) ? 0 : ((((var_6 ? var_10 : 237)) ^ (min(var_10, var_7))))));
                            arr_46 [i_1] [i_8] [i_1] [i_10] = ((!(max((-45 >= 646707533), (var_8 < var_10)))));
                            arr_47 [i_1] [i_8] [i_1] [i_1] [i_13] [i_9] [i_10] = (max(var_6, var_2));
                            var_21 &= ((-(max((1931641821 > 30606), var_10))));
                        }
                        arr_48 [i_9] [i_8] [i_9] [i_1] [i_9] = 102;
                        arr_49 [i_1] [i_9] [i_8] [i_1] = ((~(var_6 < var_9)));
                    }
                }
            }
            arr_50 [i_1] [i_1] = (max(((((1 ? -75 : 8)) == (var_4 < var_9))), (var_10 || var_6)));
        }
    }
    var_22 = (min(var_22, var_9));
    var_23 = ((var_2 * ((-((-54 ? var_5 : 153))))));
    #pragma endscop
}
