/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [4] [4] = -16;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (191 != 6479896001081460951)));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 |= (var_15 && 1415531437);

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_21 = (~1415531426);
                            var_22 = (11 == 65535);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_2] [i_5] = ((arr_7 [i_0] [i_0] [i_0]) & (6466154540213763297 == var_16));
                            arr_18 [i_1] [i_1] [i_2] [i_3] [i_5] [i_2] [i_3] = 1415531410;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_23 &= 0;
                            arr_22 [i_0] [i_1] [i_6] [i_3] [i_6] = var_9;
                            arr_23 [i_6] [i_1] [i_6] = 2047689659294479255;
                            arr_24 [i_6] [2] [i_6] [i_3] [i_6] [i_1] [i_0] = var_2;
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_1] [i_1] [4] [i_2] [i_1] [i_1] [i_0] = var_2;
                            var_24 = (min(var_24, (((2047 ? var_14 : 589323159)))));
                            var_25 = var_13;
                        }
                        arr_29 [i_0] [i_0] = ((var_7 - (arr_2 [8])));
                        arr_30 [i_3] = 1823672768;
                        arr_31 [i_3] [i_3] [i_3] &= (220 + 6466154540213763297);
                    }
                    var_26 = var_4;
                }
            }
        }

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_34 [0] [i_8] [8] = ((-823659728 ? -257755437 : (arr_13 [i_8] [i_8] [i_8] [0] [i_8] [i_0] [i_0])));
            var_27 ^= 255;
            var_28 *= var_10;
        }
        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            arr_37 [i_0] [i_9] = ((~(~131071)));

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_29 -= (((((arr_8 [i_9] [i_9] [i_9]) == 1047129828)) ? (-1047129828 - 5146) : (arr_13 [i_0] [i_0] [i_0] [4] [4] [i_0] [1])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_44 [i_0] [i_0] [i_9] [i_12] = 220;
                            var_30 -= arr_25 [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                    }
                }
                var_31 += 1587427395;
                arr_45 [i_0] [i_9] = (((arr_16 [i_9 + 1] [i_9 - 2] [i_9 - 1]) && var_11));
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                arr_48 [1] [i_9 - 1] [1] |= (((-1823672768 ? 3291821973 : (arr_15 [i_0] [1] [i_0] [i_9] [i_13]))) >= (arr_12 [i_13] [i_13] [i_9] [i_9] [i_9] [i_9] [i_0]));

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_32 = (min(var_32, (((var_9 ? 17471 : 1047129842)))));
                    arr_52 [i_9] [i_9] = var_17;
                    arr_53 [i_9] [4] = -1627466031;
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        {
                            arr_61 [i_9] = 1678765883;
                            var_33 ^= ((((var_3 >= (arr_40 [1]))) || var_15));
                            var_34 = (((arr_51 [5] [i_0] [i_9] [i_0]) ^ var_3));
                            var_35 ^= (((((7 ? 1241477514 : 30644))) ? -1047129844 : 4042445368));
                        }
                    }
                }
                arr_62 [i_9] = ((var_9 - (arr_59 [i_15] [9] [i_9 - 1] [i_0])));
            }
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                var_36 = (max(var_36, -73));
                var_37 = var_1;
            }
        }
        var_38 = (max(var_38, (((var_6 << ((((-1823672765 ? -1047129845 : (arr_64 [i_0] [i_0] [0]))) + 1047129864)))))));
    }
    for (int i_19 = 0; i_19 < 16;i_19 += 1)
    {
        arr_69 [i_19] = (5143 > -257755437);
        var_39 = var_18;
    }
    var_40 ^= 2147483647;
    #pragma endscop
}
