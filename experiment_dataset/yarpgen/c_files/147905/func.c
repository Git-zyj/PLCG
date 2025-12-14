/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147905
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
    var_15 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((0U) + (0U)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))))))), (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_13))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~((~(((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])))) : ((+(9223372036854775807LL))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 8; i_1 += 2) 
    {
        var_18 = ((/* implicit */short) max((4294967295U), (((/* implicit */unsigned int) arr_2 [i_1] [i_1]))));
        arr_4 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1 - 3]);
        arr_5 [i_1] = (+(((((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) 4294967295U)) : (arr_3 [i_1])))) ? (4294967295U) : (((/* implicit */unsigned int) (-(var_13)))))));
    }
}
