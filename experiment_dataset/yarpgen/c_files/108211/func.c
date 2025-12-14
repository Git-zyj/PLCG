/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108211
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
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (~(min((((/* implicit */unsigned int) var_11)), (arr_3 [i_0]))))));
        var_15 = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) (short)32753)));
    }
    var_16 = ((/* implicit */_Bool) max((min((((((/* implicit */int) var_11)) >> (((var_6) + (5380357722176541714LL))))), (((/* implicit */int) var_7)))), ((-(((/* implicit */int) ((signed char) (signed char)-1)))))));
}
