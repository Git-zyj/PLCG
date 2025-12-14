/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154339
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_15 += ((/* implicit */signed char) var_3);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((2292341486U) == (((/* implicit */unsigned int) var_9)))))) < (arr_0 [i_0 + 2])));
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) << ((((~(var_3))) - (3174647216U)))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_3 [4LL])));
        var_19 += min(((!(((/* implicit */_Bool) -1971907569)))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1971907568)), (9829029663829236727ULL)))))));
        var_20 = var_2;
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1] [3]))))) * (((((/* implicit */_Bool) arr_6 [i_1])) ? (((var_3) << (((((/* implicit */int) var_11)) - (154))))) : (2002625793U)))));
    }
    var_22 = ((/* implicit */long long int) var_12);
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -5709945041696023378LL)) : (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6100263526509121576ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_12)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (var_3))))) : (var_10)))));
    var_24 = ((/* implicit */_Bool) var_0);
}
