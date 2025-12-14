/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152138
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((arr_2 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0 - 1]))))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [(unsigned char)10])))))));
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))))) - (((arr_2 [i_0] [i_0 - 1]) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) var_6))))) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_11))))) : (var_7))))))));
}
