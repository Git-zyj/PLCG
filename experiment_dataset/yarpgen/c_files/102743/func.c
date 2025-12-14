/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102743
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
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) >> (((((((((/* implicit */_Bool) var_11)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23096))))) - (-9223372036854775789LL))) + (40LL)))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) : (((unsigned long long int) var_10))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (unsigned short)42440);
        var_17 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (int i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42440)) ? (2908975770228463693LL) : (((/* implicit */long long int) ((/* implicit */int) (short)13458)))))) + ((-(arr_1 [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (arr_5 [3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42444)) ? (-7315944316279342107LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_19 ^= ((/* implicit */long long int) var_1);
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned int) -349284473)))));
    }
}
