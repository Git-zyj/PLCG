/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168111
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((/* implicit */short) arr_3 [i_0 - 1]);
        arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(1032192U)))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-1)), (4294967295U)))), ((-(arr_3 [i_0 - 2])))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (arr_3 [(short)10])))) ? (117440512) : (((/* implicit */int) (short)32767))));
    }
    var_12 ^= min((((((/* implicit */_Bool) 66584576)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) : (((((/* implicit */unsigned long long int) (-2147483647 - 1))) + (18446744073709551610ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_9)) < (9223372036854775780LL))))) < (((((/* implicit */_Bool) var_8)) ? (9ULL) : (((/* implicit */unsigned long long int) var_5))))))));
}
