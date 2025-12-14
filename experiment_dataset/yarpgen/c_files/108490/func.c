/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108490
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((var_9) + (2147483647))) >> (((((((/* implicit */_Bool) max((var_3), (var_7)))) ? (var_8) : (var_15))) + (1693638891))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_21 *= (-(arr_0 [i_0]));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_8);
    }
    var_22 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_19)) >= (var_13))))))) >= (((/* implicit */long long int) (+((+(var_19))))))));
}
