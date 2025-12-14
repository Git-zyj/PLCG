/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18346
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
    var_14 = var_3;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) (((_Bool)0) ? ((((_Bool)1) ? (8736556059115575227LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6340173910916501221LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (8736556059115575235LL)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8736556059115575235LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-16568)))));
        arr_4 [i_1] = ((((/* implicit */_Bool) -9223372036854775807LL)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16576))) : (1873346945U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8736556059115575248LL)) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (5097185622796991099LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -8736556059115575226LL)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) 8736556059115575227LL)) ? (1407908157) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) 2305843008139952128LL)) ? (8736556059115575241LL) : ((((_Bool)0) ? (-8736556059115575247LL) : (8736556059115575256LL)))))));
    }
}
