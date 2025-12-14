/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16322
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
    var_19 = ((/* implicit */int) var_3);
    var_20 = ((var_2) + (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */long long int) var_0)) : (var_18)))));
    var_21 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_17);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0])))));
        var_22 = ((/* implicit */_Bool) ((((var_11) != (((/* implicit */unsigned long long int) arr_0 [i_0])))) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) ((short) (unsigned short)63735)))));
        var_23 = ((/* implicit */unsigned int) 5353613508437511766ULL);
    }
}
