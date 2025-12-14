/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 &= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (((var_2 ^ var_5) ? (arr_0 [i_0]) : (((var_10 ? -23 : (arr_2 [i_0]))))));
        var_19 = arr_0 [i_0];
        arr_4 [i_0] = var_2;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_14 [9] [i_2] = var_15;
                    var_20 -= 3999219687;
                }
            }
        }
        arr_15 [i_1] [i_1] = var_10;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = 125;
        var_21 = (((var_2 + 2147483647) >> (((-9223372036854775807 - -9223372036854775779) + 52))));
        var_22 -= ((arr_18 [i_4] [i_4]) ? ((((var_5 < ((var_9 ? 4294967295 : (arr_18 [i_4] [i_4]))))))) : (arr_18 [i_4] [i_4]));
        arr_20 [3] [i_4] = ((var_4 ? ((max(((4054457592 ? 4294967282 : 6)), (arr_17 [7])))) : (max(-3688201047867006164, 1))));
        var_23 = (min((arr_16 [14] [i_4]), (((arr_16 [i_4] [21]) ? (((max(var_3, (arr_16 [i_4] [i_4]))))) : (~728969260)))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_24 ^= (arr_9 [i_5] [i_6]);
                    arr_30 [i_5] [i_5] [i_5] = ((((var_1 ? (arr_11 [i_5] [i_5] [i_6] [0]) : (arr_11 [i_7] [i_7] [i_6] [i_5]))) >> (((min(((min(var_9, (arr_8 [i_5])))), ((3565998033 ? var_15 : 240509703)))) - 40))));
                }
            }
        }

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_25 = ((((min(18043, var_8))) > (((arr_16 [i_5] [i_8]) >> (var_10 - 48)))));
            arr_33 [i_5] = (var_10 ^ var_0);
            arr_34 [i_5] [i_8] [i_8] = arr_28 [i_5] [3] [3] [i_5];
            arr_35 [i_5] [i_5] = min(3565998036, 255);
        }
    }
    #pragma endscop
}
