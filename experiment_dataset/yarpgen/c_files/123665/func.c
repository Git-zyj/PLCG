/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123665
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */unsigned short) max((min((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) var_5))));
        var_13 *= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))) << (((((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))) - (17073)))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) (_Bool)1))))))))) ? (max((((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) 805306368))))))) : (((/* implicit */unsigned long long int) ((2097151U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2023)))))))))));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
    var_16 = var_0;
    var_17 = ((/* implicit */unsigned short) var_7);
}
