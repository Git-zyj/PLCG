/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108529
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned long long int) (unsigned short)15425);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(-705608986370200549LL)));
        var_18 = ((/* implicit */long long int) max((((/* implicit */short) arr_0 [(short)2])), (arr_2 [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_19 = ((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned short)15425))))));
        var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 306279737)))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) ((signed char) arr_4 [i_1]))) - (118)))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned int) var_9))));
    var_22 *= ((/* implicit */signed char) ((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_23 &= ((/* implicit */unsigned int) var_5);
    var_24 = ((/* implicit */unsigned short) 705608986370200549LL);
}
