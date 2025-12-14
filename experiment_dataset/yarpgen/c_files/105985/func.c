/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105985
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
    var_16 ^= ((/* implicit */unsigned short) var_3);
    var_17 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) var_6)))), (((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_6)))) | (((/* implicit */int) var_12))))));
    var_18 = ((/* implicit */int) min(((signed char)-65), (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [14ULL] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(short)14] [i_0])) % (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
}
