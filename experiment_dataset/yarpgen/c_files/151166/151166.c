/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((var_7 * var_10) ? (var_0 / var_10) : (~var_0)))), ((1 * (max(var_15, 314585669))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (arr_1 [i_0] [i_1]);
                arr_5 [i_0 + 1] = 3980381636;
                var_21 = (((((((arr_3 [i_1] [i_1] [i_1]) ? (arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 1]) : var_17)))) | (var_3 <= 3980381640)));
            }
        }
    }
    #pragma endscop
}
