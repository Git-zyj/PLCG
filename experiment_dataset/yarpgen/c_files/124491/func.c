/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124491
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
    var_18 = max(((~(3501380735U))), (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51703))) | (var_17))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (var_0)))) : (var_4))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_17))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) var_16)) ? (7098748885895186559ULL) : (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) max((((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) + (154))))), (((/* implicit */int) arr_0 [i_0]))))));
        var_21 = ((/* implicit */unsigned int) var_1);
        arr_3 [(unsigned char)0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12))), (var_12)))) ? (min(((~(var_17))), (((var_12) / (var_2))))) : (((unsigned int) ((signed char) var_3)))));
    }
    var_22 = ((/* implicit */int) var_1);
}
