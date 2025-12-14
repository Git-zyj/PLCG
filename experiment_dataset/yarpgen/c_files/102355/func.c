/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102355
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
    var_14 = var_8;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] |= ((_Bool) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_16 -= ((arr_6 [i_1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
        var_17 = ((/* implicit */long long int) min((var_17), (var_3)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 -= ((_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_10)));
        var_19 |= ((/* implicit */long long int) max((((((((/* implicit */int) var_2)) < (((/* implicit */int) arr_4 [(_Bool)0] [i_2])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_7 [(_Bool)1] [i_2]), ((_Bool)1)))))), (((/* implicit */int) arr_4 [2LL] [i_2]))));
        arr_10 [i_2] = ((/* implicit */_Bool) ((long long int) arr_6 [i_2] [i_2]));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))) : ((+(((/* implicit */int) (_Bool)1))))))) ? (max((min((var_5), (((/* implicit */long long int) var_1)))), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
