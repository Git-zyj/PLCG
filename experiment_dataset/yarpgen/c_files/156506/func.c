/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156506
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) / (((unsigned long long int) var_4))))));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((~(var_10))))))));
        var_21 = ((/* implicit */_Bool) 12970746871949887966ULL);
        arr_4 [i_0] [9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((11054315594472608350ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 18446744073709551593ULL)))) : (((unsigned int) max((((/* implicit */long long int) var_1)), (var_13))))));
    }
    var_22 &= max((((unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (short)2382)));
}
