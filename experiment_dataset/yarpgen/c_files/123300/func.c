/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123300
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (1588002896)))));
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) (short)9598)) ? (((/* implicit */int) (_Bool)0)) : (1667842684))) : (((/* implicit */int) max((arr_5 [i_1] [i_1]), (((/* implicit */short) (signed char)64)))))))) && (((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))))));
    }
}
