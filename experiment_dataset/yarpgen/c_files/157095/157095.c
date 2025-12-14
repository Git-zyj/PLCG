/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((min(var_2, var_8)) > ((var_4 ? var_14 : var_14)))) ? var_2 : var_12));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? ((393216 ? ((min(59960, (-9223372036854775807 - 1)))) : (min(3567678097258885639, 59960)))) : ((min((((arr_0 [i_0]) / (arr_0 [i_0]))), (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_0]))))))));
        arr_6 [i_0] [i_0] = (((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : ((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_11 [i_1] = (((min((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1]))) * (arr_9 [i_1] [i_1])));
        arr_12 [i_1] = (arr_8 [i_1] [i_1]);
        arr_13 [i_1] [i_1] = ((59960 ? 59958 : (59960 & 1903353390)));
    }
    #pragma endscop
}
