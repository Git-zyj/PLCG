/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (max((-47 % 1851), ((5762 ? 0 : 1))));
        var_14 = (max(var_14, ((((59771 >= var_0) && ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))))));
        var_15 = ((((-((min(238, (arr_2 [i_0] [i_0])))))) | ((var_7 ? (arr_0 [i_0] [i_0]) : (((arr_2 [i_0] [i_0]) ? var_5 : (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_6 [3] [i_1 + 2] = ((min(((131071 >> (var_13 + 35))), ((max((arr_4 [i_1] [i_1]), var_4))))));
        var_16 = (min(var_16, (49277 != 1)));
        arr_7 [i_1] = ((((max(var_10, (((-9223372036854775807 - 1) ? var_3 : (arr_1 [i_1] [i_1])))))) ? (arr_0 [19] [12]) : (arr_0 [i_1] [i_1 - 1])));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_17 = ((((var_6 ? (arr_8 [i_2]) : 126))) ? ((((((var_7 + 9223372036854775807) >> (((arr_8 [i_2]) - 150))))) ? ((max((arr_1 [i_2] [i_2]), var_6))) : (arr_8 [i_2 - 1]))) : ((((max(var_8, (arr_9 [i_2])))) % ((min(var_4, (arr_0 [7] [i_2])))))));
        var_18 = (((((max(var_13, (arr_9 [i_2]))) ? ((max(var_13, (arr_9 [i_2])))) : ((var_7 ? var_13 : 826496746))))));
        arr_11 [i_2] [i_2 + 1] = (((((var_11 ? 9223372036854775788 : -44))) ? -122 : 4973));
    }
    var_19 = (max(var_19, ((max(var_4, (!var_7))))));
    #pragma endscop
}
