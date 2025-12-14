/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104237
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
    var_15 = ((/* implicit */int) ((var_8) / (max((((((/* implicit */long long int) var_11)) / (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) (unsigned short)64508)) ? (((/* implicit */int) (unsigned short)44829)) : (((/* implicit */int) arr_0 [i_0]))))))), (arr_2 [i_0]))))));
        var_17 -= ((/* implicit */short) max((((((_Bool) (unsigned short)11288)) ? (3383906138422620985ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)44829)))))))));
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) (unsigned short)48341)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44829))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) arr_1 [(_Bool)1]))))))), (((/* implicit */long long int) ((unsigned short) arr_0 [i_0])))));
    }
}
