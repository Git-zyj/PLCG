/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176297
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((-26280434341563408LL), (((/* implicit */long long int) (short)6940)))), (((/* implicit */long long int) ((631153534U) & (631153538U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) var_12)), (var_0)))) & (((/* implicit */int) var_12))))) : (min(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) var_6))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1423993485U))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    var_16 = ((/* implicit */_Bool) var_2);
}
