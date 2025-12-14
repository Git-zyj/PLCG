/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 4; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (min((arr_1 [i_0 - 2] [i_0]), (max(var_15, var_11)))) : 345174312));
        var_20 = ((((((arr_1 [i_0 - 1] [i_0]) & (arr_1 [i_0 - 4] [i_0 - 4])))) ? (((arr_1 [i_0 - 1] [i_0]) ? (arr_1 [i_0 - 2] [i_0]) : (arr_1 [i_0 - 4] [i_0 - 4]))) : -345174312));
        arr_3 [i_0] [i_0 - 4] = (((((var_4 ? -255 : (min((arr_1 [i_0] [5]), var_8))))) ? (arr_0 [i_0]) : -2721));
        var_21 = (0 || 1);
    }
    for (int i_1 = 4; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_22 -= ((((((var_9 || (arr_0 [i_1 - 1]))))) <= (min(var_1, (arr_0 [i_1 + 1])))));
        arr_8 [i_1] = arr_4 [11] [7];
    }
    #pragma endscop
}
