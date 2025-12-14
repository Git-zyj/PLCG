/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11635
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
    var_11 = ((/* implicit */unsigned short) var_10);
    var_12 = ((/* implicit */long long int) (~(3009214623U)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (+(arr_1 [i_0 - 1] [i_0 - 1])));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_1 [i_0] [(signed char)8]))));
    }
    var_15 = ((/* implicit */long long int) ((max((((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_3)) + (3878))))), (((/* implicit */int) ((_Bool) (short)-1000))))) == ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))));
}
