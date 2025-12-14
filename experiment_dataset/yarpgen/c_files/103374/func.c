/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103374
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
    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) var_14))))) : (var_4))) + (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 += ((/* implicit */short) (+((+(((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) % (8022390731155989314ULL)))))));
        var_17 = ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))) : ((+(((var_11) & (((/* implicit */long long int) var_9)))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))))))));
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)121)) + (879597587)));
}
