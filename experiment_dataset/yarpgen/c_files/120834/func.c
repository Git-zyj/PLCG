/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120834
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */long long int) var_7);
                var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((short) 8ULL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)24617)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_5)) ? (288230376151711743LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (short)24617)) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-7829)) : (((/* implicit */int) (short)-24608)))))))));
                var_13 = ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned short) (~(var_0)));
    var_15 = ((/* implicit */unsigned int) min((var_15), ((-(4294967295U)))));
}
