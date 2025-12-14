/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133832
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 -= ((/* implicit */long long int) ((unsigned short) (+((-(7349692372652911568ULL))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) * (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-13049)) - (((/* implicit */int) var_10))))) ? (((/* implicit */int) min(((short)13048), ((short)13048)))) : (((((/* implicit */int) (short)-13061)) & (((/* implicit */int) var_14)))))) : (((/* implicit */int) ((((/* implicit */int) (short)-13049)) == (((((/* implicit */_Bool) (short)13033)) ? (((/* implicit */int) (short)-13033)) : (arr_0 [i_0])))))))))));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_14))));
}
