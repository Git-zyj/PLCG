/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (!var_7);
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 += -9223372036854775779;
        var_13 = (min(((min(var_5, (arr_2 [i_0])))), 36112));
        var_14 = ((((~(arr_0 [i_0]))) << (((!(arr_0 [i_0]))))));
        arr_3 [i_0] = ((((9223372036854775764 ? -9223372036854775779 : 1)) * (!-1299079629)));
        var_15 = var_4;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = ((((((var_0 + 9223372036854775807) >> ((((arr_1 [i_1]) > (arr_6 [i_1 - 2]))))))) ? (arr_4 [i_1]) : ((((max(1073737728, 1))) ? ((min((arr_6 [i_1]), 31))) : (((arr_5 [i_1]) ^ -2160))))));
        arr_8 [i_1] = (min((((arr_4 [i_1 - 1]) ? 115 : var_2)), (((var_4 + (arr_4 [i_1 - 1]))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2] [i_2 - 2] = (arr_10 [i_2] [12]);
        arr_12 [i_2 + 1] = ((31 == (!var_8)));
    }
    var_16 = -var_0;
    #pragma endscop
}
