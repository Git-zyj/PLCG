/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = 255;
        arr_3 [i_0] = var_7;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_2] [i_1] [i_0] = (((((arr_11 [i_3] [i_3] [i_2] [i_3 - 2]) ^ var_11)) - (((arr_11 [i_3] [i_3] [i_2] [i_3 - 2]) ? (arr_11 [i_3] [i_3] [i_2] [i_3 - 2]) : (arr_11 [i_3] [i_3] [i_2] [i_3 - 2])))));
                        var_13 = var_6;
                        var_14 = var_6;
                    }
                }
            }
        }
        var_15 = ((((-((-(arr_7 [i_0])))))) ? var_3 : (((((7 ? var_9 : (arr_0 [i_0])))) ? var_9 : (arr_6 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_16 [i_4] &= (arr_14 [i_4]);
        var_16 = (((-(arr_14 [i_4]))));
        arr_17 [i_4] [i_4] = (arr_15 [i_4]);
    }
    var_17 = (((min(var_8, var_4)) < var_10));

    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        var_18 = ((!(~var_1)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_5] [i_7] [i_6] = (var_5 == 11161);
                    arr_27 [12] |= 86;
                    var_19 = arr_22 [i_7] [i_7] [i_6] [i_5];
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_33 [i_9] [i_5] [i_9] [i_9] = ((((((((arr_28 [i_9]) ? var_1 : var_1))) ? (((var_2 ? var_5 : (arr_20 [i_8] [i_9])))) : -var_9)) >= 86));
                    var_20 = (65535 * 11161);
                    var_21 = (((arr_24 [i_5] [i_8]) ? 210 : ((-((var_1 ? -940764536 : (arr_21 [i_9] [i_9])))))));
                }
            }
        }
    }
    #pragma endscop
}
