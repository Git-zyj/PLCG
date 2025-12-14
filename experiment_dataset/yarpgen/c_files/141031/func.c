/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141031
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
    var_17 = ((/* implicit */short) min((((/* implicit */int) ((short) var_11))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min((var_0), (var_12)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) var_6))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0] [i_0]));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (signed char)108))));
        var_21 = ((/* implicit */int) arr_1 [i_1] [i_1]);
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        var_22 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (max((arr_5 [i_2]), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))))) << (((((/* implicit */int) (short)510)) - (474)))));
        var_23 = ((/* implicit */signed char) (unsigned short)0);
    }
    var_24 = ((/* implicit */long long int) var_7);
    var_25 = ((((/* implicit */int) var_4)) == (((((((/* implicit */int) (short)-1)) % (((/* implicit */int) var_16)))) - (((int) var_1)))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (signed char)-1)), (var_3))), (((unsigned long long int) (short)-1))))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) : (4294967291U)));
}
