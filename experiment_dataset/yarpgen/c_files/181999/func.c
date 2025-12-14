/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181999
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
    var_12 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) var_11)) : (var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((arr_1 [i_0 + 1]) >= (((/* implicit */int) (signed char)-127)))))));
        var_14 = ((/* implicit */int) max((var_14), (arr_1 [i_0 + 1])));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-6293285863255420407LL) : (((/* implicit */long long int) arr_1 [i_0 + 1]))))) ? (var_5) : (((/* implicit */unsigned int) arr_1 [i_0 - 1]))));
        var_16 = ((/* implicit */unsigned long long int) (-(arr_1 [i_0 + 2])));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((arr_0 [i_0 + 2]) / (arr_1 [i_0 + 1]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) 6293285863255420414LL))) + (2147483647))) << ((((+((+(var_1))))) - (106339879541997237ULL))))))));
        var_19 = arr_3 [i_1];
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_3 [i_1])))))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((64U) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))))) && (((/* implicit */_Bool) (((-(3099313532U))) >> (((((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */int) (unsigned char)232)) : (28672))) - (204))))))));
    }
}
