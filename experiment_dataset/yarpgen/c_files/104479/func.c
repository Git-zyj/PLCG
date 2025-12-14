/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104479
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min(((((((_Bool)0) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0)))) & (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))), (((((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (_Bool)1)))) - ((~(((/* implicit */int) arr_0 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((_Bool) ((_Bool) arr_0 [i_0])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_18 = var_7;
    }
    var_19 = ((/* implicit */_Bool) ((((min((var_11), (var_1))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) var_15)))) + (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) (_Bool)1)))) : (((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    var_20 = (_Bool)1;
}
