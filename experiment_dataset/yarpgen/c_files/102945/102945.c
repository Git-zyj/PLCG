/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((!var_10) << (var_9 + 109)))) && var_2));
    var_12 = ((var_1 ? 1 : -1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(((var_4 * (min(14, -15)))), ((max((arr_0 [i_1]), var_1)))));
                var_14 = (min(var_14, var_5));
                var_15 = var_7;
                var_16 = (max((var_8 > 4), ((-1 ? (min(-19, (arr_0 [9]))) : (!var_8)))));
                var_17 = (!17620199702218375962);
            }
        }
    }
    #pragma endscop
}
