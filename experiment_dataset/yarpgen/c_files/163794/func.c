/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163794
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
    var_10 = ((/* implicit */unsigned long long int) (short)25873);
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_5))))) - (((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25867))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-25873))) & ((~(7U))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (48465)))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) 3288365947U))) | (((/* implicit */int) (_Bool)1))));
        var_13 = ((/* implicit */int) ((5326937159196817064LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
}
