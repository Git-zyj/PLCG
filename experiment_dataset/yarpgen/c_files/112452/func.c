/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112452
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
    var_12 *= ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned char)221))))), (var_2))));
    var_13 += var_10;
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned char)247))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((unsigned short) var_11));
        arr_2 [(short)9] [i_0] = ((/* implicit */short) var_2);
        var_16 ^= ((/* implicit */long long int) min(((unsigned char)28), ((unsigned char)35)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) / (min((((/* implicit */long long int) var_4)), (arr_1 [(short)10]))))) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)150)))))));
        var_18 = min((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4095)) != (((/* implicit */int) var_10))))), (var_4)))), (((((/* implicit */_Bool) (short)-256)) ? ((((_Bool)1) ? (arr_5 [i_1]) : (((/* implicit */int) (unsigned short)63208)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)22899)))))));
        arr_6 [i_1] = min((((((var_11) - (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8482)) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) (unsigned char)35))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1253124205)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) (unsigned short)2328)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) arr_4 [i_1]))))))));
    }
}
