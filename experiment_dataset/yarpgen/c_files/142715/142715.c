/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_3));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_16 = (min(var_12, (((arr_4 [i_0 - 1] [i_0]) ? 2147483643 : (arr_4 [i_0] [i_0])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (min(var_8, var_13));
                        var_18 *= 29848;
                    }
                }
            }
            var_19 *= -2147483644;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_14 [10] [6] [i_4] [i_0] = var_0;
                        arr_15 [i_0] [13] [i_4] [i_0] [i_0] [13] = (arr_5 [i_1] [i_1] [i_1] [i_5]);
                    }
                }
            }
            var_20 = 33094;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_21 ^= var_5;
            var_22 *= (((arr_11 [i_6]) ? var_14 : (arr_5 [i_0 - 1] [i_6] [i_0 - 1] [i_0 - 1])));
            arr_20 [i_6] |= ((var_11 ? var_14 : (arr_16 [i_0 + 2] [i_0 + 2])));
        }
        arr_21 [20] |= 3636640757;

        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_23 = (min((arr_29 [i_0] [i_7 + 1] [i_8 + 1] [i_7] [i_0]), ((((min((-2147483647 - 1), (arr_17 [i_0] [i_0] [i_8])))) ? ((2073166464 ? (arr_18 [i_7] [i_7]) : var_8)) : -var_7))));
                        var_24 += ((((max(224, 2147483641))) / ((1 ? 9223372036854775807 : 0))));
                    }
                }
            }
            var_25 = arr_13 [i_7 - 1] [i_7] [i_7] [i_0 - 2];
        }

        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_26 = var_12;
            var_27 &= (((((0 ? (var_12 / -2147483637) : (min(var_14, (arr_9 [20] [i_10] [i_10] [i_0] [i_0] [i_0])))))) ? ((2147483645 ? (min(0, -2147483647)) : -2147483635)) : (~625258088)));
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_28 = (!var_8);
                            var_29 ^= (((min(var_0, (((!(arr_26 [i_0] [i_10] [i_10] [i_13]))))))) && (((((max(var_4, var_4))) ? (var_6 ^ 232) : var_1))));
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_30 = ((((min(13711517877428614935, 3669709207))) ? ((((var_13 == (arr_34 [i_0]))))) : (((arr_28 [i_0 + 1]) ? (-2147483647 - 1) : 625258074))));
            var_31 = (min(var_31, (!-11552)));
            var_32 = (((arr_19 [i_0 + 1] [i_0]) >= (arr_19 [i_0 - 3] [i_0])));
            var_33 |= ((((max((max(var_14, (arr_33 [i_0] [i_14] [i_14]))), 15))) ? (min(((-11546 ? (arr_12 [i_14] [i_14] [i_0] [i_0] [i_14] [i_0]) : (arr_28 [i_14]))), (arr_23 [i_0 - 1] [i_0 - 1]))) : var_10));
        }
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 13;i_15 += 1)
    {
        arr_46 [i_15] = (((((-2147483644 ? var_14 : (arr_2 [i_15])))) ? var_10 : 0));
        arr_47 [i_15] = (((arr_39 [i_15 - 1] [i_15] [1] [i_15] [i_15 - 1] [i_15] [i_15]) ? ((((-2147483644 <= (arr_16 [i_15 + 2] [i_15]))))) : var_9));
    }
    var_34 = var_10;
    #pragma endscop
}
