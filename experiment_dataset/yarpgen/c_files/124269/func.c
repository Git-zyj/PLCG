/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124269
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) arr_0 [i_0] [i_0 - 1]);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (arr_0 [i_0] [i_0])))) & (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_18 -= ((/* implicit */short) arr_2 [i_1]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_1])), (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (4294967295U)))))) : (min((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1])))));
    }
    var_20 = ((/* implicit */unsigned short) var_6);
}
