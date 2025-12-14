/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149838
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
    var_17 = ((/* implicit */long long int) (unsigned char)77);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)47845)) > (((/* implicit */int) ((((/* implicit */_Bool) (signed char)24)) || (((/* implicit */_Bool) (unsigned short)61319)))))))) : (((/* implicit */int) (_Bool)0))));
        var_19 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) == (var_1)))), ((((_Bool)1) ? (min((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) -1560570046))))));
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((7293855024468922500ULL) | (max((17834112134546104134ULL), (var_9)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    }
}
