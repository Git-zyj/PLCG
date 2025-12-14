/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168259
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned char) (short)-8489)))));
        arr_3 [i_0] [2ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)82)) + (((/* implicit */int) (unsigned char)82))))) : (((((((/* implicit */_Bool) (short)-8466)) || (((/* implicit */_Bool) (unsigned char)73)))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_0])))) : ((-(var_4)))))));
    }
    var_21 = ((/* implicit */long long int) var_5);
    var_22 = ((/* implicit */_Bool) min(((short)30271), (((/* implicit */short) (unsigned char)158))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-108)) ? (-13) : (-178133081))) - (var_17)))) ? (var_16) : (((/* implicit */int) ((signed char) (short)9139)))));
}
