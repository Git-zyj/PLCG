/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110447
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
    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned long long int) var_13)) + (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) (+(var_6)))) : (min((1156116874U), (((/* implicit */unsigned int) var_9))))));
    var_19 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (var_16))) << ((((~(var_17))) - (2033481407U))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 *= ((/* implicit */signed char) var_8);
        arr_2 [i_0] = var_11;
        arr_3 [(unsigned short)0] = ((/* implicit */int) (~(((((/* implicit */unsigned int) var_3)) & (1156116874U)))));
    }
    var_21 = ((/* implicit */int) var_12);
}
