/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102322
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_2 [i_0]))))), (min((arr_2 [i_0]), (((/* implicit */unsigned int) var_2))))));
        var_20 = ((/* implicit */unsigned long long int) var_11);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_21 += ((/* implicit */short) var_1);
        var_22 &= ((/* implicit */signed char) var_0);
        var_23 *= var_17;
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_1]), (arr_4 [i_1])))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_3 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_12) : (var_3))))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-25303)) : (((/* implicit */int) var_9))))))) : (max((var_17), (var_3)))));
}
