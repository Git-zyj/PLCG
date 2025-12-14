/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132126
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
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_7)), (var_1)));
    var_15 |= ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)15))))));
        var_16 = ((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1])))));
    }
    for (long long int i_1 = 2; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((max((arr_4 [i_1 - 2]), (arr_4 [i_1 + 3]))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 3]))))))));
        var_18 = ((/* implicit */unsigned int) ((_Bool) 9223372036854775807LL));
        var_19 -= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 14801337273834362289ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2435))) : (arr_5 [i_1]))) - (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23221))))))) != (((((/* implicit */_Bool) var_11)) ? (((arr_5 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))))) : (arr_0 [i_1])))));
    }
}
