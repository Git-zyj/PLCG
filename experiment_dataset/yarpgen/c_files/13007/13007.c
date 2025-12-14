/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 3188706168391414275));
    var_20 = ((((var_4 ? (var_13 == var_12) : (-8881588193447830543 / var_6))) * var_7));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_21 = (((((8881588193447830545 ? (arr_1 [i_0 + 1]) : 35531))) ? (((var_12 % -16285) ? (16280 + var_18) : ((((arr_1 [i_0]) ? var_11 : (arr_1 [i_0])))))) : ((var_12 ? (max(var_18, var_0)) : (arr_1 [i_0 + 2])))));
        var_22 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = ((var_17 ? (~152) : (arr_3 [i_1 - 2])));
        arr_6 [i_1] = (((arr_4 [i_1 - 1] [i_1]) / (arr_4 [i_1 - 1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_23 = (max(var_23, ((((((var_7 ? (arr_8 [i_2 - 1] [i_2 - 2]) : var_1))) ? var_4 : var_12)))));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_12 [i_2] = (2804970636 ^ -5100);

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_16 [i_2] [7] = 18423;
                var_24 = (min(var_24, var_15));
            }
            var_25 = (((arr_1 [i_2 + 1]) / (arr_1 [i_2 - 1])));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_26 = (arr_3 [i_2 + 1]);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    {
                        var_27 = (var_11 + 16263);
                        arr_23 [i_2 + 1] [i_2 - 2] [i_2 + 1] = ((arr_22 [i_7] [i_7] [i_6 - 2] [i_2 - 2]) * (((var_4 ? var_13 : 152))));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_28 [i_2 - 2] = arr_10 [i_5] [i_8];
                            arr_29 [8] [i_5] [i_6 - 2] [i_7 - 1] [i_8] [6] = ((arr_19 [i_6] [i_6 - 1] [i_6]) ? 47113 : (arr_19 [8] [i_6 - 1] [i_6 - 2]));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_28 = ((var_9 > (!0)));
                            arr_33 [i_9] = (arr_32 [i_9]);
                        }
                        var_29 = 11992;
                    }
                }
            }
            arr_34 [i_2 + 1] [i_2] = ((8881588193447830542 ? -1916016085 : (arr_24 [i_5] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1])));
            var_30 = (((arr_19 [i_2 - 2] [i_2] [i_2]) ? var_7 : ((var_0 ? var_13 : 32378))));
            var_31 = 1573695237;
        }
        for (int i_10 = 4; i_10 < 9;i_10 += 1)
        {
            var_32 += (var_3 > var_13);

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                arr_42 [i_11] [i_10] [i_2 - 1] = var_7;
                arr_43 [i_2 + 1] = -1916016085;
            }
            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                arr_48 [i_2 - 1] = ((7 ? var_10 : (arr_15 [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_10 - 2])));
                var_33 = (~33158);
                arr_49 [i_2 - 2] [i_10] [i_12 - 1] = arr_10 [i_2 - 2] [8];
                var_34 = ((var_16 ? 3519730562385282078 : (arr_22 [i_2 - 1] [i_10] [i_12 - 1] [9])));
            }
            var_35 = (arr_24 [i_2 - 1] [i_10] [i_2] [i_10 - 4] [i_2 + 1] [i_2] [i_10 + 1]);
            arr_50 [i_10] [2] = (1095 && 7472408541783985228);
        }
        for (int i_13 = 4; i_13 < 8;i_13 += 1)
        {
            arr_53 [0] [4] [i_13 - 4] |= ((~(arr_38 [3] [i_13 - 2])));
            arr_54 [i_13 + 1] = (arr_18 [i_13 - 3] [5] [i_2 + 1]);
        }
    }
    var_36 = ((~(((var_4 & var_17) ? 36385 : var_18))));
    var_37 = ((~(~var_13)));
    #pragma endscop
}
