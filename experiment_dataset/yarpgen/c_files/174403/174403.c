/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1773501295;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = ((!(arr_1 [i_0] [i_0])));
        var_19 = (min(var_19, (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_20 = (min(var_20, (618 & -12105)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] = ((-(arr_11 [i_3 + 3] [i_3] [1] [3])));
                        var_21 = (arr_6 [i_0] [i_0]);
                        var_22 = ((var_6 ? (arr_6 [i_3 + 2] [i_2]) : ((-967 ? var_1 : var_6))));
                        arr_13 [i_0] [i_0] [5] [i_0] [i_0] [i_0] = (((((~(arr_6 [i_3] [i_0])))) || -var_11));
                    }
                }
            }
            var_23 = (((arr_9 [i_1] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [4] [i_1])));
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] = (((arr_8 [i_4 + 2] [i_4 + 2]) ^ (arr_8 [i_4 + 1] [i_4 + 1])));
            var_24 &= ((var_10 ? (arr_11 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_0]) : (arr_14 [i_4] [i_4 + 1] [i_0])));
        }
        for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
        {
            var_25 = (arr_10 [i_5 - 1] [i_5 + 2]);
            var_26 &= ((-(arr_7 [i_0])));
            arr_19 [i_0] [i_5] [i_0] = (arr_2 [i_5 + 1]);

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_27 &= (((arr_14 [i_5 + 2] [i_5 + 2] [i_5 + 2]) ^ ((~(arr_5 [i_0] [6] [i_5])))));
                var_28 = (var_11 * 27140);
                var_29 *= ((!(arr_15 [i_5 - 1] [i_5 + 2])));

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_24 [i_6] [2] [i_0] = ((arr_5 [i_5 - 1] [i_0] [i_6]) ^ (arr_5 [i_5 + 2] [i_0] [i_5 + 2]));
                    var_30 = (min(var_30, ((((var_8 <= 255) & (147 & 153))))));

                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_27 [8] [i_0] [i_6] [8] [i_0] = (arr_15 [i_5 - 1] [i_5]);
                        var_31 = 32767;
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [7] [i_0] = (arr_8 [i_0] [i_0]);
                        var_32 = 37291;
                        var_33 = (min(var_33, (((21 ? 32767 : 111)))));
                    }
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    var_34 += var_11;
                    var_35 = (min(var_35, (((-(arr_10 [i_0] [i_5 + 1]))))));
                    arr_35 [i_0] [i_5] [i_6] [i_10] [i_6] [i_0] = ((-1 % (arr_7 [i_5 + 2])));
                    var_36 = (arr_10 [i_0] [i_5 - 1]);
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                {
                    arr_39 [i_0] [4] [i_0] [i_11] [i_0] = var_14;
                    var_37 = ((49523 ? (arr_9 [i_5 + 2] [i_5 - 1]) : (arr_29 [i_0] [1] [i_0])));
                    arr_40 [i_11] |= ((arr_20 [3] [3] [i_6]) ? (arr_5 [i_5] [i_11] [i_5 + 2]) : (var_8 || var_16));
                    var_38 = (((arr_2 [i_5 + 1]) % (arr_2 [i_5 + 2])));
                }
            }
            for (int i_12 = 4; i_12 < 8;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 7;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_39 = (arr_42 [i_12 + 2] [i_13 + 2] [i_5 - 1] [i_12 + 2]);
                            var_40 = (((arr_25 [i_0] [i_0] [i_12] [i_13 - 1] [i_0]) ? 58 : (arr_8 [i_0] [i_0])));
                            arr_47 [i_0] [i_14] [i_0] [i_13] [i_14] = (arr_6 [i_5 + 2] [i_12 - 3]);
                        }
                    }
                }
                var_41 = (arr_34 [i_0] [i_5] [i_5] [0]);
                var_42 = (arr_25 [5] [i_12 - 3] [i_12] [i_12 - 3] [i_0]);
                arr_48 [i_0] [i_5 + 1] [i_0] = ((arr_0 [i_0]) ? var_14 : ((((arr_8 [i_12] [i_5]) <= -630651832))));
                arr_49 [i_0] [i_5] [i_12] = 4294967295;
            }
            for (int i_15 = 4; i_15 < 8;i_15 += 1) /* same iter space */
            {
                var_43 = (arr_26 [i_0] [i_5 - 1] [0] [i_15] [i_5]);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 7;i_17 += 1)
                    {
                        {
                            var_44 = var_0;
                            var_45 += (65535 || 4294967291);
                            var_46 ^= (((((194 ? -15591 : var_13))) ? (arr_37 [i_17] [i_17] [i_17] [i_17]) : (arr_46 [i_0] [i_0])));
                            arr_57 [i_0] [i_5 + 1] [i_0] [i_0] [i_17] = ((var_7 & (arr_28 [i_17 - 3] [i_15 - 1] [i_15 + 2] [i_15 - 3] [i_15 - 4] [i_5 - 1])));
                        }
                    }
                }
                var_47 &= (arr_2 [i_15 - 4]);
            }
            arr_58 [i_0] = ((-32763 ? (arr_53 [i_0] [i_5 - 1]) : (arr_43 [5] [i_5] [0])));
        }
    }
    #pragma endscop
}
