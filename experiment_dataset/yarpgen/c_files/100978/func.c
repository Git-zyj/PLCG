/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100978
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_13)))) | (var_6)))) ? (max((-4162704586855668449LL), (var_11))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)28)), (1718740927U)))) : (var_9)))));
    var_19 = ((/* implicit */short) ((long long int) var_9));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (min((min((4162704586855668448LL), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((arr_0 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))))))));
    }
}
