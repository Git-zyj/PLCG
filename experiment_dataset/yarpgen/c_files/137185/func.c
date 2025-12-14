/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137185
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-108))))) ? (((((((long long int) -9223372036854775806LL)) + (9223372036854775807LL))) << (((var_7) - (11451922423946350339ULL))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */short) var_6);
        arr_3 [i_0 - 3] [i_0] = ((/* implicit */unsigned short) arr_1 [(unsigned char)1] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((arr_5 [i_1]), (((/* implicit */unsigned int) (unsigned char)241))))) / (((((/* implicit */_Bool) arr_5 [i_1])) ? (8240764259857607913LL) : (((/* implicit */long long int) -2142606505))))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((-2142606489) + (2147483647))) << (((5949634232515482720ULL) - (5949634232515482720ULL)))))) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (var_0)))) != (arr_5 [i_1])))))));
        var_15 -= ((/* implicit */unsigned short) ((unsigned char) ((short) var_1)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_4)), (var_7)));
        arr_10 [i_2] [i_2] = (~(((((/* implicit */_Bool) (~(5949634232515482720ULL)))) ? (((/* implicit */unsigned long long int) 1912160533U)) : ((((_Bool)0) ? (5949634232515482720ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        arr_11 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)56)), (max((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2])))));
    }
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
}
