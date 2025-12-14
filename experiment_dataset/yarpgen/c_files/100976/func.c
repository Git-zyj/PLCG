/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100976
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) (~(arr_1 [i_0])));
        var_12 = ((/* implicit */int) ((short) arr_0 [i_0] [i_0]));
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) * (((717630747U) / (3577336548U)))))) ? (var_4) : (max((((((/* implicit */_Bool) (unsigned short)65280)) ? (var_0) : (((/* implicit */int) var_3)))), ((-(((/* implicit */int) var_3))))))));
}
