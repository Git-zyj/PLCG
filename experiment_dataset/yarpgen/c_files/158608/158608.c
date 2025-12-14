/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((max(9223372036854775807, 1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_13 = (min(var_13, ((((arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_2]) ? (arr_4 [i_2]) : (arr_2 [i_2]))))));
                var_14 = (min(var_14, ((((~var_4) ^ var_1)))));
            }
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                arr_10 [i_0] [i_1] [i_0] [i_0] = ((!(arr_0 [i_0])));
                var_15 = (((!-9223372036854775807) ? -9223372036854775807 : (arr_5 [i_0] [i_3] [i_3 + 4] [i_3])));
                arr_11 [i_0] [i_1] [i_3 + 3] [i_3] = ((!((((arr_7 [i_0] [i_0] [i_3]) + (arr_9 [i_3]))))));
            }
            arr_12 [i_0 - 1] [i_0] [i_1] = -2001785447;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_16 = (--9223372036854775789);
            arr_17 [i_0] = (arr_2 [i_0]);
        }
        var_17 = (min(var_17, (arr_3 [8])));

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_18 *= ((-657557669 + (arr_1 [i_0 - 1] [i_5])));
            arr_20 [i_0] = (14 + -9223372036854775807);
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_19 = 1984123381699951511;
        arr_24 [i_6] [i_6 - 1] = (arr_1 [i_6 - 1] [i_6 - 1]);
        var_20 *= (arr_7 [14] [i_6] [i_6]);
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        arr_27 [i_7 + 1] = ((-9223372036854775807 / ((max(((-(arr_22 [7]))), (arr_4 [i_7]))))));

        for (int i_8 = 3; i_8 < 8;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_21 = (max((2001785447 > 0), (arr_6 [i_8] [i_9] [i_10])));
                        var_22 = (1 ? var_4 : ((((var_0 > (arr_5 [i_7] [i_7 - 1] [i_7] [i_7]))))));
                        var_23 *= ((((max(var_7, (arr_31 [i_7 - 1] [i_7] [7])))) ? var_6 : ((max(76, 1)))));
                        arr_34 [i_7] [i_7] [i_7] [i_7] = max((arr_3 [i_10]), ((max((arr_22 [i_7 + 1]), ((~(arr_1 [13] [i_10])))))));
                    }
                }
            }

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_24 = (max(((-2001785447 ? -9223372036854775803 : -13923)), (((4294967273 > (((max((arr_16 [i_7] [i_11]), var_2)))))))));
                var_25 = var_6;
                var_26 = max(((-(arr_5 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 2]))), ((((((var_0 ? var_10 : (arr_8 [i_7] [i_7] [i_7] [i_7 - 1])))) || 1))));
            }
            var_27 = (((arr_23 [i_7 - 1]) ? ((((arr_26 [i_7 - 1] [i_8 + 2]) ? (arr_5 [13] [16] [i_8 - 3] [i_8]) : var_6))) : (max(65535, (arr_26 [i_7 + 1] [i_8 - 3])))));
            var_28 = (min(var_28, (max(((((arr_8 [i_7] [i_7] [i_7] [7]) == (arr_30 [i_7] [i_8 - 3] [i_7])))), 1056587969))));
        }
        var_29 = ((((max(((max(0, 2001785445))), var_10))) ? (((~((~(arr_15 [i_7])))))) : ((-(arr_3 [i_7])))));
    }
    #pragma endscop
}
