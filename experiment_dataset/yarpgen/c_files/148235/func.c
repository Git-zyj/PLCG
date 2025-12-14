/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148235
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
    var_16 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_12))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((long long int) arr_1 [i_0]))))) / (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_9)))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) arr_3 [(short)5]);
        arr_5 [i_1 - 3] [i_1] = ((/* implicit */short) arr_0 [i_1] [7ULL]);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2LL)) ? (((((/* implicit */_Bool) -721601067)) ? (((/* implicit */int) (short)25132)) : ((-2147483647 - 1)))) : (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1 - 1]))))));
        var_20 = ((/* implicit */unsigned short) var_9);
    }
}
