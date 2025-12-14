/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((~680873583) >> (var_9 - 397591006094345085)))), (min((var_5 * var_1), ((var_5 ? var_5 : var_0))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_11 = (((((((min(var_0, var_1))) ? (-1493048344935080965 - 9) : var_8))) - (((var_4 | var_0) ? 140737486258176 : (arr_3 [i_1 - 1] [i_1 - 1] [i_0 + 1])))));
            arr_4 [i_0 + 1] = (((-8408825626985146758 - var_9) + var_0));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                arr_11 [i_0] [i_0] [i_0] |= (arr_2 [i_0] [i_2] [i_2]);
                var_12 = (arr_2 [i_0 - 1] [i_0] [i_0]);
            }

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_13 = 1;
                    var_14 = ((((min((arr_16 [i_0]), (max(var_9, (arr_12 [i_0] [i_0])))))) <= var_7));
                    var_15 = ((~(arr_5 [i_5] [i_5])));
                    var_16 = var_0;
                }
                var_17 = (((!var_1) | ((var_2 * (arr_7 [i_0] [i_2] [i_4 - 1])))));
                arr_17 [i_0] [i_0 + 2] [i_0] [i_4] = (min(((((-9223372036854775807 - 1) <= ((var_3 ? var_4 : var_5))))), (arr_14 [i_0] [i_2])));
                var_18 = (((~var_3) | (((arr_12 [i_4 + 1] [i_2]) ^ (arr_12 [i_0 + 1] [i_0 + 1])))));
                var_19 = ((var_0 | (((arr_15 [i_0] [i_2] [i_2] [i_4]) + (arr_7 [i_4 + 1] [i_0 + 2] [i_4 + 1])))));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_22 [i_0] [i_2] [i_6] [i_0] = ((58 ? 9223372036854775807 : 246));
                var_20 = ((((min(var_3, (arr_14 [i_0] [i_0 - 1])))) ? var_1 : (((arr_14 [i_0] [i_0 + 1]) ? (arr_14 [i_0 + 1] [i_0 + 2]) : (arr_14 [i_0] [i_0 - 1])))));
                arr_23 [i_2] [i_2] [i_0] = (((!var_7) + (arr_20 [i_0] [i_0 - 2] [i_0] [i_0])));
                arr_24 [i_0 - 2] = (((min((197 << var_3), var_4)) / (arr_8 [i_0])));
            }
            var_21 = ((~(((!(arr_14 [i_0] [i_0 - 1]))))));
            var_22 = (((var_6 != var_9) << (((((((101 != (arr_0 [i_0] [i_2]))))) <= (max(var_7, 1)))))));
        }
        var_23 = ((+((var_7 ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_41 [i_7] [7] [1] [i_7] [i_9] = (((((((arr_15 [i_7 + 2] [i_9 + 1] [i_10] [i_11]) < (arr_15 [i_7 + 1] [i_7 + 1] [i_9] [i_11]))))) + (~var_0)));
                                var_24 = (max(var_24, (!7085880258950591530)));
                                var_25 += 7;
                                arr_42 [i_9] [i_7] [10] [i_10] [i_11] = (arr_7 [i_9 - 3] [i_9] [i_9]);
                                arr_43 [i_7] [i_9] [i_11] = var_6;
                            }
                        }
                    }
                    var_26 = (~((14 >> (((arr_14 [i_9] [i_8]) - 41)))));
                }
            }
        }
        arr_44 [i_7] = 288228177128456192;

        /* vectorizable */
        for (int i_12 = 2; i_12 < 8;i_12 += 1)
        {
            arr_47 [i_7] [i_7 + 1] [i_7] = (((((arr_5 [i_7] [i_12]) >> 59)) > (arr_9 [i_7] [12] [12])));
            var_27 = ((-(arr_37 [i_7 + 2] [i_12] [i_12 - 1] [i_7 + 2])));
        }
        arr_48 [i_7] = ((~((((arr_36 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 2]) < (1347522771 | var_6))))));
    }
    var_28 = var_6;
    var_29 = (2132567328 & var_4);
    #pragma endscop
}
