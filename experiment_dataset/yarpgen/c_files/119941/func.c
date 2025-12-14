/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119941
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (var_6)))) * (min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (signed char)127)) ? (var_8) : (((/* implicit */int) var_1))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))) * (((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_11)))) + (((((/* implicit */int) var_11)) >> (((var_13) - (17961772692044741846ULL)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_3 [10LL] [10LL] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((var_5), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) ((min((((/* implicit */int) var_4)), (var_8))) >> (((((/* implicit */int) var_12)) - (11224))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)105)) - (98)))));
        var_17 = ((/* implicit */_Bool) (~(min((((/* implicit */int) var_4)), (((((/* implicit */int) var_7)) << (((arr_0 [i_0 - 1]) - (112621680561583876LL)))))))));
    }
    var_18 = ((/* implicit */unsigned int) max((var_18), ((((!(((/* implicit */_Bool) (unsigned short)39758)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)5117)) : (((/* implicit */int) var_9))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_6)))))))));
}
