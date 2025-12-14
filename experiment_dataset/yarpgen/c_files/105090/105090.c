/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (max(var_13, (((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) > ((((((arr_3 [2]) >> (((((-9223372036854775807 - 1) - -9223372036854775785)) + 34))))) ? (((max(8, 89)))) : (max((arr_1 [8] [8]), var_7)))))))));
        var_14 = (min(var_14, (arr_1 [6] [8])));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_6 [6] &= ((!(((var_12 ? (arr_1 [i_0] [4]) : -1180401457666133802)))));
            arr_7 [i_0] [i_0] = (arr_4 [i_0] [i_0]);
            var_15 -= 9223372036854775807;
        }
        var_16 = (min(var_16, (((~((((-63 ? var_2 : (arr_2 [i_0] [i_0]))) * ((min(1213492151, var_10))))))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_17 -= (max((arr_9 [i_2 - 1] [i_2 - 1]), (min((arr_9 [i_2 - 1] [i_2 - 1]), (arr_9 [i_2 - 1] [i_2 - 1])))));
        var_18 = (+((min((arr_8 [i_2]), (arr_8 [i_2])))));
    }
    var_19 = (((((var_6 ? (~var_4) : (~var_1)))) ? (max(var_5, var_11)) : (((((min((-9223372036854775807 - 1), var_2))) ? var_9 : ((var_8 ? var_7 : -1073741824)))))));
    #pragma endscop
}
