/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min((((var_9 ? var_5 : var_18))), var_1)), (var_1 ^ var_1)));
    var_20 = (min(((((max(var_5, var_5))) ? (((var_12 ? var_17 : var_10))) : -18446744073709551612)), (max((~18446744073709551608), (-9223372036854775807 - 1)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] &= (((!89) && (((((var_16 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) && (((arr_0 [5] [i_0]) || (arr_0 [i_0] [2])))))));
        var_21 = (arr_0 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_1] &= 18446744073709551613;

            for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
            {
                var_22 = var_12;
                var_23 = var_18;
            }
            for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_24 = (min(var_24, (arr_3 [4] [i_3 + 2])));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_20 [12] [i_1] [2] = (126 ? 1 : (236 && 470437053761006749));
                        arr_21 [15] [i_3] [8] [i_3] &= (arr_5 [i_1] [i_3 + 2] [i_4]);
                    }
                    var_25 = (min(var_25, (((arr_1 [i_3] [i_3 - 1]) ? (arr_1 [i_3] [i_3 + 2]) : (arr_6 [i_3 + 1])))));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_26 [i_0] [i_0] [i_0] [i_0] = (arr_24 [9] [9] [9] [i_3 + 1] [i_6]);
                    arr_27 [i_0] [i_0] [i_0] [i_6] = (~var_15);
                    var_26 = (min(var_26, ((((arr_11 [i_1] [6] [i_3] [i_3 - 1]) ? (arr_22 [i_6] [i_3] [i_1]) : var_12)))));
                }
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    arr_30 [i_0] [i_0] [10] [i_7] = -var_15;
                    var_27 = (max(var_27, ((((arr_10 [i_0] [i_7 + 1] [i_3 + 2]) & (arr_10 [i_0] [i_7 + 2] [i_3 + 2]))))));
                    arr_31 [i_0] [i_0] [i_3] = (((arr_25 [15] [8] [8] [i_0]) || -54));
                    var_28 = (((var_7 && var_16) ? -var_10 : var_0));
                }
                arr_32 [i_3] [i_1] [i_0] = var_8;
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_35 [4] [4] = ((min(14, (arr_10 [i_0] [i_8] [i_8]))));
            arr_36 [i_8] [i_0] = 15;
            arr_37 [i_0] [i_8] [0] &= ((((arr_14 [i_0]) == ((-32745 ? (arr_14 [i_0]) : var_13)))) ? (arr_33 [i_8] [i_8]) : (max(148, 0)));
        }
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            arr_42 [i_0] [i_9] = (max(((max(45, -2147483624))), (max((max(-3483211872269418562, 120)), (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_29 = (((arr_15 [i_9 + 4]) ? (((!(arr_17 [12] [i_9] [i_9 + 3] [12])))) : ((((!(arr_28 [i_0] [i_0] [i_0] [i_0] [12] [i_9])))))));
            var_30 = ((-((~(arr_28 [i_9] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 4] [i_9 + 1])))));
        }
    }
    #pragma endscop
}
