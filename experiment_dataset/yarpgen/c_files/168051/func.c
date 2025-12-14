/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168051
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
    var_17 &= ((/* implicit */short) var_14);
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((short) 1151232608U))))));
    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */int) ((short) var_3))) : (((((/* implicit */int) var_0)) - (((/* implicit */int) var_16)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0])))) - (max((((/* implicit */unsigned long long int) min((var_15), (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (10ULL)))))));
        var_21 += ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 18446744073709551605ULL)))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned int) var_3)) : (var_9))))))) : (((/* implicit */int) var_10))));
}
