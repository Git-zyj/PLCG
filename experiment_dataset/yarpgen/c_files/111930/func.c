/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111930
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (var_2)));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) ((_Bool) (signed char)117)))))) ? (max((((/* implicit */long long int) (unsigned short)58269)), (((arr_1 [(unsigned short)7]) ? (882848759267112025LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_9))))))));
    }
    var_16 = ((/* implicit */signed char) var_12);
}
