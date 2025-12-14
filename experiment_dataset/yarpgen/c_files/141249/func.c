/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141249
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
    var_17 = max((((/* implicit */unsigned int) min((((var_10) ? (((/* implicit */int) var_5)) : (var_1))), (var_7)))), (max((4026531840U), (((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */int) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (2932749867U)));
        var_18 &= ((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (+(3584))))));
        var_19 = ((var_6) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ ((-2147483647 - 1))))));
    }
}
