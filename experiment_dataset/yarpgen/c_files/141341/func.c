/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141341
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
    var_12 = ((/* implicit */_Bool) ((long long int) max(((~(9223372036854775807LL))), (((/* implicit */long long int) (short)-7183)))));
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((short) 1110549369))), (var_4)));
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) var_9)))))) == (7LL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            {
                arr_8 [(short)4] |= ((/* implicit */unsigned char) ((18LL) + (((/* implicit */long long int) 262016))));
                var_15 *= ((/* implicit */short) (+(-8LL)));
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 4988586392442217802ULL);
            }
        } 
    } 
}
