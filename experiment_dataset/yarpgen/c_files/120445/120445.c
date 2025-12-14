/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = (max(var_13, (~-3942971572055171644)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (max(((~((var_11 ? (arr_1 [i_1] [i_1]) : -3942971572055171644)))), (arr_0 [15])));
                arr_7 [i_0] = ((min((arr_2 [i_0] [i_0] [i_0]), ((-3942971572055171647 ? (arr_0 [i_0]) : (arr_4 [i_0]))))) + (arr_4 [i_0]));
                var_14 = ((!(((-((0 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_3 [i_1] [i_0]))))))));
                arr_8 [i_0] &= (arr_0 [i_0]);
                var_15 = ((var_9 ? ((-(((arr_0 [i_1]) ? var_10 : (arr_2 [i_0] [i_0] [i_1]))))) : -31));
            }
        }
    }
    var_16 = (-3942971572055171667 / -3942971572055171669);
    #pragma endscop
}
