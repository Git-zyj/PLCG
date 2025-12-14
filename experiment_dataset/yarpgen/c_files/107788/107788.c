/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-var_0 ? var_9 : (((((var_10 ? var_10 : 12874))) ? (-32767 - 1) : ((0 ? 91662715 : var_4))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [7] = ((46800 ? ((-13 ? (arr_1 [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0 - 2] [i_0 + 2]))) : -var_12));
        var_15 -= arr_0 [i_0] [i_0 - 1];
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_16 = (max(var_16, 65535));
            var_17 -= (((arr_7 [10] [i_1 - 3] [i_1 + 2]) ? (((arr_7 [8] [i_1 - 1] [i_1 + 2]) ? (arr_7 [4] [i_1 + 2] [i_1 - 2]) : (arr_8 [4]))) : ((((arr_7 [6] [i_1 - 3] [i_1 - 2]) ? 4 : var_10)))));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_18 = ((((((arr_4 [i_1]) ? var_0 : (arr_11 [i_3 - 1] [i_3 + 1])))) ? (!0) : (((arr_3 [i_3 - 1]) ? (arr_5 [i_1] [i_3 + 1]) : (arr_5 [i_1 - 2] [i_3])))));
            var_19 -= ((((((!0) ? ((((arr_5 [i_1] [7]) ? 4203304581 : var_9))) : ((var_12 ? (arr_8 [10]) : (arr_12 [10] [i_1] [i_3 - 1])))))) ? (((arr_4 [6]) ? (((!(arr_6 [6])))) : var_8)) : 130));
            var_20 = ((((((arr_7 [i_1] [i_1 - 3] [i_1]) ? (arr_7 [i_1] [i_1 + 2] [i_3]) : (arr_7 [i_1] [i_1 - 2] [i_1 - 2])))) ? 65533 : (((arr_7 [i_1] [4] [8]) ? (arr_7 [i_1] [i_3] [i_3 + 1]) : var_12))));
        }
        var_21 = var_6;
    }
    #pragma endscop
}
