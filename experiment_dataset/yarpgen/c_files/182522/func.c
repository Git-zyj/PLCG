/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182522
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
    var_20 -= min(((_Bool)0), (((((/* implicit */int) var_0)) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = (!(var_19));
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_2 [i_0] [(_Bool)1]), (arr_2 [i_0] [i_0]))))));
        var_23 += ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) <= (((arr_1 [i_0]) ? (((/* implicit */int) max(((_Bool)1), (var_1)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (_Bool)1))))))));
        var_24 = min((((_Bool) ((_Bool) (_Bool)1))), (((_Bool) arr_0 [(_Bool)1] [i_0])));
        arr_4 [(_Bool)0] [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (!(arr_0 [i_0] [i_0])))) : (max((((/* implicit */int) arr_2 [i_0] [i_0])), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))))))));
    }
    var_25 = var_6;
}
