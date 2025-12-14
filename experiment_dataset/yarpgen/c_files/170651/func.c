/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170651
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
    var_16 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (var_9))))) != (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned short)30869))))) : (max((((/* implicit */unsigned int) var_1)), (2632267781U)))))));
    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (2146004960) : (((/* implicit */int) var_9)))))))) != (((/* implicit */int) ((min((var_13), (((/* implicit */int) var_4)))) <= (((int) var_2)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) var_11);
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)165)) % (var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) / (var_13)))) : (2632267779U)));
        var_20 = ((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_0 + 1]);
    }
}
