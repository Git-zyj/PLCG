/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169653
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
        var_12 = ((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((-(((/* implicit */int) var_0))))));
        var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))));
        var_15 = ((/* implicit */_Bool) (~(min((((/* implicit */int) ((_Bool) var_1))), ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_16 -= ((/* implicit */_Bool) ((((((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) * (((/* implicit */int) var_2))));
    }
    var_17 = ((((((/* implicit */int) var_9)) >> (((var_5) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))) == (min((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) (_Bool)0)))))));
}
