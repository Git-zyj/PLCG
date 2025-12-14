/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116421
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (arr_0 [(short)0] [i_0 + 1]) : (arr_0 [i_0] [i_0 + 1])));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_1 [i_0]))));
    }
    var_22 = ((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) || (((/* implicit */_Bool) min((min((var_5), (-436620017))), (((((/* implicit */int) (short)-32496)) / (var_5)))))));
    var_23 = ((/* implicit */_Bool) (+(((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
}
