/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147113
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
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)14] [(short)14]))))) + (((((/* implicit */int) (signed char)-112)) - (-1871162796))))))));
        var_17 += ((/* implicit */signed char) 1871162805);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((/* implicit */long long int) arr_1 [4LL] [i_0])), (min((((/* implicit */long long int) arr_0 [i_0])), (min((((/* implicit */long long int) var_13)), (-3463231611838194975LL))))))))));
    }
    var_19 = ((/* implicit */unsigned char) ((_Bool) -1871162796));
    var_20 = ((/* implicit */signed char) min((((/* implicit */short) min((max((((/* implicit */signed char) var_5)), (var_9))), (var_12)))), (var_8)));
}
