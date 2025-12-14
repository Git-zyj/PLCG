/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_8, ((((max(244, var_2))) / ((var_1 ? var_2 : var_0))))));
    var_13 = (max(var_13, var_7));
    var_14 = ((~(((((var_8 ? var_1 : var_10))) ? (((var_1 ? 244 : var_7))) : (244 | var_0)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min(((2147483647 < (arr_2 [i_0] [i_0]))), (((arr_1 [i_0]) < var_0))));
        var_15 = (max((arr_3 [i_0] [i_0]), ((var_0 >> (var_0 - 10285762090428470585)))));
        arr_5 [i_0] = var_1;
        arr_6 [i_0] = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? ((var_7 ? (arr_2 [i_0] [i_0]) : var_9)) : (((arr_2 [i_0] [i_0]) | var_7))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_16 = -1015454774;
            var_17 = ((((var_10 ? (-2147483647 - 1) : var_8)) * (arr_3 [i_0] [i_0])));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [9] [i_3] = (((arr_9 [i_0]) >> (var_5 + 12)));
                    var_18 += ((((127 ? var_4 : (arr_8 [i_0] [i_1])))) ? (var_0 > 243) : ((((arr_1 [i_3]) == var_11))));
                    var_19 = (~var_10);
                    var_20 = (((arr_8 [i_0] [i_0]) / var_7));
                    var_21 ^= (~var_2);
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_22 += (((arr_14 [i_4] [0] [0] [i_0]) ? (arr_14 [i_0] [6] [i_0] [i_0]) : var_9));
                    var_23 = 4340232536389201932;
                }
                var_24 = (max(var_24, var_8));
                var_25 = var_8;
                var_26 = ((~(((((arr_7 [i_0] [i_1] [i_2]) + 9223372036854775807)) << (32291 - 32291)))));
                var_27 = (max(var_27, (arr_0 [i_1])));
            }
            var_28 = (min(var_28, (((2147483635 ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : ((-110 ? var_5 : 1)))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                var_29 = ((!(((~(arr_7 [i_0] [i_5] [i_6]))))));
                arr_21 [i_0] [i_0] = (arr_7 [i_6 + 1] [i_6 - 2] [i_6 - 2]);
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_24 [7] [7] = (((1 < var_0) > -124));
                arr_25 [11] [4] [i_7] [1] = ((arr_14 [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_7] [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_7]));
                var_30 = (((arr_14 [i_0] [i_5] [i_5] [i_0]) >= (arr_10 [i_0] [i_5] [i_5])));
            }
            arr_26 [i_0] [i_5] [i_5] = ((((max((arr_9 [i_5]), -3709272079002879919))) ? (max((max(var_4, 26812702650767720)), (-2147483636 / 20726))) : var_0));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_31 = (arr_8 [i_0] [i_0]);
                            var_32 += ((~(((arr_31 [i_0] [i_5] [i_10] [i_8] [i_9] [i_10]) * (arr_3 [i_0] [i_5])))));
                        }
                    }
                }
            }
            arr_35 [i_0] [i_0] [i_0] |= ((((((arr_14 [i_0] [i_0] [i_0] [i_0]) ? var_11 : (2147483647 % 75))) + 2147483647)) >> var_7);
            var_33 |= ((((max(((var_6 + (arr_7 [i_5] [i_0] [1]))), (arr_27 [i_0] [i_0] [i_0] [i_0])))) ? 17533 : var_3));
        }
    }
    var_34 = ((max((var_9 | var_8), (var_10 | var_11))));
    #pragma endscop
}
