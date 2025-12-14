/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106568
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
    var_13 = var_4;
    var_14 = ((/* implicit */unsigned int) 2642982424329701606ULL);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = min((((min(((_Bool)1), (arr_0 [i_0]))) ? (min((((/* implicit */unsigned int) -78375656)), (var_9))) : (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_0]))))) & (((/* implicit */int) ((_Bool) (_Bool)0)))))));
        var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_0 [i_0])), (((2765062668U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (max((9617719022796470998ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1529904628U)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned char)160))))))) : (min((((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) min((var_5), (var_6))))))));
}
