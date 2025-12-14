/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((var_11 ? -3 : ((var_3 ? 27750 : 27760)))), ((9223372036854775807 ? 27750 : ((var_7 ? 1 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((!(((var_2 ? 27 : var_0)))))))));
                arr_6 [i_1] = (max((arr_2 [i_0]), var_7));
            }
        }
    }
    var_15 = var_11;
    var_16 = ((!((min((var_8 | -27), var_12)))));
    #pragma endscop
}
