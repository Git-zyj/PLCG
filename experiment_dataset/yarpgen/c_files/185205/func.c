/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185205
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
    var_15 = ((/* implicit */unsigned char) ((short) max((((/* implicit */int) ((_Bool) -1LL))), (max((((/* implicit */int) var_2)), (-565833889))))));
    var_16 ^= ((/* implicit */_Bool) var_4);
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_5))) && (((/* implicit */_Bool) ((unsigned int) min((var_1), (var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3564378890U)))))))));
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
        var_20 = ((/* implicit */int) ((arr_1 [i_0] [i_0]) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (14404870494221382209ULL) : (((/* implicit */unsigned long long int) 126976)))) : (arr_0 [i_0] [i_0])));
        var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
    }
}
