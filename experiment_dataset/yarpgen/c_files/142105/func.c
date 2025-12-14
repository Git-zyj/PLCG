/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142105
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (11959833555208667581ULL) : (18446744073709551603ULL)))) ? (max((18446744073709551615ULL), (17443393769271205156ULL))) : (3087770706771607121ULL)))) ? (var_14) : (((/* implicit */unsigned long long int) var_13)));
    var_20 = max((min((min((((/* implicit */unsigned long long int) -5972979900418687720LL)), (16791182388087604840ULL))), (min((18243365941926843042ULL), (var_11))))), (((((/* implicit */unsigned long long int) ((long long int) var_9))) | (min((0ULL), (((/* implicit */unsigned long long int) 9187343239835811840LL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [0LL]))) ? (((unsigned long long int) -5227675401627849485LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4487691571926390219LL)))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_0 [12LL]))))))))));
        var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 17528273543756335832ULL)))) ? (var_7) : (min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))));
    }
}
