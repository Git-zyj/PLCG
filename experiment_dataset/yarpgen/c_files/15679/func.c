/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15679
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((long long int) ((((/* implicit */_Bool) (unsigned short)55595)) ? (((/* implicit */int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))))) : (((/* implicit */int) var_0))));
        var_15 = ((/* implicit */signed char) (unsigned short)11426);
        arr_3 [i_0] = ((/* implicit */signed char) var_9);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)9940)))) : (((((/* implicit */_Bool) ((signed char) (unsigned short)55595))) ? (var_10) : (max((var_3), (((/* implicit */long long int) var_1))))))));
        arr_8 [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (unsigned short)11840)) : (((/* implicit */int) (unsigned short)33868)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-95))))))), (((/* implicit */int) (unsigned short)65535))));
    }
    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_5)));
    var_18 = var_2;
}
