/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = var_11;
        var_14 = (max(22711, (!16341)));
        var_15 = ((-(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (min(((!(var_10 % 1386245753651040632))), (!31)));
            var_16 = ((var_2 > (min(-52, var_10))));
            arr_5 [i_0] = var_10;
            arr_6 [i_1] [i_0] = ((-(((arr_2 [i_0] [i_1]) ? (var_7 | 51) : (arr_2 [i_0] [i_0])))));
            arr_7 [i_0] [i_1] = (arr_3 [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = (min(((max((arr_9 [i_0] [14]), (min(var_4, (arr_0 [i_0] [i_0])))))), ((224 ? 6522 : 90))));
            arr_11 [i_0] [i_0] [i_2] = var_5;
            var_18 = (min((arr_8 [i_2] [i_2] [i_0]), ((((arr_8 [i_0] [i_2] [i_2]) <= (arr_8 [i_0] [i_0] [i_2]))))));
            arr_12 [i_0] = ((~(min((max((arr_8 [i_0] [i_0] [i_2]), var_10)), var_6))));
        }
    }
    var_19 = (!(((((max(6522, 38))) ? (max(var_9, var_10)) : (((var_1 ? var_3 : 51)))))));
    #pragma endscop
}
