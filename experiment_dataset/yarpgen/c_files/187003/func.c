/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187003
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
    var_15 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))) : (((unsigned long long int) var_14)))));
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned short)61361))) ? (((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) : (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61357))) & (var_3)))));
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) * (((/* implicit */int) (short)32758)))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)0))))))) + (var_4)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
        var_19 = arr_0 [i_0 + 2] [i_0 + 3];
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 7927990163123454442ULL))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned char)238))))) && (((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125))))) : (((/* implicit */int) var_8)))))));
    }
    var_22 *= max(((~(max((((/* implicit */unsigned long long int) (signed char)60)), (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : (min((var_5), (((/* implicit */long long int) (signed char)113))))))));
}
