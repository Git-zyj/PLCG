/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 &= (max(((-(arr_0 [20] [i_0]))), (((~(max(-1832646500, -100)))))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = var_8;
            var_17 = 8267688675092819743;
            var_18 = (arr_2 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_19 += (((((arr_4 [i_0] [i_2]) + 2147483647)) >> ((((~((1 << (((arr_0 [i_2] [i_2]) - 12525248677237190879)))))) + 16))));
            var_20 = (min(var_20, (arr_6 [i_2])));
            arr_9 [i_0] [i_0] = ((~((~(arr_6 [i_0])))));
            var_21 += max((max(145603532, (14935586060961318905 - 62439))), (min((((!(arr_2 [i_2] [i_2])))), (max(2596558306934196007, var_4)))));
            var_22 = ((~(min(14935586060961318920, var_10))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_23 = (~var_12);

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_24 = (max(var_24, (arr_2 [i_0] [i_3])));
                var_25 = (arr_4 [i_3] [i_0]);
                var_26 = ((!(arr_4 [i_0] [i_0])));
                var_27 = ((var_7 / (arr_10 [i_4] [i_4] [i_4])));
            }
        }
        var_28 = var_11;
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 6;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_29 = var_6;
                            arr_27 [i_6] [4] [i_6] [i_7 + 2] [i_6] [i_6] = (arr_25 [i_5] [i_6] [i_7] [i_8 + 3] [i_9]);
                            var_30 = 1;
                            var_31 = 121;
                            arr_28 [i_6] [i_8] [i_6] [i_6] = ((-(arr_0 [i_6] [i_7 + 1])));
                        }
                        for (int i_10 = 4; i_10 < 9;i_10 += 1)
                        {
                            var_32 -= ((171 ? (((!(((10179055398616731875 ? 8267688675092819743 : 1)))))) : (((3678405828245362846 ? 10 : 1)))));
                            var_33 |= (arr_3 [i_10 + 1] [i_7 - 3] [i_6 - 1]);
                        }
                        arr_32 [i_6] [i_6] [1] [i_8] = (min((arr_14 [0] [0]), (max(var_0, -var_0))));
                        arr_33 [i_5] [i_5] [i_6] = 0;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 8;i_12 += 1)
                        {
                            {
                                arr_39 [i_5] [i_6] [i_6] [i_7] [i_7 - 2] [i_6] [i_12] = ((~(arr_13 [i_12])));
                                var_34 = ((var_12 ? (arr_0 [i_6] [i_6]) : 1));
                                arr_40 [i_12] [i_6 - 1] [i_6] [i_6 - 1] [i_5] = (min(((+(min((arr_11 [i_7] [i_7]), (arr_11 [13] [i_6]))))), 30091));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
