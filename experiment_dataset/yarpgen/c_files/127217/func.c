/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127217
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
    var_15 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_13)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
        var_16 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_6 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), (var_7)))) ? (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        arr_10 [i_1] = (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_1]))));
        arr_11 [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) var_5)), ((~(((/* implicit */int) var_4))))));
    }
}
