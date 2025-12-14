/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_8 > var_2) ? (max((((-127 - 1) % 18446744073709551615)), ((489192448 ? 9 : var_2)))) : (((~(127 - 4256718362))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_12 [i_4] [i_1] [i_2] [i_3] = (18446744073709551603 | var_4);
                        var_12 = (((arr_10 [i_2 - 4] [0] [i_2 - 4] [i_2] [i_2 - 4]) << (((arr_10 [3] [i_2] [i_2 - 4] [i_2] [i_2 - 4]) - 8799))));
                        var_13 = ((var_7 % (arr_11 [5] [i_1] [i_2] [i_1] [i_1] [i_2])));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_14 = (max(var_14, var_8));
                        var_15 += var_3;
                    }
                    var_16 = 38248933;
                    arr_15 [i_3] [i_2] [i_1] [i_2] [i_0] = 104;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        var_17 -= (((18343094267946438301 * var_1) && (((arr_6 [i_0] [i_0]) == (arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] [i_7 - 2] [i_7])))));
                        var_18 = (arr_10 [i_0] [i_7 - 2] [17] [i_2 - 1] [12]);
                        arr_21 [i_2] [i_1] [i_1] [i_1] [i_1] = ((var_10 == var_2) >= var_4);
                        arr_22 [i_0] [i_2] [17] [i_0] [i_0] = (((arr_11 [i_2 + 1] [i_2] [i_2] [i_6] [i_7 - 2] [i_7 - 1]) ? (arr_13 [i_2 + 1] [i_2] [i_6] [i_7] [i_7 - 2]) : (arr_11 [i_2 + 1] [i_2 + 1] [i_2] [i_7] [i_7 - 2] [1])));
                    }
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        var_19 = (max(var_19, (((((84 <= (arr_2 [10] [i_1] [14]))) ? var_4 : var_0)))));
                        var_20 *= ((38248933 <= (arr_20 [i_1] [i_2 - 4] [i_2 - 3] [i_2 - 3] [i_0] [i_2] [i_8 + 2])));
                    }
                    arr_25 [i_2] [i_2 - 1] [i_1] [i_0] [i_2] = (127 ? (((var_5 ? var_8 : var_3))) : (arr_4 [i_2 - 2] [i_1] [i_0] [i_2]));
                    arr_26 [i_0] [i_2] [i_2 + 1] [i_6] = ((var_1 % (65535 - 57596)));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_21 -= ((var_5 ? (1 && 57185572280177571) : (((arr_13 [i_9] [i_0] [i_1] [i_0] [i_0]) ? var_2 : 38248933))));
                    var_22 = ((var_5 % (arr_28 [i_2 + 1] [i_2] [i_2] [i_2 - 1])));
                    arr_29 [17] [i_0] [i_0] [i_2] [16] [i_0] = var_1;
                }
                var_23 = (((arr_14 [i_2 - 2] [1] [i_2 - 2] [13] [i_2] [i_2]) | (arr_3 [i_0] [i_0] [10])));
                var_24 = (min(var_24, var_10));
                arr_30 [i_2] = ((var_9 >> 1) ^ (arr_7 [i_2] [i_2 - 2] [i_1] [i_2 - 2] [i_2 - 2]));
            }
            var_25 -= (((var_4 > var_6) ? ((max((9 && 100), (min(20680, var_2))))) : var_1));
            var_26 *= ((809990984 ? 127 : 127));
            arr_31 [0] [19] = 207;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_34 [i_0] [i_0] [i_0] = (arr_24 [i_0] [i_0] [8]);
            var_27 = (max(var_27, (arr_3 [i_0] [i_10] [i_0])));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_28 = var_2;
            var_29 *= (var_10 + var_7);
        }
        var_30 -= ((!(((((var_1 >= (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? var_8 : var_5)))));
        arr_39 [i_0] |= ((var_6 ? (arr_13 [1] [1] [i_0] [11] [i_0]) : (arr_27 [i_0] [i_0] [i_0] [i_0])));
        var_31 -= ((max((arr_10 [i_0] [12] [11] [i_0] [i_0]), var_6)));
    }
    var_32 = var_7;
    var_33 = ((((max((!var_3), ((var_9 ? 1 : -105))))) ? var_0 : (((((-1470393765 | 0) != (((var_2 ? var_2 : var_6)))))))));
    #pragma endscop
}
