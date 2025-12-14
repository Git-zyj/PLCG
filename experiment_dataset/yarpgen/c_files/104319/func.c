/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104319
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [15] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)54), (var_6))))) > (min((((/* implicit */long long int) (_Bool)1)), (3LL)))));
                arr_6 [(unsigned char)7] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) -7472425341153323767LL)))))));
    var_16 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)23136)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))) : (18446744073709551615ULL))));
}
