/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130265
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
    var_14 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) (-(((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1649983524U)))));
        var_16 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)90)) ? (1649983504U) : (((/* implicit */unsigned int) -313541407))))));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_9)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
        var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_0))))))));
    }
}
