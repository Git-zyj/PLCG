/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101381
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
    for (long long int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)-13)), ((unsigned short)59922))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((long long int) (short)-13)))));
    }
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((int) min((((int) var_11)), (((/* implicit */int) var_16))))))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((var_0), (((/* implicit */int) var_14)))))));
    var_20 -= ((/* implicit */short) var_14);
}
