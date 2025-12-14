/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147469
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_0 [i_0 - 3] [i_0 + 3]))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_0 [i_0 - 2] [i_0 - 1]))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [7LL] [7LL])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 3] [1ULL])) : (arr_0 [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) 9075888410738578088LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [13ULL] [9ULL])) ? (-9075888410738578093LL) : (arr_1 [i_0] [i_0])))) : (arr_0 [i_0] [(signed char)4]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [(signed char)4]) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 2])) : (arr_0 [i_0] [i_0])))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_1 [i_0 - 2] [0LL]))));
    }
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (var_2)));
    var_17 *= ((/* implicit */short) var_11);
    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2)));
}
