/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 += ((~(206 * 4064)));
        var_20 = (((arr_1 [i_0]) <= (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (((((min(62373, 9223372036854775807)) & var_1)) & (((var_18 ? (arr_5 [i_1]) : 13)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_21 = (!4067);
            var_22 = (!-4065);
        }

        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            var_23 = (max(var_23, 14369635924814651259));
            var_24 = -2186166952015329995;
            var_25 = (max((((((((arr_7 [i_1] [i_3] [i_3 - 1]) <= 65408))) != var_5))), (min((arr_10 [i_3 + 1]), (arr_10 [i_3 - 1])))));
            var_26 = 24096;
        }
        for (int i_4 = 4; i_4 < 19;i_4 += 1)
        {
            var_27 = var_15;
            var_28 = (arr_7 [i_1] [i_1] [i_1]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                arr_22 [17] [17] [19] [i_1] = ((var_13 ? var_16 : (arr_8 [i_6] [i_1] [i_1])));
                arr_23 [i_1] [i_1] [i_1] = ((var_16 ? var_15 : var_13));
            }
            var_29 = -4842082083659733133;
        }
        var_30 = (((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))) >> (var_11 + 20171)));
    }
    var_31 *= 2186166952015330011;
    #pragma endscop
}
