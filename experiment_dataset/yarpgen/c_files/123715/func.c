/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123715
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
    var_19 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((9187343239835811840LL) / (((/* implicit */long long int) var_6))))) ? (max((-9187343239835811843LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) max((var_5), (var_11)))))), (((((/* implicit */_Bool) var_4)) ? (min((var_16), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((unsigned int) var_17)))))));
    var_20 = var_2;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((var_16) + (9223372036854775807LL))) >> (((arr_1 [(short)8]) - (7427562914842062925LL))))) > (((/* implicit */long long int) (+(arr_0 [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9187343239835811843LL)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (8) : (((/* implicit */int) var_13))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */int) var_3))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) : (((var_18) >> (((134217727ULL) - (134217712ULL)))))));
        var_24 = (+(arr_4 [i_1] [i_1]));
        var_25 *= ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1] [i_1]));
        var_26 = ((/* implicit */unsigned int) (-(-2842656319985277811LL)));
    }
    for (long long int i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        arr_7 [i_2 - 4] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(var_16)))), (((unsigned long long int) arr_6 [i_2] [i_2]))));
        var_27 *= ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_2 - 4])) : (var_12))), (((/* implicit */unsigned long long int) min((((long long int) var_0)), (((/* implicit */long long int) min((var_11), (var_11)))))))));
    }
}
