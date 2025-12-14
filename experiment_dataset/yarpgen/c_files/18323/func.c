/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18323
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-7864451829500157758LL) == (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_16)) : (var_0))))))) >= (var_9)));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((var_7), (((/* implicit */long long int) var_12))))))) : (var_1)));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */long long int) arr_0 [i_0 + 2])))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_13);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */int) var_15))));
        arr_6 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 503316480)) < (2496292453U)));
        var_22 = ((/* implicit */unsigned short) ((short) var_9));
        var_23 = ((/* implicit */long long int) arr_0 [i_1]);
    }
    var_24 = ((/* implicit */int) var_7);
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (var_12)));
}
