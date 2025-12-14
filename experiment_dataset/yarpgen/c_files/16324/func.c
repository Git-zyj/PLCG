/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16324
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned int) -1033488195));
        var_13 = ((/* implicit */unsigned long long int) ((1033488195) < (((((/* implicit */_Bool) var_1)) ? (-588035480) : (((/* implicit */int) arr_1 [i_0] [(unsigned short)15]))))));
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -588035470)) ? (var_8) : (var_3))), (((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (unsigned short)48528))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (var_12)));
}
