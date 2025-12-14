/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104053
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
    var_19 = var_6;
    var_20 = var_2;
    var_21 = ((/* implicit */_Bool) max((var_21), (min((min((var_2), (((_Bool) var_12)))), (var_0)))));
    var_22 = var_9;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = (_Bool)0;
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_1 [i_0]), (var_4)))) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) var_15))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 += (_Bool)1;
        var_24 = ((_Bool) min(((~(((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) ((_Bool) var_1)))));
        arr_6 [i_1] [i_1] = ((((/* implicit */int) ((((/* implicit */int) min((arr_5 [i_1]), ((_Bool)1)))) > (((/* implicit */int) min((var_9), (arr_4 [i_1]))))))) > (((/* implicit */int) var_3)));
        arr_7 [i_1] &= ((/* implicit */_Bool) (((((~(((/* implicit */int) var_14)))) + (2147483647))) >> (((/* implicit */int) var_15))));
    }
}
