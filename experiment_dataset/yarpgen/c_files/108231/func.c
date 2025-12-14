/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108231
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
    var_18 = ((/* implicit */_Bool) var_16);
    var_19 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((var_16) + (5154695665900459778LL)))))) : (((var_7) % (var_7))))), (((/* implicit */unsigned int) var_1)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) min(((-(0U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [5LL])) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [2] [i_0])))))))));
        var_21 = ((/* implicit */int) arr_0 [i_0] [12ULL]);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [8ULL]))))) ? ((-(arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)11] [i_0])))));
        var_23 = ((/* implicit */_Bool) min((arr_1 [7ULL] [(signed char)4]), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < ((+(arr_1 [i_0] [i_0]))))))));
        var_24 = arr_3 [i_0] [i_0];
    }
    var_25 = max((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_5)) - (7035)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_14)) : (var_13))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_7)) : (var_6))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_14))))), (var_5)))));
}
