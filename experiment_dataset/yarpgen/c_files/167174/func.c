/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167174
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)99)) && (((/* implicit */_Bool) (unsigned short)41097)))) && (((/* implicit */_Bool) arr_0 [i_0]))));
        var_15 = ((/* implicit */long long int) min((((((/* implicit */int) arr_0 [i_0])) >> (((arr_1 [i_0] [i_0]) - (25570915))))), (((/* implicit */int) var_14))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!((!(((/* implicit */_Bool) arr_5 [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((arr_5 [i_1]) * (((/* implicit */unsigned int) arr_4 [i_1])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    }
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_0))));
}
