/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 & ((var_8 | ((min(var_5, 1)))))));
    var_14 = var_1;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [1] = (min((((((min(var_6, var_2))) ? var_0 : (var_6 || 15881)))), (min(811253710, 1184186591))));
        arr_4 [6] = max(((var_10 ? ((var_6 ? var_3 : var_12)) : ((26808 ? var_11 : var_2)))), (!14));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1 + 2] = (min(((((var_11 ? 1851233136529807848 : var_5)) / (var_7 + var_11))), ((max(((max(var_4, var_9))), (var_4 - var_0))))));
        arr_8 [i_1] [i_1] = ((-((var_7 >> (var_1 + 1933959720625714736)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_17 [i_4] [i_3] [i_3] [i_1] = -1;
                        arr_18 [i_2] = (max((((var_6 ? (!var_9) : var_8))), (var_1 ^ var_6)));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [i_1 + 3] [i_3] [i_5 - 1] [i_5 - 1] = (((var_11 + 8) * (((((var_12 >> (var_4 - 15690))) == (min(var_12, var_6)))))));

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            arr_25 [13] [i_5 - 1] [i_3] [19] [i_3] [i_1 + 1] [i_1] = (((((((0 ? var_11 : 33936)) * var_9))) - ((((min(var_4, var_3))) ? (((248 ? 4016 : var_4))) : (192 - var_1)))));
                            arr_26 [i_1 + 4] [i_2] [i_1 - 2] [i_1 - 1] [i_1] &= (min((max(-var_6, var_4)), (((var_0 ? var_6 : var_3)))));
                            arr_27 [i_3] [i_6] [i_3] = ((((((min(var_11, 1)) << var_8))) ? ((max(var_9, ((min(var_7, var_8)))))) : ((((~811253710) <= var_10)))));
                            arr_28 [16] [i_2] [i_3] [1] [i_6 + 1] = (!0);
                            arr_29 [1] [i_3] [i_3] [i_1] = ((~((var_4 | ((3483713612 ? var_10 : 120))))));
                        }
                        arr_30 [i_3] = (!-30625);
                        arr_31 [1] [i_3] [5] [i_5 - 1] = (min(33936, ((1 ? ((-83 ? var_3 : var_3)) : (-8761109699355097630 > var_1)))));
                    }
                    arr_32 [i_3] = (((~((min(var_5, var_5))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_36 [i_7] [i_7] = var_12;
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 23;i_9 += 1)
            {
                {
                    arr_41 [i_7] [i_7] [8] [17] = ((((((var_10 + 3483713608) ? 1070206702 : 1))) / ((var_6 ? ((var_5 ? var_3 : var_12)) : (var_3 * var_2)))));
                    arr_42 [4] [18] [i_9] [i_9] = ((-((max(var_5, ((max(var_0, 0))))))));
                }
            }
        }
    }
    #pragma endscop
}
