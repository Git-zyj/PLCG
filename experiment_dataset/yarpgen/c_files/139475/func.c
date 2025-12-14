/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139475
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
    var_17 |= ((/* implicit */int) var_0);
    var_18 = ((/* implicit */signed char) max((var_9), (max((((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)239)))), ((+(var_4)))))));
    var_19 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)77)) - (((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 9223372036854775780LL)) : (18446744073709551615ULL)))))));
                arr_6 [i_1] = ((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_9)), (-9223372036854775807LL))), (((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 1]))))) % (min((18356041697643131099ULL), (((/* implicit */unsigned long long int) 1253548643)))));
            }
        } 
    } 
    var_21 = (unsigned char)252;
}
