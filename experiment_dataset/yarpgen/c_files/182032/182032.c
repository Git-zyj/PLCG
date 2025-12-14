/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_12));
    var_15 = var_9;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_4 [11] [i_1] = (min(((max((arr_3 [i_0] [i_1] [i_0 + 3]), var_9))), (max(((var_0 ? (arr_2 [i_0] [i_1]) : (arr_3 [19] [i_0] [i_0]))), var_8))));

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                var_16 = (((((((!(arr_8 [i_0] [i_1] [i_2]))) ? (arr_7 [i_2]) : (min(var_2, (arr_5 [14])))))) ? (((~(~56449)))) : (max(((((arr_8 [i_2] [i_1 - 3] [i_2]) ? (arr_7 [i_1]) : 106))), ((1635651304 ? (arr_1 [i_0 - 1]) : 9223372036854775807))))));
                var_17 = ((!(arr_1 [i_0 + 1])));
                var_18 = (min(var_18, (arr_1 [i_0 + 3])));
                arr_9 [i_0 + 3] [i_1] [i_1] = (((((817133940320404851 ? 9223372036854775795 : 16051))) ? (arr_1 [i_1 - 2]) : ((min((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1]))))));
                var_19 = (min(var_19, (arr_8 [i_0 - 1] [i_0 + 2] [i_0 - 1])));
            }
            arr_10 [i_0] = (max((min(((~(-9223372036854775807 - 1))), -108)), (((~(max((arr_3 [i_0] [i_1] [i_1 - 3]), var_13)))))));
        }
        var_20 = arr_2 [i_0] [i_0];
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_21 = (((((((min(var_8, (arr_13 [i_3 - 1] [19])))) ? ((var_5 ? var_12 : var_10)) : ((var_11 ? var_5 : (arr_11 [i_3])))))) ? (max((arr_12 [i_3]), (((arr_11 [i_3]) ? var_6 : var_7)))) : (arr_11 [i_3])));
        var_22 += ((var_1 || (min((arr_12 [16]), (arr_12 [10])))));
        var_23 ^= (arr_13 [i_3] [i_3]);
    }
    #pragma endscop
}
