/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [10] = (arr_0 [i_0]);
        var_10 = (min(21, 65515));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_11 = (max(var_11, ((min((arr_1 [i_1]), (((arr_6 [i_1]) ? ((var_7 ? 1 : var_8)) : (((((arr_4 [4] [i_1]) && var_2)))))))))));
        var_12 = 1;
        arr_7 [i_1] = ((((min((arr_6 [i_1]), ((max(19, (arr_1 [i_1]))))))) ? -103 : 92));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_13 = (max(var_13, var_6));
        var_14 = (~var_8);
        var_15 = (max(var_15, (arr_3 [i_2 - 1])));
        arr_11 [9] = (((arr_4 [i_2 - 2] [i_2 - 2]) ? var_3 : (arr_4 [i_2 + 1] [i_2 + 1])));
        arr_12 [i_2 - 2] &= ((-28 ? ((65514 ? 21 : -126)) : (arr_1 [i_2 - 1])));
    }
    var_16 = ((((((215 ? var_4 : 65529)))) ? ((((var_7 || (var_3 == -14789))))) : (min(-1, var_0))));
    var_17 &= (!var_1);
    #pragma endscop
}
