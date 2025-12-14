/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141278
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(signed char)6] [i_1] = ((/* implicit */short) max((max((((/* implicit */long long int) (-(arr_3 [i_0])))), ((-9223372036854775807LL - 1LL)))), ((+(arr_1 [i_0] [i_1])))));
                arr_6 [i_1] [i_1] [i_1] = (+(max((((/* implicit */long long int) arr_3 [i_0])), (1196348048520324521LL))));
            }
        } 
    } 
    var_11 = 867962468;
}
