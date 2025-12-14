/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~var_12) ? var_15 : var_19));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] = (((arr_0 [i_0] [i_0]) ? (((arr_3 [i_1] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_4 [i_1] [i_0] [i_0]))) : (((((((arr_0 [i_1] [i_1]) ? var_7 : var_19))) ? (arr_3 [i_0] [i_1]) : 56)))));
            var_21 = (((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))) ? (max((arr_0 [i_0] [i_1]), (((!(arr_3 [i_0] [i_1])))))) : ((-(arr_0 [i_0] [i_1])))));
            arr_6 [i_1] [i_1] [i_0] = ((-((var_15 ? (arr_3 [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_1])))));
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_22 = ((!(arr_1 [i_2 + 1] [i_0])));
            var_23 = ((((min((arr_0 [i_2 - 2] [i_2 + 1]), (arr_0 [i_0] [i_2])))) & (arr_0 [i_0] [i_2])));
            var_24 ^= (((+(min((arr_0 [i_0] [i_0]), 1660834225)))));
            arr_10 [i_2] = (min(70, (max(1, (arr_8 [i_2 + 2])))));
        }
        var_25 = ((var_2 ? var_8 : 0));
    }
    var_26 = ((((((((-70 ? var_11 : var_7))) ? ((70 ? var_1 : var_15)) : var_5))) ? var_5 : 1));
    var_27 ^= (min(0, (max(((17 ? (-9223372036854775807 - 1) : 658468346)), (var_4 - var_7)))));
    #pragma endscop
}
