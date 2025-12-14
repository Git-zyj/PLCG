/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (15779050904515045077 ^ var_1);
        var_10 = ((((max((((arr_1 [i_0]) ? 61738 : var_6)), var_6))) && ((max(((max(var_1, var_6))), (((arr_1 [i_0]) * var_2)))))));
        var_11 = (max(var_11, 43226));
        var_12 = (min(var_12, (((max(((max(var_2, var_6))), (max(15779050904515045077, 21)))) ^ (arr_2 [i_0 - 1])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] = min(((((var_1 + 120) != (arr_1 [i_0])))), (((arr_3 [i_0 - 1] [i_2 - 1]) & (arr_3 [i_0 + 1] [i_2 - 1]))));
                        var_13 = (min(((var_1 / (((7168 < (arr_8 [i_0] [i_1] [i_2] [i_3])))))), (max(var_7, (var_1 | var_2)))));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            arr_15 [6] = (arr_8 [i_4 + 1] [i_4] [i_2 - 1] [i_2 - 1]);
                            var_14 &= 61734;
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_15 = min(1587782309429645753, 6862);
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_5 - 1] = (var_5 * 0);
                        }
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_16 &= var_9;
                            var_17 = (min(var_17, (23533 - 3178530278362983209)));
                        }
                        arr_22 [i_1] [i_1] [i_1] = (min((((((min(0, 18446744073709551615))) && (arr_7 [i_2 + 1] [i_1] [i_2])))), (min((!16858961764279905862), (arr_1 [i_0])))));
                        arr_23 [i_0] [i_1] = min((max(((min(22283, 61734))), ((0 % (arr_11 [i_0]))))), (arr_11 [i_3]));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    {
                        var_18 = (16164016129469996029 ? 43226 : 0);
                        arr_37 [i_10] [i_10] = (arr_0 [12]);
                        arr_38 [i_10] [i_8] [i_9] [i_9] [i_9] [i_10] = ((arr_31 [i_7] [i_8]) << (-13186219898564381568 - 5260524175145170006));
                    }
                }
            }
        }
        arr_39 [i_7] |= 22320;
        var_19 = var_2;
        var_20 = var_8;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_21 = (max(var_21, (((var_7 >> (((arr_20 [i_11] [i_11] [18] [i_11] [i_11]) - 5834)))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                {
                    var_22 = ((!(arr_33 [i_11] [i_13 + 2] [i_13 - 1] [i_13 + 2])));
                    arr_48 [i_11] [i_12] [i_13] = ((3239417049325537570 > (arr_14 [i_11] [i_11] [19] [i_12] [i_13 + 3])));
                    var_23 = (max(var_23, ((((arr_8 [i_11] [i_11] [i_11] [i_13]) | 65514)))));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        var_24 *= max(((4530 ? ((var_6 ? 9607274846469636174 : 43220)) : -65530)), (((5387 ? 15363660686521667292 : (arr_10 [i_14] [i_14] [i_14] [i_14] [i_14])))));
        var_25 = ((~(18446744073709551615 & 13704584096427332887)));
    }
    var_26 = var_8;
    var_27 = (~var_9);
    var_28 |= ((var_0 ? ((-((var_7 ? 22316 : var_4)))) : var_0));
    #pragma endscop
}
