/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((((var_15 & var_10) ? (~var_1) : (~var_0))), (~4921552629206598641));
    var_18 *= (max(var_3, (max(16342242053360311999, 16342242053360311996))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = 16342242053360311996;
                arr_5 [i_0] [i_1] = min((((arr_3 [i_1] [i_1] [8]) | ((-(arr_0 [i_0]))))), (((arr_3 [i_1 + 1] [i_0 + 1] [i_0]) ? (arr_3 [i_1 + 1] [i_0 + 1] [i_0 + 2]) : (arr_3 [i_1 - 3] [i_0 + 1] [i_0]))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
