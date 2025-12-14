/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185900
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
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
    var_19 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(14352631528938086159ULL)))) && (((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 = var_15;
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (min((((/* implicit */unsigned long long int) var_17)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_10)))))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))))))));
    }
}
