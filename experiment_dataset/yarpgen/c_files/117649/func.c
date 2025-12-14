/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117649
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
    var_11 &= ((/* implicit */unsigned int) ((unsigned char) (short)28362));
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-28362)) + (2147483647))) >> (((-6378638320660247286LL) + (6378638320660247317LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) (+(min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) (short)-28362))))));
                arr_6 [i_0] = var_5;
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1 + 3])))))));
            }
        } 
    } 
}
