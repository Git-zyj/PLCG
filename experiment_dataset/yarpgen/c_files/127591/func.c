/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127591
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
    for (short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (((1334930638U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [11] [i_1])))))))), (min((16435240127237721518ULL), (((/* implicit */unsigned long long int) 2960036657U))))));
            }
        } 
    } 
    var_15 = 0ULL;
}
