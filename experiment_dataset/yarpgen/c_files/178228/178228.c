/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_15 -= (((((((min((arr_0 [i_0]), var_11))) ? var_4 : (max(-49095427940348620, var_4))))) ? var_14 : (((var_7 || (arr_0 [i_0 + 1]))))));
        arr_4 [i_0 + 1] = (arr_0 [8]);
        var_16 = (min(var_16, ((min(((((arr_3 [i_0 + 1]) - (((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : 29649))))), ((var_6 ? ((var_1 ? 49095427940348619 : -49095427940348614)) : (min(-23352, 49095427940348624)))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_17 = (((arr_5 [i_1 - 3]) * (arr_5 [i_1 - 3])));
        arr_8 [i_1 - 2] [23] |= (((arr_6 [i_1 - 1]) * (arr_5 [i_1 + 1])));
        var_18 = (((var_10 ? var_14 : (arr_7 [i_1]))));
    }
    var_19 = var_14;
    var_20 |= var_7;
    var_21 = ((-4837901406433677583 ? var_4 : ((var_7 ? var_10 : var_9))));
    #pragma endscop
}
