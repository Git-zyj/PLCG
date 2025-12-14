/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = ((-(min((min(var_10, var_7)), var_7))));
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (max((min(722188031, var_9)), (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [2])))));
        arr_5 [i_0] = var_1;

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_14 = (((~(arr_8 [i_1 + 2] [i_1 - 3] [i_1 - 3]))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_15 ^= (((((((~(arr_11 [10] [i_2]))) / (((arr_0 [i_2]) ? var_10 : 193))))) && ((min((((arr_3 [i_0]) ? (arr_1 [i_1]) : (arr_12 [i_0]))), (((32762 - (arr_3 [i_1])))))))));
                        var_16 -= (max(var_3, ((+((((arr_1 [i_3]) && 201)))))));
                        var_17 += (((((-128 ? (arr_14 [i_0] [0] [i_0] [i_0] [i_0]) : 63))) && ((!(arr_8 [i_0] [i_2] [i_2])))));
                    }
                }
            }
            arr_15 [i_0] = ((-var_8 ? 511 : (((!(arr_8 [i_1] [5] [5]))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_18 = (((--49) ? 16461907879317906558 : (((62 - (min(var_8, 0)))))));
                        var_19 -= (max((!2673), (arr_21 [i_0] [i_1] [i_0] [i_0])));
                        arr_22 [i_0] = ((var_8 ? 255 : var_1));
                        arr_23 [i_0] [i_1] [i_4] [i_5] [i_5] = -22664;
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_32 [i_0] = 111;

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_20 |= (((arr_30 [i_6 - 1] [i_6 + 1] [i_8] [i_8] [i_6 - 1] [i_0]) ? (arr_30 [i_9] [i_6 - 1] [i_8] [i_8] [i_6 + 1] [i_0]) : (arr_27 [i_6 - 1] [i_6 + 1])));
                            var_21 = (min(var_21, (((~(arr_29 [i_0] [i_8] [i_7]))))));
                        }
                        var_22 = (min(var_22, (((((!((!(arr_34 [i_0] [i_8] [i_6] [2] [6]))))) ? -22677 : (arr_20 [i_0]))))));
                    }
                }
            }
            arr_36 [i_0] [i_6] = (arr_9 [i_0] [i_0] [i_0]);
            arr_37 [i_0] = (max((arr_28 [6] [i_0] [6] [i_6]), (min((((-(arr_9 [i_0] [i_0] [i_0])))), var_7))));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_23 = ((~(arr_7 [i_0])));
            arr_42 [2] [i_0] = (min((arr_16 [i_0] [i_0]), (((arr_38 [i_10] [i_10]) ? 104 : (arr_30 [i_0] [3] [i_0] [i_0] [i_0] [i_0])))));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_24 = (max(((((arr_31 [i_0] [i_0] [i_11] [7]) >> (((arr_31 [i_11] [i_11] [i_0] [i_0]) - 11606))))), -var_0));
            var_25 &= ((var_1 ? ((((var_7 | var_6) && -177))) : (((((((arr_8 [i_0] [i_0] [i_0]) / 206))) > ((var_3 ? 7963973608773229231 : var_6)))))));

            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                var_26 -= (max((((!((1840572588 != (arr_45 [8] [i_0] [8])))))), -109));
                arr_47 [i_0] [i_0] [i_0] = (((min(((((arr_0 [i_0]) / var_0))), var_5)) + (-2147483647 - 1)));
            }
        }
        var_27 |= ((-(arr_24 [i_0] [i_0] [i_0])));
    }
    var_28 ^= -16;
    #pragma endscop
}
