/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151067
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
    var_12 = ((((/* implicit */_Bool) ((((unsigned int) var_10)) << (((/* implicit */int) max((var_8), (var_7))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_11)), (var_0))))) + (268435455U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
    var_13 = var_7;
    var_14 = var_1;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0 + 2] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) min((((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((short) arr_1 [12ULL]))))));
        var_15 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) var_5))), (arr_1 [i_0 - 1])))) && ((_Bool)0)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0 - 1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) * (3984446762863085417ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_1 [i_0]))))))));
    }
}
