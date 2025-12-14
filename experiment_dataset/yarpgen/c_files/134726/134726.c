/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(!var_6)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = ((((min((arr_1 [i_0]), 0))) ? ((min(4, 148))) : (((~((var_5 ? var_3 : var_16)))))));
            var_22 = (arr_4 [7]);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_0] = ((!((min((arr_2 [i_0]), (-569839594 || 119))))));
            var_23 = ((min(-8, var_16)));
            var_24 = ((!(((-var_5 | (~var_14))))));
        }
        var_25 = arr_6 [i_0] [8] [i_0];

        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_26 = ((-9 ? 18446744073709551611 : 4294967295));
            var_27 = ((+((489671309407792667 ? (arr_9 [9]) : (arr_0 [i_0] [i_3])))));
            var_28 = ((-((var_3 ? (min((arr_4 [i_0]), (arr_6 [i_0] [i_3] [i_3]))) : -41))));
        }
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            arr_15 [i_4] [i_4] [1] = ((~(~92)));
            arr_16 [13] [i_4] [13] = ((((1 / 255) ? var_2 : (((arr_1 [i_4]) ? (arr_14 [i_0] [i_0] [i_4]) : -1824347857)))));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_19 [i_0] [i_4] [i_4] = 18446744073709551615;
                arr_20 [i_0] [i_0] [i_4] = -820237660;
                var_29 = (min((min((((569839594 ? var_3 : (arr_3 [i_0])))), -var_17)), (((!(arr_10 [i_4 - 3] [i_4 - 2]))))));
            }
            var_30 = var_5;
        }
        arr_21 [i_0] = (1823132198 > 18446744073709551615);
        arr_22 [i_0] = (-((92 << (8752 - 8740))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_31 = (min((((arr_24 [i_6]) ? (arr_24 [i_6]) : (((4 || (arr_24 [24])))))), (max((arr_24 [i_6]), (min((arr_23 [i_6]), (arr_24 [15])))))));
        var_32 = (((-3 | (var_12 || 31))));
        var_33 = ((((((min(-19, var_7))) % 6)) ^ (((~(-9223372036854775807 - 1))))));
    }
    #pragma endscop
}
