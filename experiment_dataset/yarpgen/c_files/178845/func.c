/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178845
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_5 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_0 [i_0])))), (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_3 [i_0])))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0 - 2])))) : (((/* implicit */int) arr_1 [i_0])));
    }
    var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) var_4)) ? (min((var_11), (var_11))) : (min((min((((/* implicit */unsigned int) var_13)), (var_11))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (var_9))))))))));
}
