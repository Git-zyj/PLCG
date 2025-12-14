/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (((-((5902279379678287949 >> (10869 - 10820))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((min(((max((arr_1 [i_0]), var_8))), ((var_9 ? (arr_2 [i_1]) : (arr_2 [i_0]))))));
            arr_6 [i_0] [i_0] [i_0] = (((-(min(var_1, (arr_2 [i_1]))))));
            arr_7 [i_0] [i_0] = (min((0 - 62349), 1));
            var_20 = (arr_1 [i_0]);

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_21 = (min((arr_1 [i_1]), ((+((var_14 ? (arr_2 [i_2]) : (arr_2 [i_1])))))));
                var_22 = (max(14384, 32762));
                var_23 = var_16;
                var_24 = ((var_2 ? (arr_4 [i_1]) : (min((((arr_2 [i_2]) ? (arr_1 [i_0]) : var_7)), 16974161346400668220))));
                var_25 = 48;
            }
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                arr_15 [i_3] [i_1] [i_3] [i_3] = ((+((1 >> (((min((arr_4 [i_0]), var_16)) - 1840203082))))));
                var_26 = (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 2]);
            }
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                arr_18 [i_0] [i_0] [i_4] = (max((arr_12 [i_4 - 1] [i_4 - 1] [i_4 + 3] [i_4 - 3]), (~-1)));
                var_27 -= (max((((((max(var_6, var_15))) ? 1 : (arr_2 [i_4 + 1])))), (arr_3 [i_4 - 3] [i_4 - 1] [i_0])));
                var_28 = var_7;
                arr_19 [i_0] [i_1] [i_4 + 3] [i_4] = ((max((arr_14 [i_0] [i_4 - 1]), (arr_14 [i_1] [i_4 + 3]))));
            }
        }
        arr_20 [i_0] [i_0] = 1;
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    var_29 = (max(var_29, var_13));
                    arr_26 [i_0] [i_6] [i_0] = (((arr_22 [i_0]) * 1));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_30 += var_11;
                        var_31 = 1;
                        var_32 = ((min((arr_27 [i_0] [i_0] [i_0] [i_6] [i_6]), (arr_23 [i_0] [i_0]))));
                    }
                }
            }
        }
        arr_29 [i_0] = var_0;
    }
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        arr_32 [13] [i_8] = ((((max((arr_30 [i_8]), (arr_31 [i_8 - 1])))) == (((arr_31 [i_8 - 3]) ? var_11 : (arr_31 [i_8 - 1])))));
        var_33 = ((((!(arr_31 [i_8 - 2]))) ? (((((-(arr_30 [i_8])))) ? var_9 : var_17)) : (((((arr_30 [i_8]) != var_7)) ? (arr_31 [i_8]) : var_6))));
        var_34 = (arr_31 [i_8 - 1]);
    }
    var_35 = (min(var_35, var_10));
    #pragma endscop
}
