/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121085
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
    var_15 = ((/* implicit */int) min((var_15), (var_12)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0]))))) ? (907027353U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)65280))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (23042))))) : (((((/* implicit */_Bool) arr_0 [2])) ? (((/* implicit */int) arr_0 [9ULL])) : (((/* implicit */int) arr_0 [5ULL]))))));
        var_18 += ((/* implicit */unsigned long long int) var_13);
    }
    var_19 |= ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_0)) ? (3387939943U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)254))))) << (((((long long int) var_5)) - (21523LL)))))));
}
