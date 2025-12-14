/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140231
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
    var_12 = var_8;
    var_13 ^= ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [14LL] [i_0])) ? (5776829689780164810LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (arr_0 [i_0] [i_0]))))) : (((var_10) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
        var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) 13220620262038182629ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))) * (arr_0 [i_0] [i_0])))));
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0))))) ? (max((arr_0 [(_Bool)1] [i_0]), (((/* implicit */unsigned long long int) arr_1 [(unsigned short)10])))) : (((((/* implicit */_Bool) arr_1 [(unsigned short)14])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [12U]))))));
    }
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))), (((/* implicit */unsigned long long int) var_5)))))));
}
