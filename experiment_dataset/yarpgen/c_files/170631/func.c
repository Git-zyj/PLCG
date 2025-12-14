/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170631
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
    var_18 = ((/* implicit */signed char) var_16);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) (+((+(((/* implicit */int) arr_3 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((arr_0 [i_0]) * (((/* implicit */int) arr_2 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (arr_0 [i_0])))) : ((-(arr_1 [i_0])))))) ? (((((/* implicit */int) arr_2 [i_0])) * (((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))) : ((-(((/* implicit */int) arr_2 [i_0]))))));
        var_20 = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) - (arr_1 [i_0]))))) - (arr_1 [i_0]));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) arr_1 [(short)14]);
        var_22 = ((/* implicit */signed char) arr_1 [4U]);
    }
}
