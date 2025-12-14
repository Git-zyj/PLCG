/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = -4201128004664921771;
        arr_2 [i_0 + 3] = 19167;
        var_20 = (max((((arr_1 [i_0 + 2]) / 58947)), (var_8 * var_1)));
        arr_3 [6] [i_0] = (arr_1 [i_0 + 3]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [14] [i_1] = (arr_0 [i_0 - 1]);
            var_21 -= -7510;
            var_22 = ((4201128004664921770 < (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
        }
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_9 [9] = 18446744073709551615;

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_12 [i_2] [7] [i_2] = var_15;
            arr_13 [i_2] = ((var_10 ? var_15 : (((((-(arr_8 [i_2] [i_2])))) * (arr_10 [3] [3])))));
            var_23 = (arr_8 [i_2] [i_3]);
            var_24 = ((((((arr_4 [i_2]) ? var_2 : (arr_4 [i_2])))) ? (arr_4 [i_2]) : (arr_10 [i_3] [i_2])));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_16 [i_4] [i_4 + 1] [i_4] = var_14;
            var_25 = (max(((((arr_1 [i_4 - 1]) << (((arr_1 [i_4 - 1]) - 79))))), (min(4201128004664921770, 1801050816))));
            arr_17 [i_2] [i_4] = (arr_14 [i_2] [i_4 - 1] [i_4]);
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_26 = (min(var_26, 45106));
                        var_27 ^= (((max(var_3, (arr_15 [i_5 + 2] [i_5 - 1])))) ? ((1801050816 ? var_4 : (arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 3]))) : ((((arr_19 [i_5 + 2] [i_5 - 1]) && 16782092944951647640))));
                        var_28 = var_13;
                    }
                }
            }
            var_29 = min((arr_23 [i_2] [i_2] [11] [i_2]), (((!((min(var_16, 19179)))))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_29 [0] [i_5 - 2] [i_5 - 2] [i_8] [i_5 - 2] [9] = (arr_19 [i_2] [i_8]);
                        arr_30 [i_2] [i_5] [i_8] [i_9] [i_9] = 9223372036854775807;
                        arr_31 [i_2] [i_2] [i_2] [i_2] = (((6535081112121694548 == (arr_22 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]))));
                        arr_32 [i_2] [i_5 + 2] = 11307;
                        var_30 = (arr_4 [i_8]);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    {
                        var_31 = (arr_44 [i_13] [i_12 + 1] [i_13]);
                        var_32 = (+-3252282532256217784);
                        var_33 = (min(var_33, (arr_42 [i_10] [i_10] [i_10])));
                    }
                }
            }
        }
        arr_46 [i_10] = ((min((((var_2 > (arr_36 [i_10] [i_10] [i_10]))), var_11))));
    }
    for (int i_14 = 3; i_14 < 9;i_14 += 1)
    {
        arr_50 [i_14] [i_14 - 2] = var_5;
        var_34 += ((+(((arr_19 [i_14] [i_14 - 2]) ^ ((-(arr_0 [i_14])))))));
    }
    var_35 = (max(var_10, var_15));
    #pragma endscop
}
