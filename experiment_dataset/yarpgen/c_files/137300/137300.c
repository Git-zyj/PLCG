/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((28111 << (var_3 - 2915718364)))) ? 127 : ((-13248 ? var_11 : var_7)))) < 504873591));
    var_18 = (max(((var_5 >> ((((min(-125, var_14))) + 128)))), ((var_2 ? (!var_0) : var_16))));
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = arr_1 [17];

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                arr_8 [1] = (((min(((((arr_2 [4] [4] [3]) ? (arr_3 [11]) : (arr_2 [i_0] [3] [6])))), (arr_7 [2] [i_1] [i_0]))) - -52));
                var_21 = (max(var_21, (arr_2 [1] [0] [i_2])));
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_22 = (max(var_22, (arr_1 [i_0])));
                var_23 = (((~(arr_5 [7] [7] [6]))));
            }
            for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
            {
                arr_13 [20] [20] [i_4] = arr_2 [i_0] [15] [i_4];
                arr_14 [i_4] [17] [19] = 1;
            }
            var_24 = (max(var_24, -13242));
            var_25 = (min(var_25, 25952));
            var_26 = ((~((var_13 ? (arr_7 [9] [18] [9]) : var_6))));
            var_27 += (max((arr_1 [10]), (((arr_5 [i_0] [i_1 + 2] [6]) ? (((arr_0 [i_0]) ? 13241 : (arr_12 [9] [i_1] [9]))) : (arr_10 [14] [13] [1])))));
        }
        var_28 = ((((-(arr_6 [5] [19] [i_0]))) ^ ((~((var_7 ? (arr_10 [11] [20] [8]) : var_13))))));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_29 += (((((((((arr_16 [1]) / 1003161702))) ? (var_0 && 33956078677866359) : 43))) ? (arr_9 [i_0] [1] [21]) : (((!((((arr_11 [7]) ? var_12 : var_15))))))));
            arr_17 [18] = 3394421519;
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_30 = (max(var_30, ((min(((-(arr_22 [8] [15] [i_7]))), (arr_20 [i_6] [i_6] [i_6] [i_6]))))));
                var_31 = (arr_6 [0] [10] [11]);
                var_32 += ((((((arr_19 [3] [19] [19]) < var_12))) <= (((!((((arr_21 [18] [18]) ? var_11 : (arr_20 [8] [10] [8] [15])))))))));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        var_33 = (-13258 != 24);
                        var_34 = (((arr_28 [i_9 + 2] [i_9 + 3] [i_9 + 3] [7] [17] [i_9 + 1]) ? (((1990484123 ? var_10 : 120))) : ((1392423239 ? 298710356 : var_5))));
                        arr_30 [1] [i_9] [16] [1] [i_8] [i_8] [i_8] = (((arr_27 [i_7] [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9 - 1]) ? (arr_27 [i_7] [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 - 1]) : var_1));
                        arr_31 [13] [13] [13] [i_9] [9] = (!var_11);
                    }
                    arr_32 [9] [18] [9] [18] [1] [2] = ((120 / (arr_22 [i_6] [i_6] [i_0])));
                    var_35 = var_4;
                }
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    arr_35 [i_6] [i_0] = (min(0, 129));
                    var_36 ^= var_4;
                }
                arr_36 [19] [19] [19] = (min(((max(var_4, (((!(arr_29 [4] [1] [10] [i_7] [i_7]))))))), ((((390347128 ? (arr_26 [6]) : (arr_7 [i_0] [i_0] [12]))) ^ (arr_10 [i_0] [2] [7])))));
            }
            var_37 = (max(var_37, 683951922));
        }
    }
    for (int i_11 = 1; i_11 < 16;i_11 += 1)
    {
        var_38 = (max(var_38, (((((((((-(arr_38 [16])))) ? ((((-32767 - 1) || (arr_3 [3])))) : ((390347128 ? 33836 : (arr_28 [i_11] [0] [i_11] [1] [0] [i_11])))))) ? (max(((65535 ? (arr_33 [13]) : var_14)), ((((arr_6 [i_11] [14] [3]) ? (arr_1 [1]) : -1211772197))))) : var_4)))));
        var_39 = var_13;
    }
    #pragma endscop
}
