/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_10);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (min(((var_0 ? 1073741820 : -3257)), (((var_0 && (arr_1 [i_0]))))));
        var_16 = (min(var_16, (((max((arr_1 [8]), (((arr_1 [i_0]) ? -1528068008 : 18617)))) - (((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 83)))) / 1))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((min((arr_3 [i_1 - 1] [i_1 - 1]), var_5)) != (max(15675553643570833940, (arr_3 [i_1] [i_1])))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_17 = (-(arr_8 [i_1 - 3] [i_2] [i_2]));
            arr_11 [i_1] [i_1 - 1] [i_2] = ((arr_9 [i_1 + 2] [i_1 - 3]) || (arr_2 [i_2 - 1] [i_1 - 3]));
        }
        arr_12 [i_1 - 2] &= max((max(((((arr_9 [i_1] [i_1]) ? var_4 : var_13))), (((arr_7 [i_1 - 2]) ? (arr_10 [i_1]) : var_2)))), ((min(((((arr_9 [i_1] [i_1]) != (arr_8 [i_1] [10] [i_1])))), (arr_5 [i_1])))));
    }
    var_18 = var_13;
    #pragma endscop
}
