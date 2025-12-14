/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133399
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2ULL])) ? (arr_0 [i_0 - 1]) : (0U)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) 708972460U);
    }
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((min(((unsigned char)48), (((/* implicit */unsigned char) var_15)))), ((unsigned char)50)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) var_10))))), (var_2)))));
    var_18 *= ((/* implicit */unsigned short) var_6);
}
