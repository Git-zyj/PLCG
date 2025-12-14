/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152429
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
    var_12 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) var_5)) + (54)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_9)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) arr_1 [i_0] [0ULL]);
        arr_2 [i_0] = ((/* implicit */_Bool) (-((-(var_7)))));
        var_14 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) var_4)))) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) var_6))))) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_0 [0LL])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_6))))) : ((((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (((((var_9) + (2147483647))) >> (((var_8) + (956251236)))))))));
    }
}
