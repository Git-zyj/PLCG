/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157248
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) arr_0 [i_0])))) & (min((((0) | (((/* implicit */int) (signed char)-113)))), (((/* implicit */int) arr_0 [i_0]))))));
        var_11 = ((/* implicit */short) (+(((/* implicit */int) (signed char)113))));
        arr_3 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 1])), (arr_0 [i_0])))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))) * ((-(((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    var_12 = ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) var_3))))), ((~(var_9)))))));
}
