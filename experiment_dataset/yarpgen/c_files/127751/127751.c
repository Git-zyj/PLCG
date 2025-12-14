/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -1245706451967884174;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((var_15 ? var_16 : (min(0, var_17)))));
        var_21 ^= ((((min((arr_3 [i_0 - 1]), (min((arr_0 [0] [0]), var_15))))) ? 4193630721 : var_16));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            var_22 = ((~((101336574 & (arr_10 [i_2] [i_4])))));
                            var_23 = var_5;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_24 -= (max(255, 0));
                            var_25 = ((((((arr_16 [i_1] [i_0 + 1]) ? (arr_0 [i_0 - 1] [i_1]) : var_8))) ? (((!(((~(arr_7 [i_0 + 2] [i_0 + 2]))))))) : (4193630722 && var_7)));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_3 + 1] [i_6] = ((-(arr_18 [i_0 - 1] [i_1] [i_2] [i_3 - 2] [i_6])));
                            var_26 = 1;
                            var_27 = (min(var_27, var_4));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_28 = ((-(!3799051215874731574)));
                            var_29 = (4193630746 | var_14);
                        }
                        var_30 = (((((((max(228, 156))) ? 9223372036854775800 : (882093932410652528 / 1)))) ? ((var_10 ? 0 : (~101336574))) : ((((((var_3 >> (var_3 - 37)))) ? (arr_25 [i_0] [i_1] [i_2] [i_3 + 3]) : var_17)))));
                        arr_27 [7] = (((arr_10 [i_0 + 2] [i_3 - 3]) ? (((((var_1 ? (arr_14 [i_0 + 1] [i_2] [i_3 + 1]) : (arr_10 [10] [10])))) ? (arr_19 [i_0] [i_0] [i_2] [19] [i_0] [i_0 + 2]) : (((arr_14 [i_1] [i_1] [i_0]) ? var_1 : var_10)))) : -var_14));
                        var_31 = (arr_14 [i_0] [i_0] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        arr_32 [1] [i_1] [i_2] [i_8] = (arr_15 [i_0] [i_0 - 2] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8]);
                        arr_33 [i_1] [18] [i_2] = (!247);
                    }
                    var_32 = max((arr_15 [i_1] [i_2] [i_1] [i_1] [i_1] [i_0 + 2] [i_0 + 2]), 52836);
                    var_33 = var_6;
                }
            }
        }

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_34 ^= (max((((-(arr_36 [i_0 - 1] [12])))), (arr_2 [i_0 + 2] [i_9])));
            arr_38 [i_0] = ((((((-((var_19 ? (arr_34 [1]) : 0)))) + 2147483647)) << (((((arr_35 [i_9]) + 5064)) - 10))));
            arr_39 [i_9] = (((min((((arr_3 [8]) ? var_16 : 17466930202673965774)), -53))) && (((-(((arr_0 [i_9] [2]) ? (arr_25 [i_0] [16] [i_9] [i_9]) : (arr_31 [i_0] [i_0] [i_9] [i_9])))))));
            arr_40 [i_9] = ((((((arr_10 [i_0 - 1] [i_0 + 1]) | var_9))) ? 1 : ((~(~20064)))));
        }
    }
    var_35 = (min(var_35, ((((!var_6) ? (+-100) : (--4149029826077753651))))));
    #pragma endscop
}
