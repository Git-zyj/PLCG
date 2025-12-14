/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min((max(var_4, -37)), 2573851774))) ? (22680 == 32761) : 334796301));
    var_14 = ((var_6 ? var_2 : ((-2147483635 ? var_9 : ((var_4 ? var_9 : var_9))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_15 = 1;
        var_16 = (arr_0 [11] [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = ((((min(255, 524287))) ? -0 : (127 || 41)));
        arr_5 [i_1] = (min((arr_4 [i_1]), var_1));
        arr_6 [i_1] = var_4;
        var_18 += ((((min((min((arr_3 [i_1]), (arr_2 [i_1]))), (((arr_2 [i_1]) ? var_11 : var_3))))) & ((((((arr_2 [6]) ? -19 : (arr_3 [i_1])))) ? ((max(var_2, (-2147483647 - 1)))) : (max(32767, var_4))))));
    }
    #pragma endscop
}
