/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_11 ? (((!(((4294965248 ? -1 : var_11)))))) : (((((max(var_16, var_10))) >= var_13)))));
    var_19 = var_7;
    var_20 |= var_10;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_21 = ((!(((var_0 ? var_16 : -1)))));
        var_22 *= (((1472996641 | var_12) / ((((arr_1 [i_0]) || -1)))));
        var_23 |= ((((((min(var_4, 2546516656))) ? ((var_16 ? 1748450626 : var_4)) : (~var_1))) ^ (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_24 += var_14;
        arr_5 [i_1] [i_1] = ((((max((arr_1 [i_1]), ((var_5 ? var_3 : var_17))))) ? (arr_4 [i_1] [i_1]) : (0 < var_1)));
        var_25 |= ((1797352013 ? (-26 == 24) : ((var_1 ? ((~(arr_3 [i_1] [i_1]))) : (arr_3 [i_1 + 1] [i_1 - 1])))));
        var_26 += (((min((arr_0 [i_1] [i_1]), ((var_4 % (arr_0 [8] [8]))))) + (((42157 >> (33873 - 33866))))));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_9 [i_2] = ((~((~(arr_7 [i_2 - 1])))));
        var_27 = (((((((min(var_16, 178))) ? var_7 : -var_9))) & (min((arr_8 [i_2 - 1]), var_8))));
        arr_10 [i_2] [i_2] = max(((min(var_8, var_11))), var_9);
    }
    #pragma endscop
}
