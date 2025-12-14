/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17411
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_13))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)11999), (((/* implicit */short) (_Bool)0))))) ? (((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-66)) || (((/* implicit */_Bool) 97857566763512201LL)))))));
        var_17 = ((/* implicit */unsigned char) var_12);
    }
}
