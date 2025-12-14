/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101239
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 *= min((((/* implicit */unsigned int) ((short) var_5))), (((unsigned int) arr_0 [i_0] [i_0])));
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -948189464))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)20])))))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_0 [i_0] [i_0])))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8))))))) ? ((-(((((/* implicit */unsigned long long int) var_0)) / (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
