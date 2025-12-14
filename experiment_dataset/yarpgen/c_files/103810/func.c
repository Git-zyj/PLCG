/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103810
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
        arr_3 [i_0] = ((/* implicit */short) var_1);
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((var_8), (var_0)))))) : (max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))));
    }
    var_11 = min((((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) == (((/* implicit */int) var_6)))) ? ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)46769)))) : ((+(((/* implicit */int) (unsigned char)94))))))), (((((/* implicit */_Bool) 3937735623U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (4294967295U))));
}
