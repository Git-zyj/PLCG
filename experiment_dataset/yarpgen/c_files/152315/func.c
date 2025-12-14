/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152315
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(1899715866U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : ((((_Bool)0) ? (((/* implicit */unsigned int) 4095)) : (var_6)))))));
        var_17 = ((/* implicit */signed char) arr_2 [i_0]);
        var_18 &= ((/* implicit */short) (-(((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0] [2U]))))) ? (var_0) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_19 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */long long int) var_16)))), (((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) var_3))));
    var_20 = ((/* implicit */_Bool) var_9);
}
