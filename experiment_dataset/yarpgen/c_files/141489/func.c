/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141489
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
    var_15 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_16 += ((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30280))) : (2U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) == (arr_1 [i_0])))))));
        var_17 = ((/* implicit */unsigned long long int) 4294967291U);
        var_18 = ((/* implicit */unsigned long long int) ((signed char) 14998093904392523330ULL));
    }
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((long long int) 1125899906838528ULL)) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18553))) == (3807536054U))))) : (max((((/* implicit */int) ((unsigned short) var_1))), (var_8))))))));
}
