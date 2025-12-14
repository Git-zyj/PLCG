/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = var_7;
        var_19 += (min(-71, (min((arr_3 [i_0]), (arr_3 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 = ((((min(((max(var_9, -11200))), (min(-11200, var_5))))) ? var_7 : ((min((arr_4 [i_1]), ((var_15 ? var_6 : var_3)))))));
        var_21 = (((((arr_5 [i_1]) ? (arr_4 [i_1]) : ((-(arr_7 [5])))))));
        var_22 = (arr_7 [i_1]);
        var_23 = ((!(arr_5 [i_1])));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_24 |= arr_10 [i_2] [i_2];
        var_25 = (min(var_25, (((((((var_12 + var_2) ? -var_2 : (((arr_10 [i_2] [22]) ? 11200 : 17410652511633967499))))) ? (min(11202, (((arr_11 [i_2]) ? var_3 : (arr_8 [i_2 + 2] [i_2 + 2]))))) : (arr_8 [i_2] [i_2 - 1]))))));
        arr_12 [i_2] = (min((arr_10 [i_2 + 1] [i_2 + 1]), (((!(arr_8 [i_2] [i_2 + 2]))))));
        var_26 = (arr_9 [i_2] [i_2]);
        var_27 = (arr_10 [i_2] [i_2 - 1]);
    }
    var_28 += ((((((!13797050537164292968) ? ((min(-11196, var_11))) : (max(var_5, var_4))))) ? ((((min(var_1, 11973))) ? ((var_5 ? -11196 : 16656000242303590220)) : var_0)) : ((min(-var_12, var_0)))));
    var_29 *= (min(var_9, (min(var_6, ((var_14 ? var_14 : var_9))))));
    #pragma endscop
}
