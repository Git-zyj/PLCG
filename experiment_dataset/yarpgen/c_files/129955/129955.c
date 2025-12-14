/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 ? -var_2 : var_2));
    var_16 ^= 122320902927258309;
    var_17 = -122320902927258336;
    var_18 = (!var_1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((((((max(var_3, 0))) ? var_10 : (min((arr_2 [i_0]), var_5))))) ? (~9014) : (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0 - 1]) : -122320902927258300)))))));
                var_20 = var_1;
            }
        }
    }
    #pragma endscop
}
