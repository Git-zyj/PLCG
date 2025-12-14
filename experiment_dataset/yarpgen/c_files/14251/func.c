/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14251
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
    var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2)))) ? ((~(((/* implicit */int) ((short) (short)-30497))))) : (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1410659760)))) ? (min((((/* implicit */unsigned long long int) arr_0 [(unsigned short)0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (4503599627370495ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(signed char)3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (18442240474082181110ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)74)) : (189805114)))))))))))));
        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_0])), (710085897)))) ? (((((/* implicit */int) (unsigned char)117)) / (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((6608087809352987085LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-29))))))));
    }
}
