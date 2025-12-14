/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168626
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= max((arr_1 [i_0]), (max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [(signed char)5])) & (((/* implicit */int) var_6)))), (((/* implicit */int) arr_0 [i_0] [i_0]))))) || (((/* implicit */_Bool) min((((((((/* implicit */int) (signed char)-120)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (30))) - (4))))), (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [(signed char)10])) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) (signed char)85))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [(signed char)14])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_4 [i_1 - 1])))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_1] [i_1])))))))));
        arr_7 [i_1] &= arr_5 [i_1 + 2];
        var_23 -= var_15;
    }
    var_24 = min((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-120)))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))))));
}
