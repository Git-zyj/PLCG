/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116482
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
    var_13 = ((/* implicit */int) min((var_8), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_12)))) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -9125684159309730468LL)))))))));
    var_14 = ((/* implicit */_Bool) max((-1616349341123303648LL), (((/* implicit */long long int) (_Bool)1))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_2) ? (var_4) : (((/* implicit */int) var_9)))), (((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-1616349341123303670LL)));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2]))))) && (((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0 - 2]))))))));
        var_16 = ((/* implicit */unsigned char) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524)))));
    }
    var_17 = ((/* implicit */int) ((unsigned int) (((~(var_3))) >= (((/* implicit */int) ((unsigned short) 1616349341123303661LL))))));
}
