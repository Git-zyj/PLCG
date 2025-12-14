/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105340
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = arr_0 [i_0];
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) var_9);
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) (short)1169)) ? (0ULL) : (((/* implicit */unsigned long long int) 481008177882576085LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65515))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_15))))))))));
    }
    var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((-916118988) / (((/* implicit */int) (unsigned short)10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((var_10), (((/* implicit */unsigned long long int) var_12)))))), (((((/* implicit */unsigned long long int) var_0)) / ((-(var_10)))))));
}
