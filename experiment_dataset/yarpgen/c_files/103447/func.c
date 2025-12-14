/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103447
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
    var_11 = ((((/* implicit */_Bool) min((((/* implicit */int) ((var_10) != (var_6)))), ((~(((/* implicit */int) var_9))))))) ? (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) && (var_0))))))) : (((/* implicit */unsigned long long int) ((((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))));
        var_12 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))) && (((_Bool) arr_0 [i_0]))));
        var_13 *= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) && (((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))));
    }
    var_14 = ((/* implicit */int) (-(((var_1) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_15 = (~(max((((/* implicit */unsigned long long int) var_5)), (max((var_3), (((/* implicit */unsigned long long int) var_9)))))));
}
