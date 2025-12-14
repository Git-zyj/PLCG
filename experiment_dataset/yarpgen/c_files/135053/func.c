/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135053
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (min((min(((_Bool)0), (((_Bool) (_Bool)1)))), ((_Bool)0)))));
        var_21 = ((/* implicit */_Bool) ((arr_0 [i_0]) ? (min((((((/* implicit */_Bool) 3327787645U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_0 [i_0]))));
    }
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (((unsigned int) ((_Bool) (_Bool)0))))))));
    var_23 ^= (((~(1926870025U))) == (3089512839U));
    var_24 = ((/* implicit */unsigned int) ((_Bool) 632438030U));
    var_25 = ((var_5) ? (min((((2193845382U) >> (((var_4) - (1349181257U))))), (((unsigned int) var_1)))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_13))));
}
