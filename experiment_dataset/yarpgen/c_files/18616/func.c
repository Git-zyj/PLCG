/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18616
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-51))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)14697))))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) / (var_10)))))) ? (min((((((/* implicit */unsigned int) 1867294003)) / (266115307U))), (((/* implicit */unsigned int) ((signed char) (short)13739))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    }
    var_19 &= (~(((((/* implicit */_Bool) (short)13739)) ? (-526691219) : (((/* implicit */int) (short)-13738)))));
    var_20 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -526691219)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25609))) : (5540145592107003512ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)79)) ? (((((/* implicit */int) (signed char)-36)) % (var_8))) : (((((/* implicit */_Bool) (unsigned short)35105)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) var_11)))))))));
}
