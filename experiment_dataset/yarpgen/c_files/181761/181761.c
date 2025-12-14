/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_10 = (arr_5 [i_1 - 1] [i_1]);
            var_11 = var_0;

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_12 = (max(var_12, ((((arr_5 [i_0] [i_1 - 2]) ? var_9 : (arr_2 [i_0] [i_1]))))));
                var_13 = 29;
                var_14 = (0 != 0);
                var_15 |= var_1;
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_16 = 0;
                var_17 = ((0 ? 33 : 111));
                var_18 = ((var_9 ? (arr_9 [i_1 - 2]) : 203));
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_19 = 66;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 = (!21546);
                            var_21 = var_0;
                        }
                        var_22 = var_3;

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_23 |= ((var_6 ? var_4 : 1982806607));
                            var_24 = (5 ? ((21546 << (((arr_8 [i_5] [i_1 - 2] [8] [i_5]) - 13602840093311064730)))) : ((223 ? (arr_17 [i_7] [i_5] [i_1] [i_1]) : (arr_13 [i_0]))));
                            var_25 = (i_0 % 2 == 0) ? (((0 << (((arr_7 [i_0] [i_1] [i_0]) - 181))))) : (((0 << (((((arr_7 [i_0] [i_1] [i_0]) - 181)) - 27)))));
                            var_26 ^= var_2;
                        }
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            var_27 = ((arr_10 [i_4] [i_4 - 1] [i_4 - 1]) ? (arr_10 [i_4] [i_4 - 1] [i_4 + 1]) : 33);
                            var_28 -= (arr_17 [i_0] [i_8 - 2] [i_4 - 1] [i_1 - 2]);
                            var_29 = ((0 ? 0 : 1));
                            var_30 = (((arr_14 [i_8 - 1] [i_0] [i_0] [i_0]) <= (arr_16 [i_8] [i_8] [i_8 - 1] [i_8 - 2] [4] [i_4 + 1])));
                        }
                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            var_31 = 21546;
                            var_32 = (arr_24 [i_9] [i_0] [15] [i_5] [1] [1] [i_1]);
                            var_33 = 1;
                        }
                    }
                }
            }
        }
        var_34 |= 53;
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            {

                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    var_35 = ((!1810256582) << (var_1 + 66));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_36 = (((-21547 ? 8875639756060582432 : 53)));
                                var_37 = (min(var_37, var_4));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_15 = 3; i_15 < 13;i_15 += 1)
                {
                    var_38 = ((-(arr_0 [i_15 - 2])));
                    var_39 = arr_39 [i_10] [i_11] [i_15];
                }
                var_40 += var_2;
                var_41 = (~52);
                var_42 *= (min(54987, (min(196, (9869750843468827867 << 0)))));
                var_43 = (max(1536, ((~(arr_29 [i_10])))));
            }
        }
    }
    var_44 += -1537;
    var_45 = var_5;
    var_46 = 1536;
    #pragma endscop
}
