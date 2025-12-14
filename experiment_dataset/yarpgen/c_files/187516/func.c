/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187516
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
    var_14 |= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_12))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) -2049158339)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)90))))) % (min((-8537698473101489161LL), (var_10))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) % (var_3))) : (8537698473101489160LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [(signed char)12] [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_0 - 2]);
                arr_5 [i_0] [i_1] |= ((/* implicit */int) ((((12136951796224652018ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (-8537698473101489173LL)))))) % (((/* implicit */unsigned long long int) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))))))));
            }
        } 
    } 
}
