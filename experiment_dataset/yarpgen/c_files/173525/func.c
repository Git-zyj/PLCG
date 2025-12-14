/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173525
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) (short)32765)), (var_10)));
    var_20 += ((/* implicit */signed char) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(min((((/* implicit */long long int) (signed char)112)), ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63519)))))))));
        var_21 ^= ((/* implicit */unsigned short) ((((((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)18] [i_0]))))) ^ (max((((/* implicit */unsigned int) (signed char)-72)), (arr_1 [i_0]))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) (unsigned short)7167)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [(short)2] [i_0])))))))))));
    }
    var_23 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) min((var_16), (((/* implicit */short) var_2))))))), (((min((var_10), (((/* implicit */int) var_13)))) | (var_18)))));
}
