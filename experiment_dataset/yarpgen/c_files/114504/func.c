/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114504
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_8)) : (max((-2622474114969371948LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)177)) >= (((/* implicit */int) var_17))))))))))));
    var_19 |= ((/* implicit */unsigned char) max((var_16), (((((/* implicit */long long int) ((var_14) >> (((((/* implicit */int) (unsigned short)32966)) - (32958)))))) ^ (var_3)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3178)) - (((/* implicit */int) (short)20984))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))));
    }
}
