/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135570
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)55198)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (((long long int) 18446744073709551615ULL))))));
    }
    var_14 = ((/* implicit */signed char) var_5);
    var_15 = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)22886)), (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_10)) - (189)))))))) ? (((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55196)) << (((((/* implicit */int) (unsigned short)42631)) - (42619)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))))))));
}
