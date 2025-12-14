/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171289
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
    var_10 = ((var_7) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (var_5)))))))));
    var_11 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_9)), (var_1))))) : (4107669566190130882ULL)))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) arr_1 [(signed char)5]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */long long int) 1787508248U)) - (9223372036854775807LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((2507459048U), (((/* implicit */unsigned int) (unsigned short)65535))))));
        var_12 = var_1;
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) min(((-(((/* implicit */int) (short)25495)))), (arr_0 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(2507459045U)))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1787508261U)) ? (1787508248U) : (((/* implicit */unsigned int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)127)))) : (1ULL))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [(_Bool)1]);
    }
}
