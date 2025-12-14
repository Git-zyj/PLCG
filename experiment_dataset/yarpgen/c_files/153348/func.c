/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153348
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
    var_19 = ((/* implicit */short) min((var_19), (var_13)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(unsigned char)2] &= ((/* implicit */unsigned int) ((3691389933U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
        var_20 |= (~(max((((/* implicit */unsigned int) ((short) (signed char)123))), (arr_0 [i_0 - 1]))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)79)) << (((((/* implicit */int) (short)-13197)) + (13211)))))) ? (((long long int) (signed char)-120)) : (((/* implicit */long long int) arr_0 [i_0]))))) ? (arr_0 [(short)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13197)))));
    }
}
