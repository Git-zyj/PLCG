/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = ((var_6 ? (((-((52314 ? 1 : 3803460608))))) : (var_6 * var_10)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [9] [i_0 - 1] = ((((((var_3 >= var_8) << var_4))) ? ((-((var_2 << (var_1 - 170))))) : (var_2 << var_4)));
                    arr_11 [i_1 + 2] = ((-(~1)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_14 = (((((var_11 < var_0) << ((((var_3 ? var_6 : var_5)) - 8692739305738655233)))) != var_2));
                        arr_19 [i_4 - 1] [i_3] [i_0] = (var_11 != var_9);

                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            var_15 = ((var_1 <= (((!(((var_9 ? var_3 : var_8))))))));
                            arr_23 [i_3] [i_6] = var_1;
                            var_16 = ((((!(((var_8 ? var_7 : var_4))))) ? (var_10 * var_8) : (((var_11 ? var_6 : var_1)))));
                            arr_24 [i_6] = ((~(!-1)));
                            var_17 = (((((-((var_1 ? var_9 : var_0))))) + ((-(var_3 - var_6)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_0 - 1] [i_3] [i_5] [i_5] [i_7] [i_5] [i_5] = var_6;
                            arr_30 [i_3] [i_3] [i_7] [i_3] [i_7] = (~var_8);
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_18 = ((!(((var_11 ? var_7 : var_4)))));
                            arr_33 [i_8] [i_8] = 0;
                            arr_34 [i_0] [i_3] [16] [i_8] [i_8] [i_3] = (!var_3);
                        }
                        arr_35 [i_0] [i_0] [i_4] = ((9 ? 1 : -25765));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_19 = ((var_0 ^ (!65528)));

        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_41 [i_9] = (((54924 > 1) << ((((~(var_2 - var_10))) - 29))));
            arr_42 [i_9] [i_10] [i_9] = (~var_8);
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_45 [i_9] = (var_0 <= var_8);
            var_20 = (((var_5 ? var_0 : (((var_2 ? var_4 : var_8))))) << (var_6 - 8692739305738655216));
            arr_46 [i_9] [i_9] [i_9] = (((((((208 ? -1 : 19) + 2147483647)) >> (var_11 - 225069241643264997)))));
        }
        arr_47 [i_9] = var_4;
        var_21 = var_1;
        var_22 = var_2;
    }
    var_23 = (!(((-((var_2 ? var_11 : var_4))))));
    #pragma endscop
}
