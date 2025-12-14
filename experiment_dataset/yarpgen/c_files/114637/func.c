/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114637
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (var_7)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))) ? (((((var_15) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (short)32526)))))) : (((/* implicit */int) (signed char)24))));
                var_22 = ((/* implicit */short) ((((((((/* implicit */int) (signed char)-22)) * (((/* implicit */int) (unsigned short)26573)))) + (2147483647))) >> (((((3296365411U) << (((var_17) - (5498853884169791823LL))))) - (3056599030U)))));
            }
        } 
    } 
}
