/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133734
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (var_10)))))) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) >> (((var_14) - (10367123321969529275ULL)))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)253))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (arr_1 [i_0]))))))));
        var_20 = min(((~(arr_2 [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (max((arr_1 [i_0 + 1]), (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)3), (var_17))))))));
        var_21 = ((/* implicit */unsigned long long int) (+((((+(((/* implicit */int) arr_3 [i_0] [i_0 - 1])))) ^ (max((((/* implicit */int) (unsigned char)7)), (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))))) : (((/* implicit */unsigned long long int) arr_1 [i_1]))));
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) ? (arr_5 [i_1]) : (((/* implicit */int) var_17)))) / ((+(((/* implicit */int) (short)29207))))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) (+(var_10))))) % ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (9223372036854775807LL)))))));
    var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 3208681070U)), ((+(((unsigned long long int) var_6))))));
}
