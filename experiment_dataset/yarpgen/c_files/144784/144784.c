/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [1] [i_0] [i_0] [i_2] |= var_15;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_19 -= (arr_4 [13]);
                        arr_15 [i_0] [i_0] [i_0] [i_1] = (~-1490944449509663793);
                        var_20 = 65535;
                        var_21 = (min(var_21, (((((var_3 + -57) % 1))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_22 = arr_12 [i_0] [i_0] [i_0] [i_1];
                            arr_21 [i_0] [i_1] [i_2] [6] [i_5] = (!5);
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_24 [10] [i_0] [i_2] [i_1] = (((1 ? -4 : 1490944449509663816)));
                            arr_25 [i_6] [i_6] [i_1] [i_1] [i_1] [6] [i_0] = (((var_14 ? 1 : (arr_0 [i_2]))));
                        }
                        arr_26 [i_0] [15] [7] [1] [i_1] [i_1] = (((arr_3 [i_0]) ? (((arr_4 [i_0]) % var_18)) : (arr_19 [i_0] [i_1] [1] [i_2] [10] [i_2] [i_4])));
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_23 = ((-32761 ? (arr_22 [i_1] [i_2] [i_1]) : var_1));
                        arr_29 [11] [i_1] [i_1] [i_0] = (((var_5 ? (arr_3 [i_7]) : (1 >= var_4))));
                        var_24 = ((~(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_25 = (min(var_25, (((max(var_9, (arr_23 [i_0] [i_1] [i_2] [i_8] [i_0])))))));
                            arr_35 [i_0] [i_8] [i_2] [i_1] [i_0] |= (((~(((!(arr_4 [i_1])))))));
                            arr_36 [i_1] [i_1] [i_2] [i_8] [i_9] = ((-(((arr_28 [i_8] [i_2] [8]) & (arr_28 [i_2] [i_8] [i_9])))));
                            arr_37 [i_1] [3] = ((((((arr_31 [i_1] [15] [i_8] [7]) - (arr_31 [i_1] [i_9] [i_9] [i_9])))) ? (arr_31 [i_1] [i_1] [i_1] [3]) : (min((arr_31 [i_1] [4] [i_8] [i_9]), (arr_31 [i_1] [i_1] [i_1] [i_1])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_26 = -797137841;
                            arr_42 [i_1] [16] [i_2] [i_1] [i_1] = ((~(((arr_5 [i_0] [2] [i_2]) - (arr_7 [6] [i_1] [i_0])))));
                            var_27 = (max(var_27, 1));
                        }
                        var_28 = (max(var_28, (((max((arr_18 [i_0] [2] [2] [i_8]), (arr_18 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                }
            }
        }
    }
    var_29 ^= var_3;
    var_30 = var_14;
    var_31 &= (min(-797137818, (((4122338722 ? var_17 : var_1)))));
    #pragma endscop
}
