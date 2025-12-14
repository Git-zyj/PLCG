/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187512
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) (signed char)-44)) == (((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (signed char)-25))))) ^ (15))))))));
    var_16 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21863)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (_Bool)1)))))));
        var_18 = arr_2 [i_0];
    }
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_0)) : (min((15), (((/* implicit */int) (signed char)43)))))) | (((/* implicit */int) var_4))));
}
