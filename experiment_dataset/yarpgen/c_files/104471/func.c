/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104471
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) 2199023255551ULL)), (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (2199023255551ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (2494278092220767510LL) : (((/* implicit */long long int) 99480720U))))) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)-12912))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((2494278092220767510LL), (((/* implicit */long long int) (unsigned char)153))));
            }
        } 
    } 
}
