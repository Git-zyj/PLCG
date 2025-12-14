/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138349
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
    var_11 += ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */signed char) (~(((((((/* implicit */_Bool) (unsigned short)2378)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2385))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2387)))))));
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(var_2)))))))))));
        var_13 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)2378))));
    }
}
