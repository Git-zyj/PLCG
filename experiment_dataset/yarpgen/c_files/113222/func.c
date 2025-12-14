/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113222
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 += ((/* implicit */unsigned char) (((_Bool)1) ? (2147483647) : (-1219403268)));
        var_12 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775807LL)));
        var_13 = ((/* implicit */short) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    var_14 = min((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (1219403267)))))), (var_4));
    var_15 = ((/* implicit */int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 8995498955571988463ULL)))) ? (((/* implicit */int) max((var_7), (var_7)))) : (max((((/* implicit */int) (unsigned char)200)), (var_1)))))), (var_2)));
}
