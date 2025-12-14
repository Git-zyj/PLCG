/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127243
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) (short)22872))))));
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_4))));
        var_15 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) var_9);
        arr_6 [i_1] = ((/* implicit */short) var_8);
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) var_5))));
        var_18 = ((/* implicit */signed char) arr_5 [i_2] [i_2]);
        var_19 += ((/* implicit */short) var_6);
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */int) var_9)) >> (((var_1) - (17109467534476741654ULL))))), (((/* implicit */int) var_5))));
        var_20 = ((/* implicit */int) var_3);
    }
}
