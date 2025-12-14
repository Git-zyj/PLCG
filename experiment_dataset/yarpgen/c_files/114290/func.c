/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114290
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_16), (var_8))))))) ? ((~(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_3))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((max((var_11), (var_11))), (((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_8), (var_10)))), (max((var_0), (((/* implicit */unsigned long long int) var_2))))))) ? ((-((-(var_0))))) : (min((max((((/* implicit */unsigned long long int) var_17)), (var_0))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) + (var_13)))) ? ((-(min((var_0), (((/* implicit */unsigned long long int) var_5)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))), (min((((/* implicit */unsigned long long int) var_11)), (var_0))))))))));
        arr_6 [8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_14)))))));
    }
}
